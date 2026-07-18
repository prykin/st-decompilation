GameSystemC::GetMessage:
005776D0  55                        PUSH EBP
005776D1  8B EC                     MOV EBP,ESP
005776D3  B8 8C 1D 00 00            MOV EAX,0x1d8c
005776D8  E8 63 63 1B 00            CALL 0x0072da40
005776DD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005776E2  53                        PUSH EBX
005776E3  56                        PUSH ESI
005776E4  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005776E7  57                        PUSH EDI
005776E8  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
005776EE  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
005776F4  6A 00                     PUSH 0x0
005776F6  52                        PUSH EDX
005776F7  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
005776FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00577703  E8 E8 60 1B 00            CALL 0x0072d7f0
00577708  8B F0                     MOV ESI,EAX
0057770A  83 C4 08                  ADD ESP,0x8
0057770D  85 F6                     TEST ESI,ESI
0057770F  0F 85 FC 07 00 00         JNZ 0x00577f11
00577715  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00577718  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0057771B  56                        PUSH ESI
0057771C  8B CF                     MOV ECX,EDI
0057771E  E8 DD E7 16 00            CALL 0x006e5f00
00577723  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00577726  2D FF 43 00 00            SUB EAX,0x43ff
0057772B  0F 84 B9 02 00 00         JZ 0x005779ea
00577731  48                        DEC EAX
00577732  0F 85 C2 07 00 00         JNZ 0x00577efa
00577738  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0057773B  8B 70 17                  MOV ESI,dword ptr [EAX + 0x17]
0057773E  33 C0                     XOR EAX,EAX
00577740  8A 06                     MOV AL,byte ptr [ESI]
00577742  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
00577745  83 E8 00                  SUB EAX,0x0
00577748  88 4D F0                  MOV byte ptr [EBP + -0x10],CL
0057774B  0F 84 7D 02 00 00         JZ 0x005779ce
00577751  48                        DEC EAX
00577752  0F 84 27 02 00 00         JZ 0x0057797f
00577758  48                        DEC EAX
00577759  0F 85 9B 07 00 00         JNZ 0x00577efa
0057775F  8B 7E 01                  MOV EDI,dword ptr [ESI + 0x1]
00577762  8B 4E 05                  MOV ECX,dword ptr [ESI + 0x5]
00577765  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
00577768  83 C6 0D                  ADD ESI,0xd
0057776B  57                        PUSH EDI
0057776C  8D 85 50 FD FF FF         LEA EAX,[EBP + 0xfffffd50]
00577772  56                        PUSH ESI
00577773  50                        PUSH EAX
00577774  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00577777  C7 45 E8 16 05 00 88      MOV dword ptr [EBP + -0x18],0x88000516
0057777E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00577785  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0057778C  89 15 50 87 80 00         MOV dword ptr [0x00808750],EDX
00577792  E8 A9 6B 1B 00            CALL 0x0072e340
00577797  8B 1D E8 BD 85 00         MOV EBX,dword ptr [0x0085bde8]
0057779D  83 C4 0C                  ADD ESP,0xc
005777A0  C6 84 3D 4F FD FF FF 00   MOV byte ptr [EBP + EDI*0x1 + 0xfffffd4f],0x0
LAB_005777a8:
005777A8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005777AB  85 F6                     TEST ESI,ESI
005777AD  7D 36                     JGE 0x005777e5
005777AF  8B 0D 94 B1 79 00         MOV ECX,dword ptr [0x0079b194]
005777B5  A1 9C B1 79 00            MOV EAX,[0x0079b19c]
005777BA  8D 95 50 FD FF FF         LEA EDX,[EBP + 0xfffffd50]
005777C0  51                        PUSH ECX
005777C1  8B 0D 8C B1 79 00         MOV ECX,dword ptr [0x0079b18c]
005777C7  52                        PUSH EDX
005777C8  50                        PUSH EAX
005777C9  68 DD 7D 80 00            PUSH 0x807ddd
005777CE  51                        PUSH ECX
005777CF  68 80 76 80 00            PUSH 0x807680
005777D4  68 78 AC 7C 00            PUSH 0x7cac78
005777D9  68 22 F0 80 00            PUSH 0x80f022
005777DE  FF D3                     CALL EBX
005777E0  83 C4 20                  ADD ESP,0x20
005777E3  EB 36                     JMP 0x0057781b
LAB_005777e5:
005777E5  8B 15 94 B1 79 00         MOV EDX,dword ptr [0x0079b194]
005777EB  8B 0D 9C B1 79 00         MOV ECX,dword ptr [0x0079b19c]
005777F1  52                        PUSH EDX
005777F2  8B 15 8C B1 79 00         MOV EDX,dword ptr [0x0079b18c]
005777F8  8D 85 50 FD FF FF         LEA EAX,[EBP + 0xfffffd50]
005777FE  56                        PUSH ESI
005777FF  50                        PUSH EAX
00577800  51                        PUSH ECX
00577801  68 DD 7D 80 00            PUSH 0x807ddd
00577806  52                        PUSH EDX
00577807  68 80 76 80 00            PUSH 0x807680
0057780C  68 64 AC 7C 00            PUSH 0x7cac64
00577811  68 22 F0 80 00            PUSH 0x80f022
00577816  FF D3                     CALL EBX
00577818  83 C4 24                  ADD ESP,0x24
LAB_0057781b:
0057781B  8D 85 10 FC FF FF         LEA EAX,[EBP + 0xfffffc10]
00577821  46                        INC ESI
00577822  50                        PUSH EAX
00577823  68 22 F0 80 00            PUSH 0x80f022
00577828  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0057782B  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
00577831  33 C9                     XOR ECX,ECX
00577833  83 F8 FF                  CMP EAX,-0x1
00577836  0F 95 C1                  SETNZ CL
00577839  8B F1                     MOV ESI,ECX
0057783B  85 F6                     TEST ESI,ESI
0057783D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00577840  0F 84 18 01 00 00         JZ 0x0057795e
00577846  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0057784C  8D 8D 38 FF FF FF         LEA ECX,[EBP + 0xffffff38]
00577852  8D 85 34 FF FF FF         LEA EAX,[EBP + 0xffffff34]
00577858  6A 00                     PUSH 0x0
0057785A  51                        PUSH ECX
0057785B  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00577862  89 95 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EDX
00577868  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057786D  E8 7E 5F 1B 00            CALL 0x0072d7f0
00577872  83 C4 08                  ADD ESP,0x8
00577875  85 C0                     TEST EAX,EAX
00577877  0F 85 CA 00 00 00         JNZ 0x00577947
0057787D  50                        PUSH EAX
0057787E  50                        PUSH EAX
0057787F  50                        PUSH EAX
00577880  68 22 F0 80 00            PUSH 0x80f022
00577885  68 45 03 00 00            PUSH 0x345
0057788A  E8 31 96 17 00            CALL 0x006f0ec0
0057788F  8B F8                     MOV EDI,EAX
00577891  83 C4 14                  ADD ESP,0x14
00577894  85 FF                     TEST EDI,EDI
00577896  0F 84 98 00 00 00         JZ 0x00577934
0057789C  8B 0D A4 B1 79 00         MOV ECX,dword ptr [0x0079b1a4]
005778A2  8D 45 E4                  LEA EAX,[EBP + -0x1c]
005778A5  6A 00                     PUSH 0x0
005778A7  50                        PUSH EAX
005778A8  8D 95 74 E2 FF FF         LEA EDX,[EBP + 0xffffe274]
005778AE  51                        PUSH ECX
005778AF  6A 00                     PUSH 0x0
005778B1  8B CF                     MOV ECX,EDI
005778B3  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005778B6  E8 25 A4 17 00            CALL 0x006f1ce0
005778BB  85 C0                     TEST EAX,EAX
005778BD  74 59                     JZ 0x00577918
005778BF  8B 0D A0 B1 79 00         MOV ECX,dword ptr [0x0079b1a0]
005778C5  8D 45 E4                  LEA EAX,[EBP + -0x1c]
005778C8  6A 00                     PUSH 0x0
005778CA  50                        PUSH EAX
005778CB  8D 55 F4                  LEA EDX,[EBP + -0xc]
005778CE  51                        PUSH ECX
005778CF  68 80 00 00 00            PUSH 0x80
005778D4  8B CF                     MOV ECX,EDI
005778D6  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005778D9  E8 02 A4 17 00            CALL 0x006f1ce0
005778DE  85 C0                     TEST EAX,EAX
005778E0  74 36                     JZ 0x00577918
005778E2  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005778E5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005778E8  3B D0                     CMP EDX,EAX
005778EA  75 0D                     JNZ 0x005778f9
005778EC  8B 85 7C E2 FF FF         MOV EAX,dword ptr [EBP + 0xffffe27c]
005778F2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005778F5  3B C1                     CMP EAX,ECX
005778F7  74 1F                     JZ 0x00577918
LAB_005778f9:
005778F9  BE 01 00 00 00            MOV ESI,0x1
005778FE  57                        PUSH EDI
005778FF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00577902  E8 69 98 17 00            CALL 0x006f1170
00577907  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0057790D  83 C4 04                  ADD ESP,0x4
00577910  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00577916  EB 3E                     JMP 0x00577956
LAB_00577918:
00577918  33 F6                     XOR ESI,ESI
0057791A  57                        PUSH EDI
0057791B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0057791E  E8 4D 98 17 00            CALL 0x006f1170
00577923  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
00577929  83 C4 04                  ADD ESP,0x4
0057792C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00577932  EB 22                     JMP 0x00577956
LAB_00577934:
00577934  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0057793A  33 F6                     XOR ESI,ESI
0057793C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0057793F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00577945  EB 0F                     JMP 0x00577956
LAB_00577947:
00577947  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
0057794D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00577950  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00577956:
00577956  85 F6                     TEST ESI,ESI
00577958  0F 85 4A FE FF FF         JNZ 0x005777a8
LAB_0057795e:
0057795E  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577964  C7 05 94 87 80 00 01 00 00 00  MOV dword ptr [0x00808794],0x1
0057796E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577974  33 C0                     XOR EAX,EAX
00577976  5F                        POP EDI
00577977  5E                        POP ESI
00577978  5B                        POP EBX
00577979  8B E5                     MOV ESP,EBP
0057797B  5D                        POP EBP
0057797C  C2 04 00                  RET 0x4
LAB_0057797f:
0057797F  80 F9 FF                  CMP CL,0xff
00577982  0F 84 72 05 00 00         JZ 0x00577efa
00577988  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0057798B  81 E7 FF 00 00 00         AND EDI,0xff
00577991  57                        PUSH EDI
00577992  E8 3B 9C E8 FF            CALL 0x004015d2
00577997  83 C6 02                  ADD ESI,0x2
0057799A  57                        PUSH EDI
0057799B  56                        PUSH ESI
0057799C  E8 06 9F E8 FF            CALL 0x004018a7
005779A1  83 C4 0C                  ADD ESP,0xc
LAB_005779a4:
005779A4  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
005779AA  85 C9                     TEST ECX,ECX
005779AC  0F 84 48 05 00 00         JZ 0x00577efa
005779B2  E8 05 A3 E8 FF            CALL 0x00401cbc
005779B7  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
005779BD  33 C0                     XOR EAX,EAX
005779BF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005779C5  5F                        POP EDI
005779C6  5E                        POP ESI
005779C7  5B                        POP EBX
005779C8  8B E5                     MOV ESP,EBP
005779CA  5D                        POP EBP
005779CB  C2 04 00                  RET 0x4
LAB_005779ce:
005779CE  80 F9 FF                  CMP CL,0xff
005779D1  0F 84 23 05 00 00         JZ 0x00577efa
005779D7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005779DA  25 FF 00 00 00            AND EAX,0xff
005779DF  50                        PUSH EAX
005779E0  E8 ED 9B E8 FF            CALL 0x004015d2
005779E5  83 C4 04                  ADD ESP,0x4
005779E8  EB BA                     JMP 0x005779a4
LAB_005779ea:
005779EA  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005779ED  8B 59 17                  MOV EBX,dword ptr [ECX + 0x17]
005779F0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005779F3  8B 03                     MOV EAX,dword ptr [EBX]
005779F5  8D 48 FF                  LEA ECX,[EAX + -0x1]
005779F8  83 F9 08                  CMP ECX,0x8
005779FB  0F 87 F9 04 00 00         JA 0x00577efa
switchD_00577a01::switchD:
00577A01  FF 24 8D 60 7F 57 00      JMP dword ptr [ECX*0x4 + 0x577f60]
switchD_00577a01::caseD_1:
00577A08  A0 83 87 80 00            MOV AL,[0x00808783]
00577A0D  3C 03                     CMP AL,0x3
00577A0F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00577A12  75 61                     JNZ 0x00577a75
00577A14  85 C0                     TEST EAX,EAX
00577A16  0F 84 DE 04 00 00         JZ 0x00577efa
00577A1C  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00577A1F  8B D0                     MOV EDX,EAX
00577A21  89 87 2C 04 00 00         MOV dword ptr [EDI + 0x42c],EAX
00577A27  8B 3D B4 32 80 00         MOV EDI,dword ptr [0x008032b4]
00577A2D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00577A33  F7 DA                     NEG EDX
00577A35  1B D2                     SBB EDX,EDX
00577A37  A3 84 87 80 00            MOV [0x00808784],EAX
00577A3C  23 D7                     AND EDX,EDI
00577A3E  52                        PUSH EDX
00577A3F  50                        PUSH EAX
00577A40  E8 1B DD 1A 00            CALL 0x00725760
00577A45  8B 0D E0 16 80 00         MOV ECX,dword ptr [0x008016e0]
00577A4B  85 C9                     TEST ECX,ECX
00577A4D  0F 84 A7 04 00 00         JZ 0x00577efa
00577A53  A1 84 87 80 00            MOV EAX,[0x00808784]
00577A58  50                        PUSH EAX
00577A59  E8 EE D5 E8 FF            CALL 0x0040504c
00577A5E  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577A64  33 C0                     XOR EAX,EAX
00577A66  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577A6C  5F                        POP EDI
00577A6D  5E                        POP ESI
00577A6E  5B                        POP EBX
00577A6F  8B E5                     MOV ESP,EBP
00577A71  5D                        POP EBP
00577A72  C2 04 00                  RET 0x4
LAB_00577a75:
00577A75  85 C0                     TEST EAX,EAX
00577A77  74 69                     JZ 0x00577ae2
00577A79  A1 8C 87 80 00            MOV EAX,[0x0080878c]
00577A7E  85 C0                     TEST EAX,EAX
00577A80  75 2C                     JNZ 0x00577aae
00577A82  A1 90 87 80 00            MOV EAX,[0x00808790]
00577A87  85 C0                     TEST EAX,EAX
00577A89  75 23                     JNZ 0x00577aae
00577A8B  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00577A8E  8B 35 B4 32 80 00         MOV ESI,dword ptr [0x008032b4]
00577A94  8B C8                     MOV ECX,EAX
00577A96  A3 84 87 80 00            MOV [0x00808784],EAX
00577A9B  F7 D9                     NEG ECX
00577A9D  1B C9                     SBB ECX,ECX
00577A9F  23 CE                     AND ECX,ESI
00577AA1  51                        PUSH ECX
00577AA2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00577AA8  50                        PUSH EAX
00577AA9  E8 B2 DC 1A 00            CALL 0x00725760
LAB_00577aae:
00577AAE  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
00577AB1  89 9F 2C 04 00 00         MOV dword ptr [EDI + 0x42c],EBX
00577AB7  8B 0D E0 16 80 00         MOV ECX,dword ptr [0x008016e0]
00577ABD  85 C9                     TEST ECX,ECX
00577ABF  0F 84 35 04 00 00         JZ 0x00577efa
00577AC5  53                        PUSH EBX
00577AC6  E8 81 D5 E8 FF            CALL 0x0040504c
00577ACB  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577AD1  33 C0                     XOR EAX,EAX
00577AD3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577AD9  5F                        POP EDI
00577ADA  5E                        POP ESI
00577ADB  5B                        POP EBX
00577ADC  8B E5                     MOV ESP,EBP
00577ADE  5D                        POP EBP
00577ADF  C2 04 00                  RET 0x4
LAB_00577ae2:
00577AE2  8B 87 2C 04 00 00         MOV EAX,dword ptr [EDI + 0x42c]
00577AE8  85 C0                     TEST EAX,EAX
00577AEA  0F 85 0A 04 00 00         JNZ 0x00577efa
00577AF0  8B 5B 04                  MOV EBX,dword ptr [EBX + 0x4]
00577AF3  8B 35 B4 32 80 00         MOV ESI,dword ptr [0x008032b4]
00577AF9  8B D3                     MOV EDX,EBX
00577AFB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00577B01  F7 DA                     NEG EDX
00577B03  1B D2                     SBB EDX,EDX
00577B05  89 1D 84 87 80 00         MOV dword ptr [0x00808784],EBX
00577B0B  23 D6                     AND EDX,ESI
00577B0D  52                        PUSH EDX
00577B0E  53                        PUSH EBX
00577B0F  E8 4C DC 1A 00            CALL 0x00725760
00577B14  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577B1A  33 C0                     XOR EAX,EAX
00577B1C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577B22  5F                        POP EDI
00577B23  5E                        POP ESI
00577B24  5B                        POP EBX
00577B25  8B E5                     MOV ESP,EBP
00577B27  5D                        POP EBP
00577B28  C2 04 00                  RET 0x4
switchD_00577a01::caseD_4:
00577B2B  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
00577B2E  33 C0                     XOR EAX,EAX
00577B30  A0 3B 73 80 00            MOV AL,[0x0080733b]
00577B35  3B C1                     CMP EAX,ECX
00577B37  0F 84 BD 03 00 00         JZ 0x00577efa
00577B3D  A0 7E 87 80 00            MOV AL,[0x0080877e]
00577B42  8A D9                     MOV BL,CL
00577B44  84 C0                     TEST AL,AL
00577B46  88 1D 3B 73 80 00         MOV byte ptr [0x0080733b],BL
00577B4C  74 18                     JZ 0x00577b66
00577B4E  33 C0                     XOR EAX,EAX
00577B50  8A C3                     MOV AL,BL
00577B52  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00577B55  C1 E0 03                  SHL EAX,0x3
00577B58  8B 88 E8 2A 7C 00         MOV ECX,dword ptr [EAX + 0x7c2ae8]
00577B5E  89 0D 54 76 80 00         MOV dword ptr [0x00807654],ECX
00577B64  EB 16                     JMP 0x00577b7c
LAB_00577b66:
00577B66  33 C0                     XOR EAX,EAX
00577B68  8A C3                     MOV AL,BL
00577B6A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00577B6D  C1 E0 03                  SHL EAX,0x3
00577B70  8B 90 F4 2A 7C 00         MOV EDX,dword ptr [EAX + 0x7c2af4]
00577B76  89 15 54 76 80 00         MOV dword ptr [0x00807654],EDX
LAB_00577b7c:
00577B7C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00577B82  85 C9                     TEST ECX,ECX
00577B84  0F 84 70 03 00 00         JZ 0x00577efa
00577B8A  8B 90 E4 2A 7C 00         MOV EDX,dword ptr [EAX + 0x7c2ae4]
00577B90  8B 80 F0 2A 7C 00         MOV EAX,dword ptr [EAX + 0x7c2af0]
00577B96  52                        PUSH EDX
00577B97  50                        PUSH EAX
00577B98  E8 A3 0A 17 00            CALL 0x006e8640
00577B9D  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577BA3  33 C0                     XOR EAX,EAX
00577BA5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577BAB  5F                        POP EDI
00577BAC  5E                        POP ESI
00577BAD  5B                        POP EBX
00577BAE  8B E5                     MOV ESP,EBP
00577BB0  5D                        POP EBP
00577BB1  C2 04 00                  RET 0x4
switchD_00577a01::caseD_6:
00577BB4  B9 A0 16 80 00            MOV ECX,0x8016a0
00577BB9  83 F8 06                  CMP EAX,0x6
00577BBC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00577BBF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00577BC2  75 1B                     JNZ 0x00577bdf
00577BC4  8A 4B 08                  MOV CL,byte ptr [EBX + 0x8]
00577BC7  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00577BCA  8A 53 04                  MOV DL,byte ptr [EBX + 0x4]
00577BCD  51                        PUSH ECX
00577BCE  C1 E8 10                  SHR EAX,0x10
00577BD1  52                        PUSH EDX
00577BD2  50                        PUSH EAX
00577BD3  B9 20 76 80 00            MOV ECX,0x807620
00577BD8  E8 35 96 E8 FF            CALL 0x00401212
00577BDD  EB 15                     JMP 0x00577bf4
LAB_00577bdf:
00577BDF  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
00577BE2  8A 4B 04                  MOV CL,byte ptr [EBX + 0x4]
00577BE5  C1 EA 10                  SHR EDX,0x10
00577BE8  51                        PUSH ECX
00577BE9  52                        PUSH EDX
00577BEA  B9 20 76 80 00            MOV ECX,0x807620
00577BEF  E8 AC B7 E8 FF            CALL 0x004033a0
LAB_00577bf4:
00577BF4  8B 35 E4 16 80 00         MOV ESI,dword ptr [0x008016e4]
00577BFA  85 F6                     TEST ESI,ESI
00577BFC  74 34                     JZ 0x00577c32
00577BFE  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
00577C05  8D BE 81 01 00 00         LEA EDI,[ESI + 0x181]
00577C0B  C7 45 F0 08 00 00 00      MOV dword ptr [EBP + -0x10],0x8
LAB_00577c12:
00577C12  8B 07                     MOV EAX,dword ptr [EDI]
00577C14  85 C0                     TEST EAX,EAX
00577C16  74 0E                     JZ 0x00577c26
00577C18  8D 4E 18                  LEA ECX,[ESI + 0x18]
00577C1B  51                        PUSH ECX
00577C1C  50                        PUSH EAX
00577C1D  6A 02                     PUSH 0x2
00577C1F  8B CE                     MOV ECX,ESI
00577C21  E8 5A E4 16 00            CALL 0x006e6080
LAB_00577c26:
00577C26  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00577C29  83 C7 04                  ADD EDI,0x4
00577C2C  48                        DEC EAX
00577C2D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00577C30  75 E0                     JNZ 0x00577c12
LAB_00577c32:
00577C32  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00577C35  66 0F B6 15 4D 87 80 00   MOVZX DX,byte ptr [0x0080874d]
00577C3D  C1 EE 10                  SHR ESI,0x10
00577C40  66 3B F2                  CMP SI,DX
00577C43  0F 84 B1 02 00 00         JZ 0x00577efa
00577C49  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
00577C4F  84 C9                     TEST CL,CL
00577C51  76 58                     JBE 0x00577cab
00577C53  33 D2                     XOR EDX,EDX
00577C55  B8 F5 8A 80 00            MOV EAX,0x808af5
00577C5A  8A D1                     MOV DL,CL
LAB_00577c5c:
00577C5C  66 0F B6 78 FF            MOVZX DI,byte ptr [EAX + -0x1]
00577C61  66 3B FE                  CMP DI,SI
00577C64  75 0B                     JNZ 0x00577c71
00577C66  80 38 00                  CMP byte ptr [EAX],0x0
00577C69  74 06                     JZ 0x00577c71
00577C6B  8D 78 BB                  LEA EDI,[EAX + -0x45]
00577C6E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_00577c71:
00577C71  05 9C 00 00 00            ADD EAX,0x9c
00577C76  4A                        DEC EDX
00577C77  75 E3                     JNZ 0x00577c5c
00577C79  84 C9                     TEST CL,CL
00577C7B  76 2E                     JBE 0x00577cab
00577C7D  66 8B 73 04               MOV SI,word ptr [EBX + 0x4]
00577C81  33 D2                     XOR EDX,EDX
00577C83  8A D1                     MOV DL,CL
00577C85  B8 F5 8A 80 00            MOV EAX,0x808af5
00577C8A  8B CA                     MOV ECX,EDX
00577C8C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_00577c8f:
00577C8F  66 0F B6 78 FF            MOVZX DI,byte ptr [EAX + -0x1]
00577C94  66 3B FE                  CMP DI,SI
00577C97  75 08                     JNZ 0x00577ca1
00577C99  80 38 00                  CMP byte ptr [EAX],0x0
00577C9C  74 03                     JZ 0x00577ca1
00577C9E  8D 50 BB                  LEA EDX,[EAX + -0x45]
LAB_00577ca1:
00577CA1  05 9C 00 00 00            ADD EAX,0x9c
00577CA6  49                        DEC ECX
00577CA7  75 E6                     JNZ 0x00577c8f
00577CA9  EB 03                     JMP 0x00577cae
LAB_00577cab:
00577CAB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_00577cae:
00577CAE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00577CB1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00577CB7  52                        PUSH EDX
00577CB8  50                        PUSH EAX
00577CB9  51                        PUSH ECX
00577CBA  68 C2 42 00 00            PUSH 0x42c2
00577CBF  E8 7C 84 13 00            CALL 0x006b0140
00577CC4  50                        PUSH EAX
00577CC5  68 3A F3 80 00            PUSH 0x80f33a
00577CCA  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00577CD0  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00577CD6  83 C4 10                  ADD ESP,0x10
00577CD9  85 C9                     TEST ECX,ECX
00577CDB  0F 84 19 02 00 00         JZ 0x00577efa
00577CE1  6A 08                     PUSH 0x8
00577CE3  68 3A F3 80 00            PUSH 0x80f33a
00577CE8  E8 EB 97 E8 FF            CALL 0x004014d8
00577CED  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577CF3  33 C0                     XOR EAX,EAX
00577CF5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577CFB  5F                        POP EDI
00577CFC  5E                        POP ESI
00577CFD  5B                        POP EBX
00577CFE  8B E5                     MOV ESP,EBP
00577D00  5D                        POP EBP
00577D01  C2 04 00                  RET 0x4
switchD_00577a01::caseD_8:
00577D04  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00577D0A  8D 8D 58 FE FF FF         LEA ECX,[EBP + 0xfffffe58]
00577D10  8D 85 54 FE FF FF         LEA EAX,[EBP + 0xfffffe54]
00577D16  6A 00                     PUSH 0x0
00577D18  51                        PUSH ECX
00577D19  89 95 54 FE FF FF         MOV dword ptr [EBP + 0xfffffe54],EDX
00577D1F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00577D24  E8 C7 5A 1B 00            CALL 0x0072d7f0
00577D29  83 C4 08                  ADD ESP,0x8
00577D2C  85 C0                     TEST EAX,EAX
00577D2E  0F 85 C6 01 00 00         JNZ 0x00577efa
00577D34  8B 15 98 B1 79 00         MOV EDX,dword ptr [0x0079b198]
00577D3A  A1 90 B1 79 00            MOV EAX,[0x0079b190]
00577D3F  52                        PUSH EDX
00577D40  50                        PUSH EAX
00577D41  68 80 76 80 00            PUSH 0x807680
00577D46  68 DC 6E 7C 00            PUSH 0x7c6edc
00577D4B  68 3A F3 80 00            PUSH 0x80f33a
00577D50  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00577D56  6A 00                     PUSH 0x0
00577D58  6A 00                     PUSH 0x0
00577D5A  6A 00                     PUSH 0x0
00577D5C  68 3A F3 80 00            PUSH 0x80f33a
00577D61  68 45 03 00 00            PUSH 0x345
00577D66  E8 55 91 17 00            CALL 0x006f0ec0
00577D6B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00577D6E  8B 0D 5C 99 80 00         MOV ECX,dword ptr [0x0080995c]
00577D74  8B D8                     MOV EBX,EAX
00577D76  51                        PUSH ECX
00577D77  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00577D7A  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00577D7D  50                        PUSH EAX
00577D7E  53                        PUSH EBX
00577D7F  E8 C0 C1 E8 FF            CALL 0x00403f44
00577D84  8B F0                     MOV ESI,EAX
00577D86  83 C4 34                  ADD ESP,0x34
00577D89  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00577D8C  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00577D8F  85 C0                     TEST EAX,EAX
00577D91  0F 84 0C 01 00 00         JZ 0x00577ea3
00577D97  8D 48 FF                  LEA ECX,[EAX + -0x1]
00577D9A  3B C8                     CMP ECX,EAX
00577D9C  73 0E                     JNC 0x00577dac
00577D9E  8D 78 FF                  LEA EDI,[EAX + -0x1]
00577DA1  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00577DA4  0F AF 7E 08               IMUL EDI,dword ptr [ESI + 0x8]
00577DA8  03 F8                     ADD EDI,EAX
00577DAA  EB 02                     JMP 0x00577dae
LAB_00577dac:
00577DAC  33 FF                     XOR EDI,EDI
LAB_00577dae:
00577DAE  8D 47 4C                  LEA EAX,[EDI + 0x4c]
00577DB1  85 C0                     TEST EAX,EAX
00577DB3  0F 84 EA 00 00 00         JZ 0x00577ea3
00577DB9  6A 00                     PUSH 0x0
00577DBB  6A 00                     PUSH 0x0
00577DBD  50                        PUSH EAX
00577DBE  53                        PUSH EBX
00577DBF  E8 E9 94 E8 FF            CALL 0x004012ad
00577DC4  83 C4 10                  ADD ESP,0x10
00577DC7  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00577DCA  85 C0                     TEST EAX,EAX
00577DCC  0F 84 D1 00 00 00         JZ 0x00577ea3
00577DD2  83 C9 FF                  OR ECX,0xffffffff
00577DD5  33 C0                     XOR EAX,EAX
00577DD7  F2 AE                     SCASB.REPNE ES:EDI
00577DD9  F7 D1                     NOT ECX
00577DDB  2B F9                     SUB EDI,ECX
00577DDD  8D 95 98 FE FF FF         LEA EDX,[EBP + 0xfffffe98]
00577DE3  8B C1                     MOV EAX,ECX
00577DE5  8B F7                     MOV ESI,EDI
00577DE7  8B FA                     MOV EDI,EDX
00577DE9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00577DEC  C1 E9 02                  SHR ECX,0x2
00577DEF  F3 A5                     MOVSD.REP ES:EDI,ESI
00577DF1  8A 5A 08                  MOV BL,byte ptr [EDX + 0x8]
00577DF4  8B C8                     MOV ECX,EAX
00577DF6  83 E1 03                  AND ECX,0x3
00577DF9  F3 A4                     MOVSB.REP ES:EDI,ESI
00577DFB  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
00577E01  88 9D DC FE FF FF         MOV byte ptr [EBP + 0xfffffedc],BL
00577E07  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
00577E0D  C6 85 DD FE FF FF 01      MOV byte ptr [EBP + 0xfffffedd],0x1
00577E14  C6 85 DF FE FF FF 01      MOV byte ptr [EBP + 0xfffffedf],0x1
00577E1B  C6 85 DE FE FF FF 00      MOV byte ptr [EBP + 0xfffffede],0x0
00577E22  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
00577E28  80 FB 08                  CMP BL,0x8
00577E2B  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
00577E31  73 40                     JNC 0x00577e73
00577E33  33 C0                     XOR EAX,EAX
00577E35  B9 27 00 00 00            MOV ECX,0x27
00577E3A  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00577E3F  8D B5 98 FE FF FF         LEA ESI,[EBP + 0xfffffe98]
00577E45  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00577E48  C1 E2 03                  SHL EDX,0x3
00577E4B  2B D0                     SUB EDX,EAX
00577E4D  8D 3C 95 B0 8A 80 00      LEA EDI,[EDX*0x4 + 0x808ab0]
00577E54  F3 A5                     MOVSD.REP ES:EDI,ESI
00577E56  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
00577E5C  FE C1                     INC CL
00577E5E  88 0D AF 8A 80 00         MOV byte ptr [0x00808aaf],CL
00577E64  8B 0D E4 16 80 00         MOV ECX,dword ptr [0x008016e4]
00577E6A  85 C9                     TEST ECX,ECX
00577E6C  74 05                     JZ 0x00577e73
00577E6E  E8 94 DF E8 FF            CALL 0x00405e07
LAB_00577e73:
00577E73  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00577E76  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00577E79  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00577E7C  50                        PUSH EAX
00577E7D  51                        PUSH ECX
00577E7E  E8 24 9A E8 FF            CALL 0x004018a7
00577E83  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00577E86  83 C4 08                  ADD ESP,0x8
00577E89  8D 55 E0                  LEA EDX,[EBP + -0x20]
00577E8C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00577E8F  52                        PUSH EDX
00577E90  C6 84 C0 C7 87 80 00 01   MOV byte ptr [EAX + EAX*0x8 + 0x8087c7],0x1
00577E98  E8 C3 31 13 00            CALL 0x006ab060
00577E9D  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00577EA0  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_00577ea3:
00577EA3  85 F6                     TEST ESI,ESI
00577EA5  74 06                     JZ 0x00577ead
00577EA7  56                        PUSH ESI
00577EA8  E8 63 62 13 00            CALL 0x006ae110
LAB_00577ead:
00577EAD  53                        PUSH EBX
00577EAE  E8 BD 92 17 00            CALL 0x006f1170
00577EB3  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577EB9  83 C4 04                  ADD ESP,0x4
00577EBC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577EC2  33 C0                     XOR EAX,EAX
00577EC4  5F                        POP EDI
00577EC5  5E                        POP ESI
00577EC6  5B                        POP EBX
00577EC7  8B E5                     MOV ESP,EBP
00577EC9  5D                        POP EBP
00577ECA  C2 04 00                  RET 0x4
switchD_00577a01::caseD_9:
00577ECD  8B 15 BC 17 81 00         MOV EDX,dword ptr [0x008117bc]
00577ED3  85 D2                     TEST EDX,EDX
00577ED5  74 23                     JZ 0x00577efa
00577ED7  B9 08 00 00 00            MOV ECX,0x8
00577EDC  33 C0                     XOR EAX,EAX
00577EDE  8D 7D BC                  LEA EDI,[EBP + -0x44]
00577EE1  F3 AB                     STOSD.REP ES:EDI
00577EE3  C7 45 CC C5 5D 00 00      MOV dword ptr [EBP + -0x34],0x5dc5
00577EEA  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00577EED  8D 4D BC                  LEA ECX,[EBP + -0x44]
00577EF0  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00577EF3  8B 02                     MOV EAX,dword ptr [EDX]
00577EF5  51                        PUSH ECX
00577EF6  8B CA                     MOV ECX,EDX
00577EF8  FF 10                     CALL dword ptr [EAX]
switchD_00577a01::caseD_2:
00577EFA  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00577F00  33 C0                     XOR EAX,EAX
00577F02  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00577F08  5F                        POP EDI
00577F09  5E                        POP ESI
00577F0A  5B                        POP EBX
00577F0B  8B E5                     MOV ESP,EBP
00577F0D  5D                        POP EBP
00577F0E  C2 04 00                  RET 0x4
LAB_00577f11:
00577F11  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00577F17  68 48 AC 7C 00            PUSH 0x7cac48
00577F1C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00577F21  56                        PUSH ESI
00577F22  6A 00                     PUSH 0x0
00577F24  68 C6 01 00 00            PUSH 0x1c6
00577F29  68 5C AB 7C 00            PUSH 0x7cab5c
00577F2E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00577F33  E8 98 55 13 00            CALL 0x006ad4d0
00577F38  83 C4 18                  ADD ESP,0x18
00577F3B  85 C0                     TEST EAX,EAX
00577F3D  74 01                     JZ 0x00577f40
00577F3F  CC                        INT3
LAB_00577f40:
00577F40  68 C7 01 00 00            PUSH 0x1c7
00577F45  68 5C AB 7C 00            PUSH 0x7cab5c
00577F4A  6A 00                     PUSH 0x0
00577F4C  56                        PUSH ESI
00577F4D  E8 EE DE 12 00            CALL 0x006a5e40
00577F52  5F                        POP EDI
00577F53  5E                        POP ESI
00577F54  B8 FF FF 00 00            MOV EAX,0xffff
00577F59  5B                        POP EBX
00577F5A  8B E5                     MOV ESP,EBP
00577F5C  5D                        POP EBP
00577F5D  C2 04 00                  RET 0x4
