
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD430 @ 004C6372; /TLOBldMark+0x2c | 004C6440 -> 004AD430 @ 004C68AF;
   /TLOBldMark+0x2c | 004CC900 -> 004AD430 @ 004CC938; /TLOBaseTy+0x603 */

void __fastcall FUN_004ad430(STT3DSprC *param_1)

{
  Library::Ourlib::ST3DSMAP::SprHide(param_1->field_003C,param_1->field_0018);
  param_1->field_0012 = 1;
  return;
}

