#include "PretendingToBeProgram.h"

void DungStatusChange::DungMain(void) {
	/* 50�����܂�#��\������B */
	int numOfDisplay = 50;
	/* �J�E���g�A�b�v�p�ϐ� */
	int cntDisplay = 0;
	/* �҂����� */
	int sleepTime = 10;
	/* �����i�[�p�̕ϐ� */
	int randomNum = 0;
	/* �҂����Ԃ��L�т�臒l */
	int Threshold = RAND_MAX / 2;
	while (true)
	{
		if (numOfDisplay > cntDisplay) {
			/* ����܂�#�𑫂��Ă����B */
			cout << "#";
			cntDisplay++;
		}
		else {
			/* �I��������̂��镶�����o�͂��A */
			cout << "done!!" << endl;
			/* �J�E���g�����Z�b�g */
			cntDisplay = 0;
		}
		/* �����ŏo�͂���ƍ�Ɗ������Ȃ��̂ŁA */
		/* �҂����Ԃ��쐬����B */
		randomNum = rand();
		if (randomNum > Threshold) {
			sleepTime = 100;
		}

		/* �҂� */
		sleep_for(milliseconds(sleepTime));
	}
}