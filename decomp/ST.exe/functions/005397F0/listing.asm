FUN_005397f0:
005397F0  55                        PUSH EBP
005397F1  8B EC                     MOV EBP,ESP
005397F3  83 EC 48                  SUB ESP,0x48
005397F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005397FB  56                        PUSH ESI
005397FC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005397FF  57                        PUSH EDI
00539800  8D 55 BC                  LEA EDX,[EBP + -0x44]
00539803  8D 4D B8                  LEA ECX,[EBP + -0x48]
00539806  6A 00                     PUSH 0x0
00539808  52                        PUSH EDX
00539809  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053980C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539812  E8 D9 3F 1F 00            CALL 0x0072d7f0
00539817  8B F0                     MOV ESI,EAX
00539819  83 C4 08                  ADD ESP,0x8
0053981C  85 F6                     TEST ESI,ESI
0053981E  0F 85 91 01 00 00         JNZ 0x005399b5
00539824  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00539827  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053982A  57                        PUSH EDI
0053982B  8B CE                     MOV ECX,ESI
0053982D  E8 C6 7F EC FF            CALL 0x004017f8
00539832  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00539835  83 F8 03                  CMP EAX,0x3
00539838  0F 87 11 01 00 00         JA 0x0053994f
0053983E  0F 84 F1 00 00 00         JZ 0x00539935
00539844  83 E8 00                  SUB EAX,0x0
00539847  74 23                     JZ 0x0053986c
00539849  83 E8 02                  SUB EAX,0x2
0053984C  0F 85 50 01 00 00         JNZ 0x005399a2
00539852  8B CE                     MOV ECX,ESI
00539854  E8 F6 AA EC FF            CALL 0x0040434f
00539859  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053985C  33 C0                     XOR EAX,EAX
0053985E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539864  5F                        POP EDI
00539865  5E                        POP ESI
00539866  8B E5                     MOV ESP,EBP
00539868  5D                        POP EBP
00539869  C2 04 00                  RET 0x4
LAB_0053986c:
0053986C  33 C0                     XOR EAX,EAX
0053986E  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
00539875  83 E8 03                  SUB EAX,0x3
00539878  74 5A                     JZ 0x005398d4
0053987A  48                        DEC EAX
0053987B  0F 85 21 01 00 00         JNZ 0x005399a2
00539881  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
00539884  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
00539887  03 C1                     ADD EAX,ECX
00539889  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053988C  3B C8                     CMP ECX,EAX
0053988E  7D 06                     JGE 0x00539896
00539890  83 C1 1E                  ADD ECX,0x1e
00539893  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
LAB_00539896:
00539896  39 46 3C                  CMP dword ptr [ESI + 0x3c],EAX
00539899  7C 0C                     JL 0x005398a7
0053989B  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0053989E  66 C7 86 72 01 00 00 02 00  MOV word ptr [ESI + 0x172],0x2
LAB_005398a7:
005398A7  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
005398AA  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
005398AD  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
005398B0  52                        PUSH EDX
005398B1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005398B7  50                        PUSH EAX
005398B8  6A FF                     PUSH -0x1
005398BA  51                        PUSH ECX
005398BB  52                        PUSH EDX
005398BC  E8 7F 9D 17 00            CALL 0x006b3640
005398C1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005398C4  33 C0                     XOR EAX,EAX
005398C6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005398CC  5F                        POP EDI
005398CD  5E                        POP ESI
005398CE  8B E5                     MOV ESP,EBP
005398D0  5D                        POP EBP
005398D1  C2 04 00                  RET 0x4
LAB_005398d4:
005398D4  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
005398D7  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
005398DA  8D 84 08 8C FE FF FF      LEA EAX,[EAX + ECX*0x1 + 0xfffffe8c]
005398E1  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
005398E4  3B C8                     CMP ECX,EAX
005398E6  7E 06                     JLE 0x005398ee
005398E8  83 C1 E2                  ADD ECX,-0x1e
005398EB  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
LAB_005398ee:
005398EE  39 46 3C                  CMP dword ptr [ESI + 0x3c],EAX
005398F1  7F 15                     JG 0x00539908
005398F3  6A 01                     PUSH 0x1
005398F5  8B CE                     MOV ECX,ESI
005398F7  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
005398FA  66 C7 86 72 01 00 00 01 00  MOV word ptr [ESI + 0x172],0x1
00539903  E8 9B B5 EC FF            CALL 0x00404ea3
LAB_00539908:
00539908  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0053990B  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0053990E  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
00539911  52                        PUSH EDX
00539912  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00539918  50                        PUSH EAX
00539919  6A FF                     PUSH -0x1
0053991B  51                        PUSH ECX
0053991C  52                        PUSH EDX
0053991D  E8 1E 9D 17 00            CALL 0x006b3640
00539922  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00539925  33 C0                     XOR EAX,EAX
00539927  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053992D  5F                        POP EDI
0053992E  5E                        POP ESI
0053992F  8B E5                     MOV ESP,EBP
00539931  5D                        POP EBP
00539932  C2 04 00                  RET 0x4
LAB_00539935:
00539935  8B CE                     MOV ECX,ESI
00539937  E8 33 AD EC FF            CALL 0x0040466f
0053993C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053993F  33 C0                     XOR EAX,EAX
00539941  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539947  5F                        POP EDI
00539948  5E                        POP ESI
00539949  8B E5                     MOV ESP,EBP
0053994B  5D                        POP EBP
0053994C  C2 04 00                  RET 0x4
LAB_0053994f:
0053994F  2D FF BF 00 00            SUB EAX,0xbfff
00539954  74 37                     JZ 0x0053998d
00539956  48                        DEC EAX
00539957  75 49                     JNZ 0x005399a2
00539959  6A 00                     PUSH 0x0
0053995B  68 94 38 7C 00            PUSH 0x7c3894
00539960  E8 17 BE EC FF            CALL 0x0040577c
00539965  83 C4 08                  ADD ESP,0x8
00539968  8B CE                     MOV ECX,ESI
0053996A  6A 00                     PUSH 0x0
0053996C  6A 01                     PUSH 0x1
0053996E  68 4D 27 00 00            PUSH 0x274d
00539973  50                        PUSH EAX
00539974  57                        PUSH EDI
00539975  E8 A7 87 EC FF            CALL 0x00402121
0053997A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053997D  33 C0                     XOR EAX,EAX
0053997F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00539985  5F                        POP EDI
00539986  5E                        POP ESI
00539987  8B E5                     MOV ESP,EBP
00539989  5D                        POP EBP
0053998A  C2 04 00                  RET 0x4
LAB_0053998d:
0053998D  C7 46 28 00 A1 00 00      MOV dword ptr [ESI + 0x28],0xa100
00539994  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0053999A  83 C6 18                  ADD ESI,0x18
0053999D  8B 01                     MOV EAX,dword ptr [ECX]
0053999F  56                        PUSH ESI
005399A0  FF 10                     CALL dword ptr [EAX]
LAB_005399a2:
005399A2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005399A5  33 C0                     XOR EAX,EAX
005399A7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005399AD  5F                        POP EDI
005399AE  5E                        POP ESI
005399AF  8B E5                     MOV ESP,EBP
005399B1  5D                        POP EBP
005399B2  C2 04 00                  RET 0x4
LAB_005399b5:
005399B5  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005399B8  68 54 75 7C 00            PUSH 0x7c7554
005399BD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005399C2  56                        PUSH ESI
005399C3  6A 00                     PUSH 0x0
005399C5  68 9F 00 00 00            PUSH 0x9f
005399CA  68 90 74 7C 00            PUSH 0x7c7490
005399CF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005399D5  E8 F6 3A 17 00            CALL 0x006ad4d0
005399DA  83 C4 18                  ADD ESP,0x18
005399DD  85 C0                     TEST EAX,EAX
005399DF  74 01                     JZ 0x005399e2
005399E1  CC                        INT3
LAB_005399e2:
005399E2  68 9F 00 00 00            PUSH 0x9f
005399E7  68 90 74 7C 00            PUSH 0x7c7490
005399EC  6A 00                     PUSH 0x0
005399EE  56                        PUSH ESI
005399EF  E8 4C C4 16 00            CALL 0x006a5e40
005399F4  5F                        POP EDI
005399F5  B8 FF FF 00 00            MOV EAX,0xffff
005399FA  5E                        POP ESI
005399FB  8B E5                     MOV ESP,EBP
005399FD  5D                        POP EBP
005399FE  C2 04 00                  RET 0x4
