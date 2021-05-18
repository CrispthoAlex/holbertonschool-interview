#!/usr/bin/node
// script that prints all characters of a Star Wars movie
const movId = process.argv[2];
const url = 'https://swapi-api.hbtn.io/api/films/' + movId;
const { isNumber } = require('lodash');
const request = require('request');

if (movId != undefined || isNumber(movId)) {
    request(url, (error, response, body) => {
      if (error) {
        console.log(error);
      } else {
        const listChar = JSON.parse(body).characters;

        listChar.forEach(character => {
            request(character, (error, response, body) => {
                if (error) { console.log(error); } else { console.log(JSON.parse(body).name); }
              });
        });
      }
    });
    
} else {
    console.log("Usage:\t./0-starwars_characters.js [Movie ID]")
}
