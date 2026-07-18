FUN_00580860:
00580860  55                        PUSH EBP
00580861  8B EC                     MOV EBP,ESP
00580863  56                        PUSH ESI
00580864  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00580867  57                        PUSH EDI
00580868  8B F9                     MOV EDI,ECX
0058086A  C6 06 04                  MOV byte ptr [ESI],0x4
0058086D  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
00580871  8B 07                     MOV EAX,dword ptr [EDI]
00580873  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00580876  89 46 02                  MOV dword ptr [ESI + 0x2],EAX
00580879  C6 46 06 00               MOV byte ptr [ESI + 0x6],0x0
0058087D  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00580880  5F                        POP EDI
00580881  89 4E 07                  MOV dword ptr [ESI + 0x7],ECX
00580884  5E                        POP ESI
00580885  5D                        POP EBP
00580886  C2 04 00                  RET 0x4
