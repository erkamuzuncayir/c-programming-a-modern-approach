//
// Created by erkam on 2/19/25.
//

#include <stdio.h>

int main(void)
{
    int share_count;
    float commission, rival_commision, price_per_share, value;

    printf("Enter number of shares: ");
    scanf("%d", &share_count);
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    value = price_per_share * share_count;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    rival_commision = share_count < 2000 ? 33.0f + .03f * share_count : 33.0f + .02f * share_count;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rival_commision);

    return 0;
}
