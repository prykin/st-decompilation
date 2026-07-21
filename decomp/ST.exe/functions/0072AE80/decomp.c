
void FUN_0072ae80(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;

  do {
    do {
      WaitForSingleObject(*(HANDLE *)(*DAT_00857134 + 0x508),0xffffffff);
      DAT_0085712c = DAT_00857130;
      iVar3 = 0;
      DAT_00857138 = DAT_0085711c;
    } while (DAT_0085711c < 1);
    do {
      DVar1 = WaitForSingleObject(*(HANDLE *)(*DAT_00857134 + 0x508),DAT_0085712c);
      if (DVar1 == 0x102) {
        EnterCriticalSection((LPCRITICAL_SECTION)(*DAT_00857134 + 0x4f0));
        if ((DAT_00857134[0x68] <= DAT_007f1080) ||
           (DAT_00857118 = *(uint **)(DAT_00857134[0x6c] + DAT_007f1080 * 4),
           (*DAT_00857118 & 0x8000) == 0)) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(*DAT_00857134 + 0x4f0));
          break;
        }
        if ((DAT_00857118[0x30] != 0) &&
           ((iVar2 = Library::Ourlib::SINPUT::FUN_0071b630
                               (DAT_00857128,&local_c,&local_8,(int *)0x0), iVar2 != 0 &&
            (Library::DKW::DDX::FUN_006b3730
                       (DAT_00857134,DAT_007f1080,0xfffffffe,local_c - DAT_00857120,
                        local_8 - DAT_00857124), (*DAT_00857118 & 4) != 0)))) {
          FUN_0072b0b0();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(*DAT_00857134 + 0x4f0));
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = 0;
      }
    } while (iVar3 < DAT_00857138);
  } while( true );
}

