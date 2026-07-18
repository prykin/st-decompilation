FUN_00486aa0:
00486AA0  55                        PUSH EBP
00486AA1  8B EC                     MOV EBP,ESP
00486AA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00486AA6  85 C0                     TEST EAX,EAX
00486AA8  7D 07                     JGE 0x00486ab1
00486AAA  B8 01 00 00 00            MOV EAX,0x1
00486AAF  EB 0A                     JMP 0x00486abb
LAB_00486ab1:
00486AB1  83 F8 64                  CMP EAX,0x64
00486AB4  7E 05                     JLE 0x00486abb
00486AB6  B8 64 00 00 00            MOV EAX,0x64
LAB_00486abb:
00486ABB  8B 91 12 07 00 00         MOV EDX,dword ptr [ECX + 0x712]
00486AC1  0F AF D0                  IMUL EDX,EAX
00486AC4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00486AC9  F7 EA                     IMUL EDX
00486ACB  C1 FA 05                  SAR EDX,0x5
00486ACE  8B C2                     MOV EAX,EDX
00486AD0  C1 E8 1F                  SHR EAX,0x1f
00486AD3  03 D0                     ADD EDX,EAX
00486AD5  89 91 16 07 00 00         MOV dword ptr [ECX + 0x716],EDX
00486ADB  5D                        POP EBP
00486ADC  C2 04 00                  RET 0x4
