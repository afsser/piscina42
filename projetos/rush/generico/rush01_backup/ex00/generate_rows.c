
extern char g_row_p[24][4];

void	generate_rows(void)
{
	// generate row possibilities
	char arr[4];
	int row_p_number = 0;
 	arr[0] = '1';
    while (arr[0] <= '4') {
        arr[1] = '1';
        while (arr[1] <= '4') {
            arr[2] = '1';
            while (arr[2] <= '4') {
                arr[3] = '1';
                while (arr[3] <= '4') {
                    // if there are no repeated numbers, store in row_p
                    int is_valid = 1;
                    int m = 0;
                    while (m < 4) {
                        int n = m + 1;
                        while (n < 4) {
                            if (arr[m] == arr[n]) {
                                is_valid = 0;
                                break;
                            }
                            n++;
                        }
                        if (!is_valid) {
                            break;
                        }
                        m++;
                    }
                    if (is_valid) {
                        int k = 0;
                        while (k < 4) {
                            g_row_p[row_p_number][k] = arr[k];
                            k++;
                        }
                        row_p_number++;
                    }

                    arr[3]++;
                }
                arr[2]++;
            }
            arr[1]++;
        }
        arr[0]++;
    }
}