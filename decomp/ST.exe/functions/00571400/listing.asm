FUN_00571400:
00571400  55                        PUSH EBP
00571401  8B EC                     MOV EBP,ESP
00571403  83 EC 6C                  SUB ESP,0x6c
00571406  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0057140B  53                        PUSH EBX
0057140C  56                        PUSH ESI
0057140D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00571410  57                        PUSH EDI
00571411  8D 55 98                  LEA EDX,[EBP + -0x68]
00571414  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00571417  6A 00                     PUSH 0x0
00571419  52                        PUSH EDX
0057141A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00571421  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00571424  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057142A  E8 C1 C3 1B 00            CALL 0x0072d7f0
0057142F  8B F0                     MOV ESI,EAX
00571431  83 C4 08                  ADD ESP,0x8
00571434  85 F6                     TEST ESI,ESI
00571436  0F 85 2F 02 00 00         JNZ 0x0057166b
0057143C  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0057143F  50                        PUSH EAX
00571440  68 80 00 00 00            PUSH 0x80
00571445  6A 03                     PUSH 0x3
00571447  BE 01 00 00 00            MOV ESI,0x1
0057144C  50                        PUSH EAX
0057144D  56                        PUSH ESI
0057144E  8D 87 06 7B 00 00         LEA EAX,[EDI + 0x7b06]
00571454  68 00 00 00 80            PUSH 0x80000000
00571459  50                        PUSH EAX
0057145A  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
00571460  8B D8                     MOV EBX,EAX
00571462  83 FB FF                  CMP EBX,-0x1
00571465  0F 84 B2 01 00 00         JZ 0x0057161d
0057146B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057146E  85 C0                     TEST EAX,EAX
00571470  74 35                     JZ 0x005714a7
00571472  6A 00                     PUSH 0x0
00571474  6A 00                     PUSH 0x0
00571476  6A 00                     PUSH 0x0
00571478  53                        PUSH EBX
00571479  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
0057147F  83 F8 FF                  CMP EAX,-0x1
00571482  74 20                     JZ 0x005714a4
00571484  8D 4D F8                  LEA ECX,[EBP + -0x8]
00571487  6A 00                     PUSH 0x0
00571489  51                        PUSH ECX
0057148A  8D 97 34 11 00 00         LEA EDX,[EDI + 0x1134]
00571490  6A 04                     PUSH 0x4
00571492  52                        PUSH EDX
00571493  53                        PUSH EBX
00571494  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
0057149A  85 C0                     TEST EAX,EAX
0057149C  74 06                     JZ 0x005714a4
0057149E  83 7D F8 04               CMP dword ptr [EBP + -0x8],0x4
005714A2  74 03                     JZ 0x005714a7
LAB_005714a4:
005714A4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_005714a7:
005714A7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005714AA  85 C0                     TEST EAX,EAX
005714AC  0F 85 5F 01 00 00         JNZ 0x00571611
005714B2  8B 87 91 11 00 00         MOV EAX,dword ptr [EDI + 0x1191]
005714B8  6A 00                     PUSH 0x0
005714BA  6A 00                     PUSH 0x0
005714BC  50                        PUSH EAX
005714BD  53                        PUSH EBX
005714BE  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005714C4  83 F8 FF                  CMP EAX,-0x1
005714C7  0F 84 44 01 00 00         JZ 0x00571611
005714CD  8D 4D F8                  LEA ECX,[EBP + -0x8]
005714D0  6A 00                     PUSH 0x0
005714D2  51                        PUSH ECX
005714D3  8D 55 D8                  LEA EDX,[EBP + -0x28]
005714D6  6A 1B                     PUSH 0x1b
005714D8  52                        PUSH EDX
005714D9  53                        PUSH EBX
005714DA  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
005714E0  85 C0                     TEST EAX,EAX
005714E2  0F 84 00 01 00 00         JZ 0x005715e8
005714E8  83 7D F8 1B               CMP dword ptr [EBP + -0x8],0x1b
005714EC  0F 85 F6 00 00 00         JNZ 0x005715e8
005714F2  8B 4D E6                  MOV ECX,dword ptr [EBP + -0x1a]
005714F5  33 C0                     XOR EAX,EAX
005714F7  81 E1 FF 00 00 00         AND ECX,0xff
005714FD  8D 71 FB                  LEA ESI,[ECX + -0x5]
00571500  83 FE 25                  CMP ESI,0x25
00571503  77 61                     JA 0x00571566
00571505  33 D2                     XOR EDX,EDX
00571507  8A 96 E8 16 57 00         MOV DL,byte ptr [ESI + 0x5716e8]
switchD_0057150d::switchD:
0057150D  FF 24 95 B4 16 57 00      JMP dword ptr [EDX*0x4 + 0x5716b4]
switchD_0057150d::caseD_5:
00571514  B8 0C 00 00 00            MOV EAX,0xc
00571519  EB 4B                     JMP 0x00571566
switchD_0057150d::caseD_16:
0057151B  B8 18 00 00 00            MOV EAX,0x18
00571520  EB 44                     JMP 0x00571566
switchD_0057150d::caseD_17:
00571522  B8 21 00 00 00            MOV EAX,0x21
00571527  EB 3D                     JMP 0x00571566
switchD_0057150d::caseD_18:
00571529  B8 12 00 00 00            MOV EAX,0x12
0057152E  EB 36                     JMP 0x00571566
switchD_0057150d::caseD_1a:
00571530  B8 0D 00 00 00            MOV EAX,0xd
00571535  EB 2F                     JMP 0x00571566
switchD_0057150d::caseD_1e:
00571537  B8 0B 00 00 00            MOV EAX,0xb
0057153C  EB 28                     JMP 0x00571566
switchD_0057150d::caseD_1f:
0057153E  B8 07 00 00 00            MOV EAX,0x7
00571543  EB 21                     JMP 0x00571566
switchD_0057150d::caseD_20:
00571545  B8 09 00 00 00            MOV EAX,0x9
0057154A  EB 1A                     JMP 0x00571566
switchD_0057150d::caseD_21:
0057154C  B8 05 00 00 00            MOV EAX,0x5
00571551  EB 13                     JMP 0x00571566
switchD_0057150d::caseD_23:
00571553  B8 10 00 00 00            MOV EAX,0x10
00571558  EB 0C                     JMP 0x00571566
switchD_0057150d::caseD_27:
0057155A  B8 02 00 00 00            MOV EAX,0x2
0057155F  EB 05                     JMP 0x00571566
switchD_0057150d::caseD_8:
00571561  B8 01 00 00 00            MOV EAX,0x1
switchD_0057150d::caseD_6:
00571566  8D 70 1B                  LEA ESI,[EAX + 0x1b]
00571569  8B 87 8D 11 00 00         MOV EAX,dword ptr [EDI + 0x118d]
0057156F  3B F0                     CMP ESI,EAX
00571571  76 19                     JBE 0x0057158c
00571573  8B 87 89 11 00 00         MOV EAX,dword ptr [EDI + 0x1189]
00571579  56                        PUSH ESI
0057157A  50                        PUSH EAX
0057157B  89 B7 8D 11 00 00         MOV dword ptr [EDI + 0x118d],ESI
00571581  E8 CA B9 13 00            CALL 0x006acf50
00571586  89 87 89 11 00 00         MOV dword ptr [EDI + 0x1189],EAX
LAB_0057158c:
0057158C  8B 8F 91 11 00 00         MOV ECX,dword ptr [EDI + 0x1191]
00571592  6A 00                     PUSH 0x0
00571594  6A 00                     PUSH 0x0
00571596  51                        PUSH ECX
00571597  53                        PUSH EBX
00571598  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
0057159E  83 F8 FF                  CMP EAX,-0x1
005715A1  74 35                     JZ 0x005715d8
005715A3  8B 87 89 11 00 00         MOV EAX,dword ptr [EDI + 0x1189]
005715A9  8D 55 F8                  LEA EDX,[EBP + -0x8]
005715AC  6A 00                     PUSH 0x0
005715AE  52                        PUSH EDX
005715AF  56                        PUSH ESI
005715B0  50                        PUSH EAX
005715B1  53                        PUSH EBX
005715B2  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
005715B8  85 C0                     TEST EAX,EAX
005715BA  74 1C                     JZ 0x005715d8
005715BC  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
005715BF  75 17                     JNZ 0x005715d8
005715C1  8B 87 91 11 00 00         MOV EAX,dword ptr [EDI + 0x1191]
005715C7  53                        PUSH EBX
005715C8  03 C6                     ADD EAX,ESI
005715CA  89 87 91 11 00 00         MOV dword ptr [EDI + 0x1191],EAX
005715D0  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
005715D6  EB 48                     JMP 0x00571620
LAB_005715d8:
005715D8  53                        PUSH EBX
005715D9  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005715E0  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
005715E6  EB 38                     JMP 0x00571620
LAB_005715e8:
005715E8  C7 87 85 11 00 00 00 00 00 00  MOV dword ptr [EDI + 0x1185],0x0
005715F2  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
005715F8  85 C9                     TEST ECX,ECX
005715FA  74 18                     JZ 0x00571614
005715FC  6A 08                     PUSH 0x8
005715FE  68 BC A2 7C 00            PUSH 0x7ca2bc
00571603  E8 D0 FE E8 FF            CALL 0x004014d8
00571608  53                        PUSH EBX
00571609  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0057160F  EB 0F                     JMP 0x00571620
LAB_00571611:
00571611  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00571614:
00571614  53                        PUSH EBX
00571615  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0057161B  EB 03                     JMP 0x00571620
LAB_0057161d:
0057161D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00571620:
00571620  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00571623  85 C0                     TEST EAX,EAX
00571625  74 32                     JZ 0x00571659
00571627  C7 87 85 11 00 00 00 00 00 00  MOV dword ptr [EDI + 0x1185],0x0
00571631  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00571637  85 C9                     TEST ECX,ECX
00571639  74 1E                     JZ 0x00571659
0057163B  6A 09                     PUSH 0x9
0057163D  68 A0 A2 7C 00            PUSH 0x7ca2a0
00571642  E8 91 FE E8 FF            CALL 0x004014d8
00571647  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0057164D  6A 08                     PUSH 0x8
0057164F  68 74 A2 7C 00            PUSH 0x7ca274
00571654  E8 7F FE E8 FF            CALL 0x004014d8
LAB_00571659:
00571659  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0057165C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00571662  5F                        POP EDI
00571663  5E                        POP ESI
00571664  5B                        POP EBX
00571665  8B E5                     MOV ESP,EBP
00571667  5D                        POP EBP
00571668  C2 04 00                  RET 0x4
LAB_0057166b:
0057166B  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0057166E  68 5C A2 7C 00            PUSH 0x7ca25c
00571673  68 CC 4C 7A 00            PUSH 0x7a4ccc
00571678  56                        PUSH ESI
00571679  6A 00                     PUSH 0x0
0057167B  68 14 09 00 00            PUSH 0x914
00571680  68 C8 A0 7C 00            PUSH 0x7ca0c8
00571685  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057168B  E8 40 BE 13 00            CALL 0x006ad4d0
00571690  83 C4 18                  ADD ESP,0x18
00571693  85 C0                     TEST EAX,EAX
00571695  74 01                     JZ 0x00571698
00571697  CC                        INT3
LAB_00571698:
00571698  68 14 09 00 00            PUSH 0x914
0057169D  68 C8 A0 7C 00            PUSH 0x7ca0c8
005716A2  6A 00                     PUSH 0x0
005716A4  56                        PUSH ESI
005716A5  E8 96 47 13 00            CALL 0x006a5e40
005716AA  5F                        POP EDI
005716AB  5E                        POP ESI
005716AC  5B                        POP EBX
005716AD  8B E5                     MOV ESP,EBP
005716AF  5D                        POP EBP
005716B0  C2 04 00                  RET 0x4
