
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B */

void __thiscall
FUN_004deeb0(void *this,Global_sub_004CAFC0_param_1Enum param_1,undefined4 param_2,uint *param_3,
            uint *param_4)

{
  switch(*(undefined4 *)((int)this + 0x4d0)) {
  case 0:
    *param_3 = 0;
    *param_4 = 0xe;
    return;
  case 1:
    *param_3 = 0xf;
    *param_4 = 0x1d;
    return;
  case 2:
    *param_3 = 0x2d;
    *param_4 = 0x2d;
    return;
  case 3:
    *param_3 = 0x1e;
    *param_4 = 0x2d;
  }
  return;
}

