def main () -> None:
    with open('inputs/names-scores') as file:
        total_score = 0
        names = file.readlines()[0].split(',')

        names = sorted(names)
        position = 1

        for name in names:
            name = name.replace('"', '')
            this_score = sum([ord(c) - 64 for c in list(name) if c != '\n'])

            total_score += position * this_score
            position += 1

        file.close()
        print(total_score)

if __name__ == '__main__':
    main()
