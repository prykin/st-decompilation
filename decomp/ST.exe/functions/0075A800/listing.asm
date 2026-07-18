FUN_0075a800:
0075A800  55                        PUSH EBP
0075A801  8B EC                     MOV EBP,ESP
0075A803  56                        PUSH ESI
0075A804  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075A807  57                        PUSH EDI
0075A808  8B BE 9A 01 00 00         MOV EDI,dword ptr [ESI + 0x19a]
0075A80E  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0075A811  85 C0                     TEST EAX,EAX
0075A813  74 2F                     JZ 0x0075a844
0075A815  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0075A818  85 C0                     TEST EAX,EAX
0075A81A  74 21                     JZ 0x0075a83d
0075A81C  56                        PUSH ESI
0075A81D  E8 3E 06 00 00            CALL 0x0075ae60
0075A822  85 C0                     TEST EAX,EAX
0075A824  74 17                     JZ 0x0075a83d
0075A826  C7 47 0C 80 AF 75 00      MOV dword ptr [EDI + 0xc],0x75af80
0075A82D  C7 86 94 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x94],0x0
0075A837  5F                        POP EDI
0075A838  5E                        POP ESI
0075A839  5D                        POP EBP
0075A83A  C2 04 00                  RET 0x4
LAB_0075a83d:
0075A83D  C7 47 0C B0 AC 75 00      MOV dword ptr [EDI + 0xc],0x75acb0
LAB_0075a844:
0075A844  C7 86 94 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x94],0x0
0075A84E  5F                        POP EDI
0075A84F  5E                        POP ESI
0075A850  5D                        POP EBP
0075A851  C2 04 00                  RET 0x4
