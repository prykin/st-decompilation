
void __fastcall FUN_0048a670(void *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  
  switch(*(undefined4 *)((int)param_1 + 0x6f7)) {
  case 1:
  case 0x20:
    *(undefined4 *)((int)param_1 + 0x219) = 0x5a;
    break;
  case 2:
  case 5:
  case 6:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x26:
  case 0x27:
  case 0x28:
    *(undefined4 *)((int)param_1 + 0x219) = 0x8c;
    break;
  case 3:
  case 4:
  case 0xb:
  case 0xf:
    *(undefined4 *)((int)param_1 + 0x219) = 0xbe;
    break;
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    break;
  case 10:
  case 0x17:
  case 0x22:
    *(undefined4 *)((int)param_1 + 0x219) = 0xfa;
    break;
  case 0x16:
    *(undefined4 *)((int)param_1 + 0x219) = 0xe6;
    break;
  case 0x23:
    *(undefined4 *)((int)param_1 + 0x219) = 0xaa;
    break;
  default:
    iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x46b8,0,0,&DAT_007a4ccc,
                               s_STBoatC___SetSpeedFireLife_unkno_007ab9a8);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = thunk_FUN_00430750(*(int *)((int)param_1 + 0x6f7));
  thunk_FUN_00417ff0(param_1,bVar3);
  thunk_FUN_00418010(param_1,bVar3 / 2);
  uVar1 = *(undefined4 *)(&DAT_007dfbac + *(int *)((int)param_1 + 0x6f7) * 4);
  *(undefined4 *)((int)param_1 + 0x716) = uVar1;
  *(undefined4 *)((int)param_1 + 0x712) = uVar1;
  return;
}

