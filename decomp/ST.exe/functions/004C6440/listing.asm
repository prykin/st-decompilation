FUN_004c6440:
004C6440  55                        PUSH EBP
004C6441  8B EC                     MOV EBP,ESP
004C6443  83 EC 30                  SUB ESP,0x30
004C6446  53                        PUSH EBX
004C6447  BB DC AE 79 00            MOV EBX,0x79aedc
004C644C  56                        PUSH ESI
004C644D  57                        PUSH EDI
004C644E  8B F1                     MOV ESI,ECX
004C6450  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
004C6457  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
004C645E  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
LAB_004c6461:
004C6461  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004C6464  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004C6467  8D 45 EC                  LEA EAX,[EBP + -0x14]
004C646A  8D 4D F0                  LEA ECX,[EBP + -0x10]
004C646D  50                        PUSH EAX
004C646E  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
004C6474  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C6477  51                        PUSH ECX
004C6478  51                        PUSH ECX
004C6479  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004C647F  D9 1C 24                  FSTP float ptr [ESP]
004C6482  52                        PUSH EDX
004C6483  50                        PUSH EAX
004C6484  E8 97 B7 21 00            CALL 0x006e1c20
004C6489  D9 45 F0                  FLD float ptr [EBP + -0x10]
004C648C  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004C6492  D9 45 F0                  FLD float ptr [EBP + -0x10]
004C6495  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004C649B  DF E0                     FNSTSW AX
004C649D  F6 C4 01                  TEST AH,0x1
004C64A0  75 0D                     JNZ 0x004c64af
004C64A2  E8 E1 7D 26 00            CALL 0x0072e288
004C64A7  0F BF F8                  MOVSX EDI,AX
004C64AA  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004C64AD  EB 0E                     JMP 0x004c64bd
LAB_004c64af:
004C64AF  E8 D4 7D 26 00            CALL 0x0072e288
004C64B4  0F BF C0                  MOVSX EAX,AX
004C64B7  48                        DEC EAX
004C64B8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004C64BB  8B F8                     MOV EDI,EAX
LAB_004c64bd:
004C64BD  D9 45 EC                  FLD float ptr [EBP + -0x14]
004C64C0  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004C64C6  D9 45 EC                  FLD float ptr [EBP + -0x14]
004C64C9  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004C64CF  DF E0                     FNSTSW AX
004C64D1  F6 C4 01                  TEST AH,0x1
004C64D4  75 0D                     JNZ 0x004c64e3
004C64D6  E8 AD 7D 26 00            CALL 0x0072e288
004C64DB  0F BF C0                  MOVSX EAX,AX
004C64DE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004C64E1  EB 0C                     JMP 0x004c64ef
LAB_004c64e3:
004C64E3  E8 A0 7D 26 00            CALL 0x0072e288
004C64E8  0F BF C0                  MOVSX EAX,AX
004C64EB  48                        DEC EAX
004C64EC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004c64ef:
004C64EF  85 FF                     TEST EDI,EDI
004C64F1  0F 8C E5 00 00 00         JL 0x004c65dc
004C64F7  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004C64FE  3B F9                     CMP EDI,ECX
004C6500  0F 8D D6 00 00 00         JGE 0x004c65dc
004C6506  85 C0                     TEST EAX,EAX
004C6508  0F 8C CE 00 00 00         JL 0x004c65dc
004C650E  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004C6515  3B C2                     CMP EAX,EDX
004C6517  0F 8D BF 00 00 00         JGE 0x004c65dc
004C651D  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
004C6523  85 FF                     TEST EDI,EDI
004C6525  74 79                     JZ 0x004c65a0
004C6527  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
004C652E  74 70                     JZ 0x004c65a0
004C6530  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
004C6536  85 C9                     TEST ECX,ECX
004C6538  74 66                     JZ 0x004c65a0
004C653A  8D 4D D0                  LEA ECX,[EBP + -0x30]
004C653D  8D 55 D4                  LEA EDX,[EBP + -0x2c]
004C6540  51                        PUSH ECX
004C6541  8B 8F 0C 01 00 00         MOV ECX,dword ptr [EDI + 0x10c]
004C6547  52                        PUSH EDX
004C6548  50                        PUSH EAX
004C6549  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004C654C  50                        PUSH EAX
004C654D  51                        PUSH ECX
004C654E  8B CF                     MOV ECX,EDI
004C6550  E8 FE D9 F3 FF            CALL 0x00403f53
004C6555  81 FB D0 AE 79 00         CMP EBX,0x79aed0
004C655B  7C 40                     JL 0x004c659d
004C655D  81 FB E4 AE 79 00         CMP EBX,0x79aee4
004C6563  7D 38                     JGE 0x004c659d
004C6565  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
004C6568  85 D2                     TEST EDX,EDX
004C656A  7C 31                     JL 0x004c659d
004C656C  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
004C656F  3B D1                     CMP EDX,ECX
004C6571  7D 2A                     JGE 0x004c659d
004C6573  8B 03                     MOV EAX,dword ptr [EBX]
004C6575  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
004C6578  03 C3                     ADD EAX,EBX
004C657A  85 C0                     TEST EAX,EAX
004C657C  7C 1C                     JL 0x004c659a
004C657E  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
004C6581  7D 17                     JGE 0x004c659a
004C6583  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
004C6586  85 FF                     TEST EDI,EDI
004C6588  74 10                     JZ 0x004c659a
004C658A  0F AF C1                  IMUL EAX,ECX
004C658D  03 C7                     ADD EAX,EDI
004C658F  33 C9                     XOR ECX,ECX
004C6591  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
004C6594  8B C1                     MOV EAX,ECX
004C6596  85 C0                     TEST EAX,EAX
004C6598  74 3F                     JZ 0x004c65d9
LAB_004c659a:
004C659A  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_004c659d:
004C659D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_004c65a0:
004C65A0  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004C65A3  8D 4D E8                  LEA ECX,[EBP + -0x18]
004C65A6  52                        PUSH EDX
004C65A7  6A 00                     PUSH 0x0
004C65A9  8D 55 E0                  LEA EDX,[EBP + -0x20]
004C65AC  51                        PUSH ECX
004C65AD  52                        PUSH EDX
004C65AE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004C65B1  33 D2                     XOR EDX,EDX
004C65B3  8D 4D D8                  LEA ECX,[EBP + -0x28]
004C65B6  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
004C65BC  51                        PUSH ECX
004C65BD  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
004C65C0  52                        PUSH EDX
004C65C1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004C65C4  51                        PUSH ECX
004C65C5  52                        PUSH EDX
004C65C6  50                        PUSH EAX
004C65C7  57                        PUSH EDI
004C65C8  E8 5C C2 F3 FF            CALL 0x00402829
004C65CD  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004C65D0  83 C4 28                  ADD ESP,0x28
004C65D3  85 C0                     TEST EAX,EAX
004C65D5  75 23                     JNZ 0x004c65fa
004C65D7  EB 03                     JMP 0x004c65dc
LAB_004c65d9:
004C65D9  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_004c65dc:
004C65DC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004C65DF  83 EB 04                  SUB EBX,0x4
004C65E2  4A                        DEC EDX
004C65E3  81 FB D0 AE 79 00         CMP EBX,0x79aed0
004C65E9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004C65EC  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004C65EF  0F 8D 6C FE FF FF         JGE 0x004c6461
004C65F5  E9 9F 02 00 00            JMP 0x004c6899
LAB_004c65fa:
004C65FA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004C65FD  33 DB                     XOR EBX,EBX
004C65FF  3B C3                     CMP EAX,EBX
004C6601  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
004C6608  0F 84 86 00 00 00         JZ 0x004c6694
004C660E  39 5E 24                  CMP dword ptr [ESI + 0x24],EBX
004C6611  0F 85 72 01 00 00         JNZ 0x004c6789
004C6617  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004C661A  33 C9                     XOR ECX,ECX
004C661C  6A 1D                     PUSH 0x1d
004C661E  8A 88 2E 11 00 00         MOV CL,byte ptr [EAX + 0x112e]
004C6624  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004C6629  8B 14 8D 50 D2 7A 00      MOV EDX,dword ptr [ECX*0x4 + 0x7ad250]
004C6630  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6633  52                        PUSH EDX
004C6634  50                        PUSH EAX
004C6635  53                        PUSH EBX
004C6636  E8 48 DB F3 FF            CALL 0x00404183
004C663B  3B C3                     CMP EAX,EBX
004C663D  74 14                     JZ 0x004c6653
004C663F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C6645  6A 77                     PUSH 0x77
004C6647  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C664C  51                        PUSH ECX
004C664D  50                        PUSH EAX
004C664E  E8 ED F7 1D 00            CALL 0x006a5e40
LAB_004c6653:
004C6653  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004C6656  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6659  53                        PUSH EBX
004C665A  8B 04 95 84 0F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x790f84]
004C6661  50                        PUSH EAX
004C6662  50                        PUSH EAX
004C6663  53                        PUSH EBX
004C6664  E8 51 B8 F3 FF            CALL 0x00401eba
004C6669  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C666C  8B 0C 85 84 0F 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x790f84]
004C6673  51                        PUSH ECX
004C6674  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6677  53                        PUSH EBX
004C6678  E8 E7 A9 F3 FF            CALL 0x00401064
004C667D  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004C6680  E8 2B EB 21 00            CALL 0x006e51b0
004C6685  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6688  50                        PUSH EAX
004C6689  53                        PUSH EBX
004C668A  E8 B1 EB F3 FF            CALL 0x00405240
004C668F  E9 F5 00 00 00            JMP 0x004c6789
LAB_004c6694:
004C6694  39 5E 28                  CMP dword ptr [ESI + 0x28],EBX
004C6697  0F 85 EC 00 00 00         JNZ 0x004c6789
004C669D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C66A0  83 F8 39                  CMP EAX,0x39
004C66A3  74 35                     JZ 0x004c66da
004C66A5  83 F8 4F                  CMP EAX,0x4f
004C66A8  74 30                     JZ 0x004c66da
004C66AA  83 F8 4D                  CMP EAX,0x4d
004C66AD  74 2B                     JZ 0x004c66da
004C66AF  83 F8 5E                  CMP EAX,0x5e
004C66B2  74 26                     JZ 0x004c66da
004C66B4  83 F8 54                  CMP EAX,0x54
004C66B7  7C 05                     JL 0x004c66be
004C66B9  83 F8 5A                  CMP EAX,0x5a
004C66BC  7E 1C                     JLE 0x004c66da
LAB_004c66be:
004C66BE  83 F8 61                  CMP EAX,0x61
004C66C1  74 17                     JZ 0x004c66da
004C66C3  83 F8 65                  CMP EAX,0x65
004C66C6  74 12                     JZ 0x004c66da
004C66C8  83 F8 43                  CMP EAX,0x43
004C66CB  74 0D                     JZ 0x004c66da
004C66CD  83 F8 73                  CMP EAX,0x73
004C66D0  74 08                     JZ 0x004c66da
004C66D2  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
004C66D5  E9 BF 01 00 00            JMP 0x004c6899
LAB_004c66da:
004C66DA  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004C66DD  33 C0                     XOR EAX,EAX
004C66DF  6A 1D                     PUSH 0x1d
004C66E1  8A 82 2E 11 00 00         MOV AL,byte ptr [EDX + 0x112e]
004C66E7  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004C66ED  8B 0C 85 5C D2 7A 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ad25c]
004C66F4  51                        PUSH ECX
004C66F5  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C66F8  52                        PUSH EDX
004C66F9  53                        PUSH EBX
004C66FA  E8 84 DA F3 FF            CALL 0x00404183
004C66FF  3B C3                     CMP EAX,EBX
004C6701  74 17                     JZ 0x004c671a
004C6703  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004C6709  68 82 00 00 00            PUSH 0x82
004C670E  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C6713  51                        PUSH ECX
004C6714  50                        PUSH EAX
004C6715  E8 26 F7 1D 00            CALL 0x006a5e40
LAB_004c671a:
004C671A  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004C671D  33 FF                     XOR EDI,EDI
004C671F  8A 82 2E 11 00 00         MOV AL,byte ptr [EDX + 0x112e]
004C6725  3C 01                     CMP AL,0x1
004C6727  74 10                     JZ 0x004c6739
004C6729  3C 02                     CMP AL,0x2
004C672B  74 0C                     JZ 0x004c6739
004C672D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C6730  8B 3C 85 84 0F 79 00      MOV EDI,dword ptr [EAX*0x4 + 0x790f84]
004C6737  EB 25                     JMP 0x004c675e
LAB_004c6739:
004C6739  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004C673C  83 F8 4F                  CMP EAX,0x4f
004C673F  75 07                     JNZ 0x004c6748
004C6741  BF 01 00 00 00            MOV EDI,0x1
004C6746  EB 16                     JMP 0x004c675e
LAB_004c6748:
004C6748  83 F8 4D                  CMP EAX,0x4d
004C674B  75 07                     JNZ 0x004c6754
004C674D  BF 02 00 00 00            MOV EDI,0x2
004C6752  EB 0A                     JMP 0x004c675e
LAB_004c6754:
004C6754  83 F8 43                  CMP EAX,0x43
004C6757  75 05                     JNZ 0x004c675e
004C6759  BF 03 00 00 00            MOV EDI,0x3
LAB_004c675e:
004C675E  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C6761  53                        PUSH EBX
004C6762  57                        PUSH EDI
004C6763  57                        PUSH EDI
004C6764  53                        PUSH EBX
004C6765  E8 50 B7 F3 FF            CALL 0x00401eba
004C676A  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C676D  57                        PUSH EDI
004C676E  53                        PUSH EBX
004C676F  E8 F0 A8 F3 FF            CALL 0x00401064
004C6774  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004C6777  E8 34 EA 21 00            CALL 0x006e51b0
004C677C  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C677F  50                        PUSH EAX
004C6780  53                        PUSH EBX
004C6781  E8 BA EA F3 FF            CALL 0x00405240
004C6786  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_004c6789:
004C6789  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C678C  53                        PUSH EBX
004C678D  E8 F0 C1 F3 FF            CALL 0x00402982
004C6792  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
004C6795  8B 04 8D 68 1D 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x791d68]
004C679C  2B C3                     SUB EAX,EBX
004C679E  74 6D                     JZ 0x004c680d
004C67A0  48                        DEC EAX
004C67A1  74 2C                     JZ 0x004c67cf
004C67A3  68 3C D3 7A 00            PUSH 0x7ad33c
004C67A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C67AD  53                        PUSH EBX
004C67AE  53                        PUSH EBX
004C67AF  68 98 00 00 00            PUSH 0x98
004C67B4  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C67B9  E8 12 6D 1E 00            CALL 0x006ad4d0
004C67BE  83 C4 18                  ADD ESP,0x18
004C67C1  85 C0                     TEST EAX,EAX
004C67C3  0F 84 8B 00 00 00         JZ 0x004c6854
004C67C9  CC                        INT3
LAB_004c67cf:
004C67CF  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004C67D2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C67D5  51                        PUSH ECX
004C67D6  42                        INC EDX
004C67D7  8D 47 01                  LEA EAX,[EDI + 0x1]
004C67DA  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
004C67E0  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004C67E3  D8 05 00 05 79 00         FADD float ptr [0x00790500]
004C67E9  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004C67EF  D9 1C 24                  FSTP float ptr [ESP]
004C67F2  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004C67F5  51                        PUSH ECX
004C67F6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004C67F9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004C67FF  D9 1C 24                  FSTP float ptr [ESP]
004C6802  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004C6805  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004C680B  EB 3B                     JMP 0x004c6848
LAB_004c680d:
004C680D  DB 45 F8                  FILD dword ptr [EBP + -0x8]
004C6810  51                        PUSH ECX
004C6811  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
004C6817  D8 05 00 05 79 00         FADD float ptr [0x00790500]
004C681D  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004C6823  D9 1C 24                  FSTP float ptr [ESP]
004C6826  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004C6829  51                        PUSH ECX
004C682A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004C6830  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004C6836  D9 1C 24                  FSTP float ptr [ESP]
004C6839  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004C683C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004C6842  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
LAB_004c6848:
004C6848  51                        PUSH ECX
004C6849  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C684C  D9 1C 24                  FSTP float ptr [ESP]
004C684F  E8 85 DD F3 FF            CALL 0x004045d9
LAB_004c6854:
004C6854  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C6857  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
004C685A  3B C3                     CMP EAX,EBX
004C685C  74 02                     JZ 0x004c6860
004C685E  89 38                     MOV dword ptr [EAX],EDI
LAB_004c6860:
004C6860  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C6863  3B C3                     CMP EAX,EBX
004C6865  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
004C6868  74 05                     JZ 0x004c686f
004C686A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004C686D  89 0A                     MOV dword ptr [EDX],ECX
LAB_004c686f:
004C686F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004C6872  3B C3                     CMP EAX,EBX
004C6874  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
004C6877  74 05                     JZ 0x004c687e
004C6879  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004C687C  89 08                     MOV dword ptr [EAX],ECX
LAB_004c687e:
004C687E  39 5D E8                  CMP dword ptr [EBP + -0x18],EBX
004C6881  74 0C                     JZ 0x004c688f
004C6883  C7 46 24 01 00 00 00      MOV dword ptr [ESI + 0x24],0x1
004C688A  89 5E 28                  MOV dword ptr [ESI + 0x28],EBX
004C688D  EB 0A                     JMP 0x004c6899
LAB_004c688f:
004C688F  89 5E 24                  MOV dword ptr [ESI + 0x24],EBX
004C6892  C7 46 28 01 00 00 00      MOV dword ptr [ESI + 0x28],0x1
LAB_004c6899:
004C6899  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C689C  33 FF                     XOR EDI,EDI
004C689E  3B C7                     CMP EAX,EDI
004C68A0  75 05                     JNZ 0x004c68a7
004C68A2  39 7E 28                  CMP dword ptr [ESI + 0x28],EDI
004C68A5  74 13                     JZ 0x004c68ba
LAB_004c68a7:
004C68A7  39 7D DC                  CMP dword ptr [EBP + -0x24],EDI
004C68AA  75 0E                     JNZ 0x004c68ba
004C68AC  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
004C68AF  E8 5B D4 F3 FF            CALL 0x00403d0f
004C68B4  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
004C68B7  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
LAB_004c68ba:
004C68BA  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C68BD  5F                        POP EDI
004C68BE  5E                        POP ESI
004C68BF  5B                        POP EBX
004C68C0  8B E5                     MOV ESP,EBP
004C68C2  5D                        POP EBP
004C68C3  C2 14 00                  RET 0x14
