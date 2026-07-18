FUN_0074854f:
0074854F  55                        PUSH EBP
00748550  8B EC                     MOV EBP,ESP
00748552  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00748555  85 C0                     TEST EAX,EAX
00748557  75 07                     JNZ 0x00748560
00748559  B8 09 02 04 80            MOV EAX,0x80040209
0074855E  EB 1A                     JMP 0x0074857a
LAB_00748560:
00748560  8B 08                     MOV ECX,dword ptr [EAX]
00748562  DD 45 18                  FLD double ptr [EBP + 0x18]
00748565  51                        PUSH ECX
00748566  51                        PUSH ECX
00748567  DD 1C 24                  FSTP double ptr [ESP]
0074856A  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074856D  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00748570  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00748573  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748576  50                        PUSH EAX
00748577  FF 51 44                  CALL dword ptr [ECX + 0x44]
LAB_0074857a:
0074857A  5D                        POP EBP
0074857B  C2 18 00                  RET 0x18
