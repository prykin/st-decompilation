FUN_006b6350:
006B6350  55                        PUSH EBP
006B6351  8B EC                     MOV EBP,ESP
006B6353  51                        PUSH ECX
006B6354  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B6357  56                        PUSH ESI
006B6358  57                        PUSH EDI
006B6359  6A 54                     PUSH 0x54
006B635B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B6362  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006B6368  E8 A3 48 FF FF            CALL 0x006aac10
006B636D  8B F0                     MOV ESI,EAX
006B636F  85 F6                     TEST ESI,ESI
006B6371  75 0D                     JNZ 0x006b6380
006B6373  5F                        POP EDI
006B6374  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B6379  5E                        POP ESI
006B637A  8B E5                     MOV ESP,EBP
006B637C  5D                        POP EBP
006B637D  C2 0C 00                  RET 0xc
LAB_006b6380:
006B6380  53                        PUSH EBX
006B6381  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B6384  8D 4D FC                  LEA ECX,[EBP + -0x4]
006B6387  6A 00                     PUSH 0x0
006B6389  51                        PUSH ECX
006B638A  53                        PUSH EBX
006B638B  C7 46 38 FF FF FF FF      MOV dword ptr [ESI + 0x38],0xffffffff
006B6392  E8 21 73 07 00            CALL 0x0072d6b8
006B6397  8B F8                     MOV EDI,EAX
006B6399  85 FF                     TEST EDI,EDI
006B639B  0F 85 AC 00 00 00         JNZ 0x006b644d
006B63A1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B63A4  56                        PUSH ESI
006B63A5  68 C8 EC 79 00            PUSH 0x79ecc8
006B63AA  50                        PUSH EAX
006B63AB  8B 10                     MOV EDX,dword ptr [EAX]
006B63AD  FF 12                     CALL dword ptr [EDX]
006B63AF  8B F8                     MOV EDI,EAX
006B63B1  85 FF                     TEST EDI,EDI
006B63B3  0F 85 94 00 00 00         JNZ 0x006b644d
006B63B9  6A 10                     PUSH 0x10
006B63BB  68 A8 EC 79 00            PUSH 0x79eca8
006B63C0  53                        PUSH EBX
006B63C1  E8 2A 83 07 00            CALL 0x0072e6f0
006B63C6  83 C4 0C                  ADD ESP,0xc
006B63C9  85 C0                     TEST EAX,EAX
006B63CB  75 09                     JNZ 0x006b63d6
006B63CD  C7 46 28 01 00 00 00      MOV dword ptr [ESI + 0x28],0x1
006B63D4  EB 55                     JMP 0x006b642b
LAB_006b63d6:
006B63D6  6A 10                     PUSH 0x10
006B63D8  68 98 EC 79 00            PUSH 0x79ec98
006B63DD  53                        PUSH EBX
006B63DE  E8 0D 83 07 00            CALL 0x0072e6f0
006B63E3  83 C4 0C                  ADD ESP,0xc
006B63E6  85 C0                     TEST EAX,EAX
006B63E8  75 09                     JNZ 0x006b63f3
006B63EA  C7 46 28 02 00 00 00      MOV dword ptr [ESI + 0x28],0x2
006B63F1  EB 38                     JMP 0x006b642b
LAB_006b63f3:
006B63F3  6A 10                     PUSH 0x10
006B63F5  68 88 EC 79 00            PUSH 0x79ec88
006B63FA  53                        PUSH EBX
006B63FB  E8 F0 82 07 00            CALL 0x0072e6f0
006B6400  83 C4 0C                  ADD ESP,0xc
006B6403  85 C0                     TEST EAX,EAX
006B6405  75 09                     JNZ 0x006b6410
006B6407  C7 46 28 03 00 00 00      MOV dword ptr [ESI + 0x28],0x3
006B640E  EB 1B                     JMP 0x006b642b
LAB_006b6410:
006B6410  6A 10                     PUSH 0x10
006B6412  68 78 EC 79 00            PUSH 0x79ec78
006B6417  53                        PUSH EBX
006B6418  E8 D3 82 07 00            CALL 0x0072e6f0
006B641D  83 C4 0C                  ADD ESP,0xc
006B6420  85 C0                     TEST EAX,EAX
006B6422  75 07                     JNZ 0x006b642b
006B6424  C7 46 28 04 00 00 00      MOV dword ptr [ESI + 0x28],0x4
LAB_006b642b:
006B642B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B642E  8D 46 08                  LEA EAX,[ESI + 0x8]
006B6431  56                        PUSH ESI
006B6432  8B 11                     MOV EDX,dword ptr [ECX]
006B6434  89 10                     MOV dword ptr [EAX],EDX
006B6436  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006B6439  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
006B643C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006B643F  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006B6442  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B6445  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006B6448  E8 63 00 00 00            CALL 0x006b64b0
LAB_006b644d:
006B644D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B6450  5B                        POP EBX
006B6451  85 C0                     TEST EAX,EAX
006B6453  74 0D                     JZ 0x006b6462
006B6455  8B 10                     MOV EDX,dword ptr [EAX]
006B6457  50                        PUSH EAX
006B6458  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B645B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006b6462:
006B6462  85 FF                     TEST EDI,EDI
006B6464  74 30                     JZ 0x006b6496
006B6466  56                        PUSH ESI
006B6467  E8 D4 12 00 00            CALL 0x006b7740
006B646C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B646F  68 3E 01 00 00            PUSH 0x13e
006B6474  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6479  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006B647F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B6485  51                        PUSH ECX
006B6486  57                        PUSH EDI
006B6487  E8 B4 F9 FE FF            CALL 0x006a5e40
006B648C  8B C7                     MOV EAX,EDI
006B648E  5F                        POP EDI
006B648F  5E                        POP ESI
006B6490  8B E5                     MOV ESP,EBP
006B6492  5D                        POP EBP
006B6493  C2 0C 00                  RET 0xc
LAB_006b6496:
006B6496  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B6499  5F                        POP EDI
006B649A  33 C0                     XOR EAX,EAX
006B649C  89 32                     MOV dword ptr [EDX],ESI
006B649E  5E                        POP ESI
006B649F  8B E5                     MOV ESP,EBP
006B64A1  5D                        POP EBP
006B64A2  C2 0C 00                  RET 0xc
