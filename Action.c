Action()
{
lr_start_transaction("01_test");
lr_think_time(3);
lr_end_transaction("01_test", LR_AUTO);

lr_start_transaction("02_test");
lr_think_time(3);
lr_end_transaction("02_test", LR_AUTO);

lr_start_transaction("03_test");
lr_think_time(3);  //added at 18:21
lr_end_transaction("03_test", LR_AUTO);


	return 0;
}