# Module 4 homework dev version

## Link to .js file against which eslint was ran - https://github.com/vjegorovs/nlp-optimization/blob/master/main.js

## Steps:

### Intall ESLint with npm:

- ![npm install eslint --save-dev](step1.png)

### Quick setup eslint with npx eslint --init:

- ![npx eslint](step2.png)

### Run eslint against target js file with npx eslint jsfilename.js:

- ![npx eslint main.js](step3.png)

#### Analysis - 'nerdamer' errors because I load a script in html not npm/es6 module, others are valid bugs to fix :D

## Changing config rules

### Default config:

- ![elsint defaults](step4_1.png)

### Added a custom rule:

- ![new rule](step4_2.png)

### New result with the new added warnings:

- ![elsint defaults](step4_3.png)
