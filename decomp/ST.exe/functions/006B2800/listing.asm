FUN_006b2800:
006B2800  55                        PUSH EBP
006B2801  8B EC                     MOV EBP,ESP
006B2803  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B2806  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B2809  3B 82 A0 01 00 00         CMP EAX,dword ptr [EDX + 0x1a0]
006B280F  73 38                     JNC 0x006b2849
006B2811  8B 8A B0 01 00 00         MOV ECX,dword ptr [EDX + 0x1b0]
006B2817  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006B281A  8B 08                     MOV ECX,dword ptr [EAX]
006B281C  81 E1 00 C0 00 00         AND ECX,0xc000
006B2822  81 F9 00 C0 00 00         CMP ECX,0xc000
006B2828  75 1F                     JNZ 0x006b2849
006B282A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B282D  50                        PUSH EAX
006B282E  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
006B2831  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
006B2834  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
006B2837  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B283A  52                        PUSH EDX
006B283B  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
006B283E  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
006B2841  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
006B2844  E8 97 FB FF FF            CALL 0x006b23e0
LAB_006b2849:
006B2849  5D                        POP EBP
006B284A  C2 10 00                  RET 0x10
