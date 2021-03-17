#include "PretendingToBeProgram.h"

void DungStatusChange::DungMain(void) {
	/* 50文字まで#を表示する。 */
	int numOfDisplay = 50;
	/* カウントアップ用変数 */
	int cntDisplay = 0;
	/* 待ち時間 */
	int sleepTime = 10;
	/* 乱数格納用の変数 */
	int randomNum = 0;
	/* 待ち時間が伸びる閾値 */
	int Threshold = RAND_MAX / 2;
	while (true)
	{
		if (numOfDisplay > cntDisplay) {
			/* 上限まで#を足していく。 */
			cout << "#";
			cntDisplay++;
		}
		else {
			/* 終わった感のある文字を出力し、 */
			cout << "done!!" << endl;
			/* カウントをリセット */
			cntDisplay = 0;
		}
		/* 高速で出力すると作業感が少ないので、 */
		/* 待ち時間を作成する。 */
		randomNum = rand();
		if (randomNum > Threshold) {
			sleepTime = 100;
		}

		/* 待つ */
		sleep_for(milliseconds(sleepTime));
	}
}