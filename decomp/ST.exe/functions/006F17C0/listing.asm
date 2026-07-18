FUN_006f17c0:
006F17C0  55                        PUSH EBP
006F17C1  8B EC                     MOV EBP,ESP
006F17C3  81 EC 50 01 00 00         SUB ESP,0x150
006F17C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F17CE  56                        PUSH ESI
006F17CF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006F17D2  57                        PUSH EDI
006F17D3  8D 55 B8                  LEA EDX,[EBP + -0x48]
006F17D6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006F17D9  6A 00                     PUSH 0x0
006F17DB  52                        PUSH EDX
006F17DC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F17E3  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006F17E6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F17EC  E8 FF BF 03 00            CALL 0x0072d7f0
006F17F1  8B F0                     MOV ESI,EAX
006F17F3  83 C4 08                  ADD ESP,0x8
006F17F6  85 F6                     TEST ESI,ESI
006F17F8  75 7D                     JNZ 0x006f1877
006F17FA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F17FD  83 C9 FF                  OR ECX,0xffffffff
006F1800  8B FE                     MOV EDI,ESI
006F1802  F2 AE                     SCASB.REPNE ES:EDI
006F1804  F7 D1                     NOT ECX
006F1806  83 C1 17                  ADD ECX,0x17
006F1809  51                        PUSH ECX
006F180A  E8 01 94 FB FF            CALL 0x006aac10
006F180F  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
006F1812  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F1815  88 08                     MOV byte ptr [EAX],CL
006F1817  8B FE                     MOV EDI,ESI
006F1819  83 C9 FF                  OR ECX,0xffffffff
006F181C  33 C0                     XOR EAX,EAX
006F181E  F2 AE                     SCASB.REPNE ES:EDI
006F1820  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F1823  F7 D1                     NOT ECX
006F1825  49                        DEC ECX
006F1826  66 89 4A 16               MOV word ptr [EDX + 0x16],CX
006F182A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F182D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F1830  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
006F1834  8D 78 18                  LEA EDI,[EAX + 0x18]
006F1837  8B C1                     MOV EAX,ECX
006F1839  C1 E9 02                  SHR ECX,0x2
006F183C  F3 A5                     MOVSD.REP ES:EDI,ESI
006F183E  8B C8                     MOV ECX,EAX
006F1840  83 E1 03                  AND ECX,0x3
006F1843  F3 A4                     MOVSB.REP ES:EDI,ESI
006F1845  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1848  8B 02                     MOV EAX,dword ptr [EDX]
006F184A  51                        PUSH ECX
006F184B  50                        PUSH EAX
006F184C  E8 AF F8 05 00            CALL 0x00751100
006F1851  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1854  85 C0                     TEST EAX,EAX
006F1856  74 09                     JZ 0x006f1861
006F1858  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F185B  51                        PUSH ECX
006F185C  E8 FF 97 FB FF            CALL 0x006ab060
LAB_006f1861:
006F1861  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006F1864  B8 01 00 00 00            MOV EAX,0x1
006F1869  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F186F  5F                        POP EDI
006F1870  5E                        POP ESI
006F1871  8B E5                     MOV ESP,EBP
006F1873  5D                        POP EBP
006F1874  C2 08 00                  RET 0x8
LAB_006f1877:
006F1877  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006F187A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F187F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1882  85 C0                     TEST EAX,EAX
006F1884  74 09                     JZ 0x006f188f
006F1886  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F1889  51                        PUSH ECX
006F188A  E8 D1 97 FB FF            CALL 0x006ab060
LAB_006f188f:
006F188F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F1892  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F1895  25 FF 00 00 00            AND EAX,0xff
006F189A  52                        PUSH EDX
006F189B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F189E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006F18A1  81 C2 31 02 00 00         ADD EDX,0x231
006F18A7  8D 0C 45 A4 F0 7E 00      LEA ECX,[EAX*0x2 + 0x7ef0a4]
006F18AE  8D 85 B0 FE FF FF         LEA EAX,[EBP + 0xfffffeb0]
006F18B4  51                        PUSH ECX
006F18B5  52                        PUSH EDX
006F18B6  68 40 FB 7E 00            PUSH 0x7efb40
006F18BB  50                        PUSH EAX
006F18BC  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F18C2  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
006F18C8  51                        PUSH ECX
006F18C9  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F18CE  56                        PUSH ESI
006F18CF  6A 00                     PUSH 0x0
006F18D1  68 44 01 00 00            PUSH 0x144
006F18D6  68 A4 FA 7E 00            PUSH 0x7efaa4
006F18DB  E8 F0 BB FB FF            CALL 0x006ad4d0
006F18E0  83 C4 2C                  ADD ESP,0x2c
006F18E3  85 C0                     TEST EAX,EAX
006F18E5  74 01                     JZ 0x006f18e8
006F18E7  CC                        INT3
LAB_006f18e8:
006F18E8  68 46 01 00 00            PUSH 0x146
006F18ED  68 A4 FA 7E 00            PUSH 0x7efaa4
006F18F2  6A 00                     PUSH 0x0
006F18F4  56                        PUSH ESI
006F18F5  E8 46 45 FB FF            CALL 0x006a5e40
006F18FA  5F                        POP EDI
006F18FB  33 C0                     XOR EAX,EAX
006F18FD  5E                        POP ESI
006F18FE  8B E5                     MOV ESP,EBP
006F1900  5D                        POP EBP
006F1901  C2 08 00                  RET 0x8
