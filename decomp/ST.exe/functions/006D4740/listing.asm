FUN_006d4740:
006D4740  55                        PUSH EBP
006D4741  8B EC                     MOV EBP,ESP
006D4743  53                        PUSH EBX
006D4744  56                        PUSH ESI
006D4745  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D4748  57                        PUSH EDI
006D4749  F7 46 08 00 00 10 00      TEST dword ptr [ESI + 0x8],0x100000
006D4750  74 1E                     JZ 0x006d4770
006D4752  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4757  68 19 01 00 00            PUSH 0x119
006D475C  68 2C E2 7E 00            PUSH 0x7ee22c
006D4761  50                        PUSH EAX
006D4762  6A D0                     PUSH -0x30
006D4764  E8 D7 16 FD FF            CALL 0x006a5e40
006D4769  5F                        POP EDI
006D476A  5E                        POP ESI
006D476B  5B                        POP EBX
006D476C  5D                        POP EBP
006D476D  C2 08 00                  RET 0x8
LAB_006d4770:
006D4770  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006D4773  33 FF                     XOR EDI,EDI
006D4775  51                        PUSH ECX
006D4776  FF 15 4C BB 85 00         CALL dword ptr [0x0085bb4c]
006D477C  85 C0                     TEST EAX,EAX
006D477E  0F 84 A1 00 00 00         JZ 0x006d4825
006D4784  8B 5E 38                  MOV EBX,dword ptr [ESI + 0x38]
006D4787  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D478A  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006D478D  03 DF                     ADD EBX,EDI
006D478F  6A 00                     PUSH 0x0
006D4791  53                        PUSH EBX
006D4792  6A 00                     PUSH 0x0
006D4794  6A 04                     PUSH 0x4
006D4796  6A 00                     PUSH 0x0
006D4798  52                        PUSH EDX
006D4799  FF 15 58 BB 85 00         CALL dword ptr [0x0085bb58]
006D479F  8B F8                     MOV EDI,EAX
006D47A1  85 FF                     TEST EDI,EDI
006D47A3  74 2F                     JZ 0x006d47d4
006D47A5  53                        PUSH EBX
006D47A6  6A 00                     PUSH 0x0
006D47A8  6A 00                     PUSH 0x0
006D47AA  68 1F 00 0F 00            PUSH 0xf001f
006D47AF  57                        PUSH EDI
006D47B0  FF 15 5C BB 85 00         CALL dword ptr [0x0085bb5c]
006D47B6  85 C0                     TEST EAX,EAX
006D47B8  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006D47BB  74 17                     JZ 0x006d47d4
006D47BD  89 5E 38                  MOV dword ptr [ESI + 0x38],EBX
LAB_006d47c0:
006D47C0  85 FF                     TEST EDI,EDI
006D47C2  74 07                     JZ 0x006d47cb
006D47C4  57                        PUSH EDI
006D47C5  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d47cb:
006D47CB  5F                        POP EDI
006D47CC  5E                        POP ESI
006D47CD  33 C0                     XOR EAX,EAX
006D47CF  5B                        POP EBX
006D47D0  5D                        POP EBP
006D47D1  C2 08 00                  RET 0x8
LAB_006d47d4:
006D47D4  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D47DA  85 FF                     TEST EDI,EDI
006D47DC  8B D8                     MOV EBX,EAX
006D47DE  74 07                     JZ 0x006d47e7
006D47E0  57                        PUSH EDI
006D47E1  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d47e7:
006D47E7  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006D47EA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006D47ED  6A 00                     PUSH 0x0
006D47EF  50                        PUSH EAX
006D47F0  6A 00                     PUSH 0x0
006D47F2  6A 04                     PUSH 0x4
006D47F4  6A 00                     PUSH 0x0
006D47F6  51                        PUSH ECX
006D47F7  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
006D47FE  FF 15 58 BB 85 00         CALL dword ptr [0x0085bb58]
006D4804  8B F8                     MOV EDI,EAX
006D4806  85 FF                     TEST EDI,EDI
006D4808  74 17                     JZ 0x006d4821
006D480A  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006D480D  52                        PUSH EDX
006D480E  6A 00                     PUSH 0x0
006D4810  6A 00                     PUSH 0x0
006D4812  68 1F 00 0F 00            PUSH 0xf001f
006D4817  57                        PUSH EDI
006D4818  FF 15 5C BB 85 00         CALL dword ptr [0x0085bb5c]
006D481E  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
LAB_006d4821:
006D4821  85 DB                     TEST EBX,EBX
006D4823  74 9B                     JZ 0x006d47c0
LAB_006d4825:
006D4825  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D482B  8B F0                     MOV ESI,EAX
006D482D  85 F6                     TEST ESI,ESI
006D482F  75 05                     JNZ 0x006d4836
006D4831  BE 03 FF FF FF            MOV ESI,0xffffff03
LAB_006d4836:
006D4836  85 FF                     TEST EDI,EDI
006D4838  74 07                     JZ 0x006d4841
006D483A  57                        PUSH EDI
006D483B  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d4841:
006D4841  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4846  68 3C 01 00 00            PUSH 0x13c
006D484B  68 2C E2 7E 00            PUSH 0x7ee22c
006D4850  50                        PUSH EAX
006D4851  56                        PUSH ESI
006D4852  E8 E9 15 FD FF            CALL 0x006a5e40
006D4857  8B C6                     MOV EAX,ESI
006D4859  5F                        POP EDI
006D485A  5E                        POP ESI
006D485B  5B                        POP EBX
006D485C  5D                        POP EBP
006D485D  C2 08 00                  RET 0x8
