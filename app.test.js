const suma = require('./app');

test('2 + 3 debe ser 5', () => {
  expect(suma(2, 3)).toBe(5);
});