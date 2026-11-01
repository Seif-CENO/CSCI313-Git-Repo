import unittest
from Calculator import add


class TestAddition(unittest.TestCase):

    def test_addition_positive_numbers(self):
        self.assertEqual(add(5, 3), 8)

    def test_addition_negative_numbers(self):
        self.assertEqual(add(-5, -3), -8)

    def test_addition_positive_and_negative(self):
        self.assertEqual(add(-5, 3), 2)

    def test_addition_decimal_numbers(self):
        self.assertAlmostEqual(calculate(1.5, 2.5), 4.0)


if __name__ == "__main__":
    unittest.main()
