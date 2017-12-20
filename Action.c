Action()
{
lr_start_transaction("01_test");
lr_thinktime(30);
lr_end_transaction("01_test", LR_AUTO);



	return 0;
}