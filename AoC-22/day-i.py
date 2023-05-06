def main () -> None:
    with open("inputs/d-i") as file:
        tops = []
        curr = 0

        for lisT in file.readlines():
            if lisT == '\n':
                tops.append(curr)
                curr = 0
                continue
            curr += int(lisT[:-1])

        tops = sorted(tops, reverse = True)

        print(tops[0])
        print(sum(tops[:3]))
        file.close()

if __name__ == '__main__':
    main()
