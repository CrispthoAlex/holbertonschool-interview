#!/usr/bin/python3
"""
Recursive function that queries the Reddit API, parses the title of all
hot articles, and prints a sorted count of given keywords (case-insensitive,
delimited by spaces.
"""
import requests


def count_words(subreddit, word_list, after='', my_dict={}):
    """
    Method to parse the title of all hot articles, and prints a sorted count
    of given keywords (case-insensitive, delimited by spaces. Javascript
    should count as javascript, but java should not).
    Words must be printed in lowercase.
    """
    url = 'https://www.reddit.com/r/{}/hot.json?after={}'
    rq = requests.get(url.
                      format(subreddit, after),
                      headers={'User-Agent': 'custom'},
                      allow_redirects=False)

    if rq and rq.status_code == 200:
        list_req = rq.json().get('data').get('children')
        for children in list_req:
            get_title = children.get('data').get('title')
            for word in word_list:
                try:
                    my_dict[word] += get_title.lower().split().count(
                        word.lower())
                except KeyError:
                    my_dict[word] = get_title.lower().split().count(
                        word.lower())

        after = rq.json().get('data').get('after')
        if (after is None):
            for key, val in sorted(my_dict.items(),
                                   key=lambda x: (-x[1], x[0])):
                if (val != 0):
                    print("{}: {}".format(key.lower(), val))
            return
        return count_words(subreddit, word_list, after, my_dict)
    else:
        return