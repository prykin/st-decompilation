FUN_00717910:
00717910  55                        PUSH EBP
00717911  8B EC                     MOV EBP,ESP
00717913  53                        PUSH EBX
00717914  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00717917  56                        PUSH ESI
00717918  8B F1                     MOV ESI,ECX
0071791A  57                        PUSH EDI
0071791B  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
0071791E  8B 06                     MOV EAX,dword ptr [ESI]
00717920  85 C0                     TEST EAX,EAX
00717922  74 1A                     JZ 0x0071793e
00717924  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00717927  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0071792A  57                        PUSH EDI
0071792B  03 CA                     ADD ECX,EDX
0071792D  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00717930  53                        PUSH EBX
00717931  51                        PUSH ECX
00717932  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00717935  03 D1                     ADD EDX,ECX
00717937  52                        PUSH EDX
00717938  50                        PUSH EAX
00717939  E8 42 E6 F9 FF            CALL 0x006b5f80
LAB_0071793e:
0071793E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00717941  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00717944  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00717947  6A 00                     PUSH 0x0
00717949  6A 00                     PUSH 0x0
0071794B  6A 00                     PUSH 0x0
0071794D  6A 00                     PUSH 0x0
0071794F  6A 00                     PUSH 0x0
00717951  57                        PUSH EDI
00717952  53                        PUSH EBX
00717953  50                        PUSH EAX
00717954  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00717957  51                        PUSH ECX
00717958  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071795B  52                        PUSH EDX
0071795C  50                        PUSH EAX
0071795D  51                        PUSH ECX
0071795E  E8 BD AE FB FF            CALL 0x006d2820
00717963  5F                        POP EDI
00717964  5E                        POP ESI
00717965  5B                        POP EBX
00717966  5D                        POP EBP
00717967  C2 20 00                  RET 0x20
