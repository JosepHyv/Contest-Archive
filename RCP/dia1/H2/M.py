"""
Debe haber:
- Exactamente 3 numeros
  - No deben iniciar con 0
  - No deben tener signo
  - El primero es un número par > 3 && <= 10^9
  - El segundo y el tercero deben ser primos y deben sumar el primero
NO debe haber:
- Caracteres alfabeticos
- Mas de 3 numeros
"""

import sys
import string


def is_prime(value):
    if value < 2:
        return False
    for div in range(2, int(value ** 0.5) + 1):
        if value % div == 0:
            return False
    return True


def fatal_error_in(token):
    bad_ascii = string.ascii_letters + string.punctuation

    for symbol in bad_ascii:
        if symbol in token:
            return True

    if token.startswith("0"):
        return True

    return False


def is_invalid(token, order):

    if order == 1:
        num_val = int(token)

        more_than_3 = num_val > 3
        is_even = num_val % 2 == 0
        less_than_1e9 = num_val <= int(1e9)

        return not (more_than_3 and is_even and less_than_1e9)

    if order > 1:
        num_val = int(token)
        return not (is_prime(num_val))


def main():

    answer = None
    order = 1
    for line in sys.stdin:
        a, b, c = (None, None, None)

        for token in line.split():
            if fatal_error_in(token):
                #                print(repr(token))
                print(0)
                return

            # print(">>>", repr(token))
            if is_invalid(token, order):
                # print(repr(token), "//", order)
                print(0)
                return

            # If we already have 1 as answer
            # then we only have to look for
            # fatal errors

            if answer is not None:
                # print("skip")
                continue

            if a is None:
                # print("increasing order")
                a = int(token)
                order += 1

                # print(f"{a=}")
                # print(f"{order=}")
            elif b is None:
                b = int(token)
                order += 1
            else:
                c = int(token)
                if b + c != a:
                    # print(f"{b} + {c} != {a} (true)")
                    print(0)
                    return

    print(1)


if __name__ == "__main__":
    main()