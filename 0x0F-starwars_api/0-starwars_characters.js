#!/usr/bin/node
/*
  Script that prints all characters of a Star Wars movie
*/
const movId = process.argv[2];
const url = 'https://swapi-api.hbtn.io/api/films/' + movId;
const request = require('request');

// https://javascript.info/async-await
request(url, async (error, response, body) => {
  if (error) {
    console.log(error);
  } else {
    const listChar = JSON.parse(body).characters;
    // Test => console.log(listChar);
    for (const urlCharacter of listChar) {
      // Test url/api => console.log(`This is API character => ${urlCharacter}`);
      console.log(await getNameChar(urlCharacter));
    }
  }
});

/**
  Function to catch the character name in order, using promise
  https://javascript.info/promise-basics
*/
function getNameChar (apiCharacter) {
  const promise = new Promise((resolve, reject) => {
    request(apiCharacter, (error, response, body) => {
      if (error) { reject(error); }
      else { resolve(JSON.parse(body).name); }
    });
  });
  return promise;
}

