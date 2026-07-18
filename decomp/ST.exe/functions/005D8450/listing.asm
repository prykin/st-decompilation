SIDTy::CreateCtrls:
005D8450  55                        PUSH EBP
005D8451  8B EC                     MOV EBP,ESP
005D8453  81 EC AC 0D 00 00         SUB ESP,0xdac
005D8459  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D845E  53                        PUSH EBX
005D845F  56                        PUSH ESI
005D8460  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D8463  57                        PUSH EDI
005D8464  8D 55 B8                  LEA EDX,[EBP + -0x48]
005D8467  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005D846A  6A 00                     PUSH 0x0
005D846C  52                        PUSH EDX
005D846D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005D8470  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8476  E8 75 53 15 00            CALL 0x0072d7f0
005D847B  8B F0                     MOV ESI,EAX
005D847D  83 C4 08                  ADD ESP,0x8
005D8480  85 F6                     TEST ESI,ESI
005D8482  0F 85 7D 04 00 00         JNZ 0x005d8905
005D8488  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005D848B  8B 83 C4 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cc4]
005D8491  85 C0                     TEST EAX,EAX
005D8493  74 0D                     JZ 0x005d84a2
005D8495  50                        PUSH EAX
005D8496  FF 15 AC BC 85 00         CALL dword ptr [0x0085bcac]
005D849C  89 B3 C4 1C 00 00         MOV dword ptr [EBX + 0x1cc4],ESI
LAB_005d84a2:
005D84A2  BF 80 76 80 00            MOV EDI,0x807680
005D84A7  83 C9 FF                  OR ECX,0xffffffff
005D84AA  33 C0                     XOR EAX,EAX
005D84AC  8D 93 D4 1C 00 00         LEA EDX,[EBX + 0x1cd4]
005D84B2  F2 AE                     SCASB.REPNE ES:EDI
005D84B4  F7 D1                     NOT ECX
005D84B6  2B F9                     SUB EDI,ECX
005D84B8  8B C1                     MOV EAX,ECX
005D84BA  8B F7                     MOV ESI,EDI
005D84BC  8B FA                     MOV EDI,EDX
005D84BE  C1 E9 02                  SHR ECX,0x2
005D84C1  F3 A5                     MOVSD.REP ES:EDI,ESI
005D84C3  8B C8                     MOV ECX,EAX
005D84C5  33 C0                     XOR EAX,EAX
005D84C7  83 E1 03                  AND ECX,0x3
005D84CA  F3 A4                     MOVSB.REP ES:EDI,ESI
005D84CC  8B 3D 9C C1 79 00         MOV EDI,dword ptr [0x0079c19c]
005D84D2  83 C9 FF                  OR ECX,0xffffffff
005D84D5  F2 AE                     SCASB.REPNE ES:EDI
005D84D7  F7 D1                     NOT ECX
005D84D9  2B F9                     SUB EDI,ECX
005D84DB  8B C1                     MOV EAX,ECX
005D84DD  8B F7                     MOV ESI,EDI
005D84DF  8B FA                     MOV EDI,EDX
005D84E1  8B D0                     MOV EDX,EAX
005D84E3  83 C9 FF                  OR ECX,0xffffffff
005D84E6  33 C0                     XOR EAX,EAX
005D84E8  F2 AE                     SCASB.REPNE ES:EDI
005D84EA  8B CA                     MOV ECX,EDX
005D84EC  4F                        DEC EDI
005D84ED  C1 E9 02                  SHR ECX,0x2
005D84F0  F3 A5                     MOVSD.REP ES:EDI,ESI
005D84F2  8B CA                     MOV ECX,EDX
005D84F4  83 E1 03                  AND ECX,0x3
005D84F7  F3 A4                     MOVSB.REP ES:EDI,ESI
005D84F9  8D BB D4 1C 00 00         LEA EDI,[EBX + 0x1cd4]
005D84FF  57                        PUSH EDI
005D8500  57                        PUSH EDI
005D8501  E8 BA F3 0D 00            CALL 0x006b78c0
005D8506  BE 02 00 00 00            MOV ESI,0x2
005D850B  56                        PUSH ESI
005D850C  6A 00                     PUSH 0x0
005D850E  57                        PUSH EDI
005D850F  FF 15 FC BC 85 00         CALL dword ptr [0x0085bcfc]
005D8515  83 F8 FF                  CMP EAX,-0x1
005D8518  89 83 C4 1C 00 00         MOV dword ptr [EBX + 0x1cc4],EAX
005D851E  75 0A                     JNZ 0x005d852a
005D8520  C7 83 C4 1C 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1cc4],0x0
LAB_005d852a:
005D852A  B9 35 01 00 00            MOV ECX,0x135
005D852F  33 C0                     XOR EAX,EAX
005D8531  8D BD E0 FA FF FF         LEA EDI,[EBP + 0xfffffae0]
005D8537  33 D2                     XOR EDX,EDX
005D8539  F3 AB                     STOSD.REP ES:EDI
005D853B  A0 4C 73 80 00            MOV AL,[0x0080734c]
005D8540  89 95 E0 FA FF FF         MOV dword ptr [EBP + 0xfffffae0],EDX
005D8546  84 C0                     TEST AL,AL
005D8548  C7 85 E8 FA FF FF E4 00 00 00  MOV dword ptr [EBP + 0xfffffae8],0xe4
005D8552  C7 85 EC FA FF FF BE 01 00 00  MOV dword ptr [EBP + 0xfffffaec],0x1be
005D855C  C7 85 F0 FA FF FF 45 01 00 00  MOV dword ptr [EBP + 0xfffffaf0],0x145
005D8566  C7 85 F4 FA FF FF 64 00 00 00  MOV dword ptr [EBP + 0xfffffaf4],0x64
005D8570  89 95 F8 FA FF FF         MOV dword ptr [EBP + 0xfffffaf8],EDX
005D8576  89 95 FC FA FF FF         MOV dword ptr [EBP + 0xfffffafc],EDX
005D857C  B9 01 00 00 00            MOV ECX,0x1
005D8581  74 03                     JZ 0x005d8586
005D8583  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
LAB_005d8586:
005D8586  8B BB 1D 1B 00 00         MOV EDI,dword ptr [EBX + 0x1b1d]
005D858C  89 8D 18 FD FF FF         MOV dword ptr [EBP + 0xfffffd18],ECX
005D8592  89 BD 18 FC FF FF         MOV dword ptr [EBP + 0xfffffc18],EDI
005D8598  8B BB 21 1B 00 00         MOV EDI,dword ptr [EBX + 0x1b21]
005D859E  89 BD 1C FC FF FF         MOV dword ptr [EBP + 0xfffffc1c],EDI
005D85A4  8B BB 25 1B 00 00         MOV EDI,dword ptr [EBX + 0x1b25]
005D85AA  89 BD 20 FC FF FF         MOV dword ptr [EBP + 0xfffffc20],EDI
005D85B0  8B BB 29 1B 00 00         MOV EDI,dword ptr [EBX + 0x1b29]
005D85B6  89 BD 24 FC FF FF         MOV dword ptr [EBP + 0xfffffc24],EDI
005D85BC  8B BB AE 1B 00 00         MOV EDI,dword ptr [EBX + 0x1bae]
005D85C2  89 BD 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],EDI
005D85C8  8B BB B2 1B 00 00         MOV EDI,dword ptr [EBX + 0x1bb2]
005D85CE  89 8D 1C FD FF FF         MOV dword ptr [EBP + 0xfffffd1c],ECX
005D85D4  89 8D 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],ECX
005D85DA  89 8D 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],ECX
005D85E0  89 BD 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],EDI
005D85E6  8B BB B6 1B 00 00         MOV EDI,dword ptr [EBX + 0x1bb6]
005D85EC  89 8D 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],ECX
005D85F2  8B 8B 3F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c3f]
005D85F8  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005D85FB  89 BD A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],EDI
005D8601  8B BB BA 1B 00 00         MOV EDI,dword ptr [EBX + 0x1bba]
005D8607  89 8D 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ECX
005D860D  8B 8B 43 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c43]
005D8613  89 BD A4 FD FF FF         MOV dword ptr [EBP + 0xfffffda4],EDI
005D8619  89 8D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ECX
005D861F  8B 8B 47 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c47]
005D8625  8D BD E0 FA FF FF         LEA EDI,[EBP + 0xfffffae0]
005D862B  52                        PUSH EDX
005D862C  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
005D8632  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005D8635  57                        PUSH EDI
005D8636  89 95 10 FC FF FF         MOV dword ptr [EBP + 0xfffffc10],EDX
005D863C  89 95 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],EDX
005D8642  89 95 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EDX
005D8648  52                        PUSH EDX
005D8649  8D 93 F1 1A 00 00         LEA EDX,[EBX + 0x1af1]
005D864F  89 85 08 FB FF FF         MOV dword ptr [EBP + 0xfffffb08],EAX
005D8655  89 B5 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],ESI
005D865B  C7 85 10 FB FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffffb10],0x8160
005D8665  89 85 28 FB FF FF         MOV dword ptr [EBP + 0xfffffb28],EAX
005D866B  89 B5 2C FB FF FF         MOV dword ptr [EBP + 0xfffffb2c],ESI
005D8671  C7 85 30 FB FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffffb30],0x8161
005D867B  89 85 48 FB FF FF         MOV dword ptr [EBP + 0xfffffb48],EAX
005D8681  89 B5 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],ESI
005D8687  C7 85 50 FB FF FF 62 81 00 00  MOV dword ptr [EBP + 0xfffffb50],0x8162
005D8691  89 85 68 FB FF FF         MOV dword ptr [EBP + 0xfffffb68],EAX
005D8697  89 B5 6C FB FF FF         MOV dword ptr [EBP + 0xfffffb6c],ESI
005D869D  C7 85 70 FB FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffffb70],0x8163
005D86A7  89 B5 0C FC FF FF         MOV dword ptr [EBP + 0xfffffc0c],ESI
005D86AD  89 B5 14 FC FF FF         MOV dword ptr [EBP + 0xfffffc14],ESI
005D86B3  C7 85 20 FD FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffd20],0x1f4
005D86BD  C7 85 24 FD FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffd24],0x32
005D86C7  89 85 70 FC FF FF         MOV dword ptr [EBP + 0xfffffc70],EAX
005D86CD  89 B5 74 FC FF FF         MOV dword ptr [EBP + 0xfffffc74],ESI
005D86D3  C7 85 78 FC FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffc78],0x8164
005D86DD  89 B5 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],ESI
005D86E3  89 B5 94 FD FF FF         MOV dword ptr [EBP + 0xfffffd94],ESI
005D86E9  C7 85 A0 FE FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffea0],0x1f4
005D86F3  C7 85 A4 FE FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffea4],0x32
005D86FD  89 85 F0 FD FF FF         MOV dword ptr [EBP + 0xfffffdf0],EAX
005D8703  89 B5 F4 FD FF FF         MOV dword ptr [EBP + 0xfffffdf4],ESI
005D8709  C7 85 F8 FD FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffdf8],0x8165
005D8713  C7 85 0C FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff0c],0x3
005D871D  C7 85 28 FF FF FF 3A 00 00 00  MOV dword ptr [EBP + 0xffffff28],0x3a
005D8727  C7 85 2C FF FF FF 08 00 00 00  MOV dword ptr [EBP + 0xffffff2c],0x8
005D8731  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
005D8737  89 B5 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ESI
005D873D  C7 85 68 FF FF FF 66 81 00 00  MOV dword ptr [EBP + 0xffffff68],0x8166
005D8747  8B 01                     MOV EAX,dword ptr [ECX]
005D8749  52                        PUSH EDX
005D874A  6A 07                     PUSH 0x7
005D874C  FF 50 08                  CALL dword ptr [EAX + 0x8]
005D874F  B9 23 02 00 00            MOV ECX,0x223
005D8754  33 C0                     XOR EAX,EAX
005D8756  8D BD 54 F2 FF FF         LEA EDI,[EBP + 0xfffff254]
005D875C  F3 AB                     STOSD.REP ES:EDI
005D875E  89 85 54 F2 FF FF         MOV dword ptr [EBP + 0xfffff254],EAX
005D8764  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D8769  C7 85 58 F2 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xfffff258],0x9
005D8773  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D8776  8B 93 D0 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cd0]
005D877C  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005D877F  BF 01 00 00 00            MOV EDI,0x1
005D8784  89 95 74 F2 FF FF         MOV dword ptr [EBP + 0xfffff274],EDX
005D878A  8D 95 54 F2 FF FF         LEA EDX,[EBP + 0xfffff254]
005D8790  89 8D 5C F2 FF FF         MOV dword ptr [EBP + 0xfffff25c],ECX
005D8796  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005D8799  57                        PUSH EDI
005D879A  52                        PUSH EDX
005D879B  8D 93 F5 1A 00 00         LEA EDX,[EBX + 0x1af5]
005D87A1  C7 85 60 F2 FF FF E4 00 00 00  MOV dword ptr [EBP + 0xfffff260],0xe4
005D87AB  C7 85 64 F2 FF FF AA 01 00 00  MOV dword ptr [EBP + 0xfffff264],0x1aa
005D87B5  C7 85 68 F2 FF FF 56 01 00 00  MOV dword ptr [EBP + 0xfffff268],0x156
005D87BF  C7 85 6C F2 FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffff26c],0x10
005D87C9  89 BD B4 FA FF FF         MOV dword ptr [EBP + 0xfffffab4],EDI
005D87CF  89 BD B0 FA FF FF         MOV dword ptr [EBP + 0xfffffab0],EDI
005D87D5  C7 85 70 F2 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffff270],0x104
005D87DF  89 85 A0 F2 FF FF         MOV dword ptr [EBP + 0xfffff2a0],EAX
005D87E5  89 B5 A4 F2 FF FF         MOV dword ptr [EBP + 0xfffff2a4],ESI
005D87EB  C7 85 A8 F2 FF FF 7F 69 00 00  MOV dword ptr [EBP + 0xfffff2a8],0x697f
005D87F5  89 85 E0 F2 FF FF         MOV dword ptr [EBP + 0xfffff2e0],EAX
005D87FB  89 B5 E4 F2 FF FF         MOV dword ptr [EBP + 0xfffff2e4],ESI
005D8801  C7 85 E8 F2 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff2e8],0x68ff
005D880B  8B 01                     MOV EAX,dword ptr [ECX]
005D880D  6A 00                     PUSH 0x0
005D880F  52                        PUSH EDX
005D8810  6A 06                     PUSH 0x6
005D8812  FF 50 08                  CALL dword ptr [EAX + 0x8]
005D8815  68 80 69 00 00            PUSH 0x6980
005D881A  68 00 69 00 00            PUSH 0x6900
005D881F  6A 12                     PUSH 0x12
005D8821  6A 55                     PUSH 0x55
005D8823  68 28 02 00 00            PUSH 0x228
005D8828  68 E8 01 00 00            PUSH 0x1e8
005D882D  57                        PUSH EDI
005D882E  57                        PUSH EDI
005D882F  8B CB                     MOV ECX,EBX
005D8831  E8 E5 AD E2 FF            CALL 0x0040361b
005D8836  68 81 69 00 00            PUSH 0x6981
005D883B  68 01 69 00 00            PUSH 0x6901
005D8840  6A 12                     PUSH 0x12
005D8842  6A 55                     PUSH 0x55
005D8844  68 3B 02 00 00            PUSH 0x23b
005D8849  68 E8 01 00 00            PUSH 0x1e8
005D884E  57                        PUSH EDI
005D884F  57                        PUSH EDI
005D8850  8B CB                     MOV ECX,EBX
005D8852  89 83 F9 1A 00 00         MOV dword ptr [EBX + 0x1af9],EAX
005D8858  E8 BE AD E2 FF            CALL 0x0040361b
005D885D  8B CB                     MOV ECX,EBX
005D885F  89 83 FD 1A 00 00         MOV dword ptr [EBX + 0x1afd],EAX
005D8865  E8 C2 B0 E2 FF            CALL 0x0040392c
005D886A  8B 83 B4 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cb4]
005D8870  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005D8876  50                        PUSH EAX
005D8877  51                        PUSH ECX
005D8878  E8 B3 AB 0D 00            CALL 0x006b3430
005D887D  8B 83 05 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b05]
005D8883  83 F8 FF                  CMP EAX,-0x1
005D8886  74 1D                     JZ 0x005d88a5
005D8888  8B 93 21 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b21]
005D888E  8B 8B 1D 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b1d]
005D8894  52                        PUSH EDX
005D8895  8B 93 49 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b49]
005D889B  51                        PUSH ECX
005D889C  6A FE                     PUSH -0x2
005D889E  50                        PUSH EAX
005D889F  52                        PUSH EDX
005D88A0  E8 2B AC 0D 00            CALL 0x006b34d0
LAB_005d88a5:
005D88A5  8B 83 96 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b96]
005D88AB  83 F8 FF                  CMP EAX,-0x1
005D88AE  74 1D                     JZ 0x005d88cd
005D88B0  8B 8B B2 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bb2]
005D88B6  8B 93 AE 1B 00 00         MOV EDX,dword ptr [EBX + 0x1bae]
005D88BC  51                        PUSH ECX
005D88BD  52                        PUSH EDX
005D88BE  6A FE                     PUSH -0x2
005D88C0  50                        PUSH EAX
005D88C1  8B 83 DA 1B 00 00         MOV EAX,dword ptr [EBX + 0x1bda]
005D88C7  50                        PUSH EAX
005D88C8  E8 03 AC 0D 00            CALL 0x006b34d0
LAB_005d88cd:
005D88CD  8B 83 27 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c27]
005D88D3  83 F8 FF                  CMP EAX,-0x1
005D88D6  74 1D                     JZ 0x005d88f5
005D88D8  8B 8B 43 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c43]
005D88DE  8B 93 3F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c3f]
005D88E4  51                        PUSH ECX
005D88E5  52                        PUSH EDX
005D88E6  6A FE                     PUSH -0x2
005D88E8  50                        PUSH EAX
005D88E9  8B 83 6B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c6b]
005D88EF  50                        PUSH EAX
005D88F0  E8 DB AB 0D 00            CALL 0x006b34d0
LAB_005d88f5:
005D88F5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005D88F8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D88FE  5F                        POP EDI
005D88FF  5E                        POP ESI
005D8900  5B                        POP EBX
005D8901  8B E5                     MOV ESP,EBP
005D8903  5D                        POP EBP
005D8904  C3                        RET
LAB_005d8905:
005D8905  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005D8908  68 64 D6 7C 00            PUSH 0x7cd664
005D890D  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D8912  56                        PUSH ESI
005D8913  6A 00                     PUSH 0x0
005D8915  68 04 01 00 00            PUSH 0x104
005D891A  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D891F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D8925  E8 A6 4B 0D 00            CALL 0x006ad4d0
005D892A  83 C4 18                  ADD ESP,0x18
005D892D  85 C0                     TEST EAX,EAX
005D892F  74 01                     JZ 0x005d8932
005D8931  CC                        INT3
LAB_005d8932:
005D8932  68 04 01 00 00            PUSH 0x104
005D8937  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D893C  6A 00                     PUSH 0x0
005D893E  56                        PUSH ESI
005D893F  E8 FC D4 0C 00            CALL 0x006a5e40
005D8944  5F                        POP EDI
005D8945  5E                        POP ESI
005D8946  5B                        POP EBX
005D8947  8B E5                     MOV ESP,EBP
005D8949  5D                        POP EBP
005D894A  C3                        RET
