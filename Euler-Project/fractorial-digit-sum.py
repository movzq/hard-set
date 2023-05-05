def main () -> None:
    n = 1
    for i in range(1, 101):
        n *= i
    print(sum([int(p) for p in str(n)]))

if __name__ == '__main__':
    main()
