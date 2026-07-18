FUN_00759080:
00759080  55                        PUSH EBP
00759081  8B EC                     MOV EBP,ESP
00759083  83 EC 08                  SUB ESP,0x8
00759086  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759089  53                        PUSH EBX
0075908A  56                        PUSH ESI
0075908B  57                        PUSH EDI
0075908C  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0075908F  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
00759092  8B 1E                     MOV EBX,dword ptr [ESI]
00759094  85 FF                     TEST EDI,EDI
00759096  75 0D                     JNZ 0x007590a5
00759098  50                        PUSH EAX
00759099  FF 56 0C                  CALL dword ptr [ESI + 0xc]
0075909C  85 C0                     TEST EAX,EAX
0075909E  74 74                     JZ 0x00759114
007590A0  8B 1E                     MOV EBX,dword ptr [ESI]
007590A2  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
LAB_007590a5:
007590A5  33 C0                     XOR EAX,EAX
007590A7  4F                        DEC EDI
007590A8  8A 03                     MOV AL,byte ptr [EBX]
007590AA  43                        INC EBX
007590AB  85 FF                     TEST EDI,EDI
007590AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007590B0  75 10                     JNZ 0x007590c2
007590B2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007590B5  51                        PUSH ECX
007590B6  FF 56 0C                  CALL dword ptr [ESI + 0xc]
007590B9  85 C0                     TEST EAX,EAX
007590BB  74 57                     JZ 0x00759114
007590BD  8B 1E                     MOV EBX,dword ptr [ESI]
007590BF  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
LAB_007590c2:
007590C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007590C5  33 C0                     XOR EAX,EAX
007590C7  8A 03                     MOV AL,byte ptr [EBX]
007590C9  4F                        DEC EDI
007590CA  43                        INC EBX
007590CB  81 F9 FF 00 00 00         CMP ECX,0xff
007590D1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007590D4  75 07                     JNZ 0x007590dd
007590D6  3D D8 00 00 00            CMP EAX,0xd8
007590DB  74 1B                     JZ 0x007590f8
LAB_007590dd:
007590DD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007590E3  68 C4 02 00 00            PUSH 0x2c4
007590E8  68 B0 2D 7F 00            PUSH 0x7f2db0
007590ED  52                        PUSH EDX
007590EE  6A 34                     PUSH 0x34
007590F0  E8 4B CD F4 FF            CALL 0x006a5e40
007590F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_007590f8:
007590F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007590FB  89 81 8E 01 00 00         MOV dword ptr [ECX + 0x18e],EAX
00759101  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00759104  89 1E                     MOV dword ptr [ESI],EBX
00759106  5F                        POP EDI
00759107  5E                        POP ESI
00759108  B8 01 00 00 00            MOV EAX,0x1
0075910D  5B                        POP EBX
0075910E  8B E5                     MOV ESP,EBP
00759110  5D                        POP EBP
00759111  C2 04 00                  RET 0x4
LAB_00759114:
00759114  5F                        POP EDI
00759115  5E                        POP ESI
00759116  33 C0                     XOR EAX,EAX
00759118  5B                        POP EBX
00759119  8B E5                     MOV ESP,EBP
0075911B  5D                        POP EBP
0075911C  C2 04 00                  RET 0x4
