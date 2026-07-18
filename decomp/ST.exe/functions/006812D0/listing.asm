FUN_006812d0:
006812D0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
006812D6  33 D2                     XOR EDX,EDX
006812D8  8B C1                     MOV EAX,ECX
006812DA  C1 E0 04                  SHL EAX,0x4
006812DD  03 C1                     ADD EAX,ECX
006812DF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006812E2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006812E5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006812E8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006812EB  C1 E0 02                  SHL EAX,0x2
006812EE  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
006812F5  7D 06                     JGE 0x006812fd
006812F7  89 90 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],EDX
LAB_006812fd:
006812FD  56                        PUSH ESI
006812FE  8B B0 7C 1C 81 00         MOV ESI,dword ptr [EAX + 0x811c7c]
00681304  83 C9 FF                  OR ECX,0xffffffff
00681307  83 FE 02                  CMP ESI,0x2
0068130A  7D 06                     JGE 0x00681312
0068130C  89 88 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],ECX
LAB_00681312:
00681312  83 B8 7C 1C 81 00 03      CMP dword ptr [EAX + 0x811c7c],0x3
00681319  7D 06                     JGE 0x00681321
0068131B  89 88 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],ECX
LAB_00681321:
00681321  8B B0 7C 1C 81 00         MOV ESI,dword ptr [EAX + 0x811c7c]
00681327  83 FE 04                  CMP ESI,0x4
0068132A  5E                        POP ESI
0068132B  7D 06                     JGE 0x00681333
0068132D  89 88 8C 1C 81 00         MOV dword ptr [EAX + 0x811c8c],ECX
LAB_00681333:
00681333  83 B8 7C 1C 81 00 05      CMP dword ptr [EAX + 0x811c7c],0x5
0068133A  7D 06                     JGE 0x00681342
0068133C  89 90 90 1C 81 00         MOV dword ptr [EAX + 0x811c90],EDX
LAB_00681342:
00681342  83 B8 7C 1C 81 00 06      CMP dword ptr [EAX + 0x811c7c],0x6
00681349  7D 06                     JGE 0x00681351
0068134B  89 90 94 1C 81 00         MOV dword ptr [EAX + 0x811c94],EDX
LAB_00681351:
00681351  83 B8 7C 1C 81 00 07      CMP dword ptr [EAX + 0x811c7c],0x7
00681358  7D 06                     JGE 0x00681360
0068135A  89 90 98 1C 81 00         MOV dword ptr [EAX + 0x811c98],EDX
LAB_00681360:
00681360  83 B8 7C 1C 81 00 08      CMP dword ptr [EAX + 0x811c7c],0x8
00681367  7D 06                     JGE 0x0068136f
00681369  89 90 9C 1C 81 00         MOV dword ptr [EAX + 0x811c9c],EDX
LAB_0068136f:
0068136F  83 B8 7C 1C 81 00 09      CMP dword ptr [EAX + 0x811c7c],0x9
00681376  7D 06                     JGE 0x0068137e
00681378  89 90 A0 1C 81 00         MOV dword ptr [EAX + 0x811ca0],EDX
LAB_0068137e:
0068137E  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00681384  3B CA                     CMP ECX,EDX
00681386  7C 29                     JL 0x006813b1
00681388  83 F9 02                  CMP ECX,0x2
0068138B  7F 24                     JG 0x006813b1
0068138D  8B 88 98 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c98]
00681393  3B CA                     CMP ECX,EDX
00681395  7C 1A                     JL 0x006813b1
00681397  83 F9 05                  CMP ECX,0x5
0068139A  7F 15                     JG 0x006813b1
0068139C  8B 80 9C 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c9c]
006813A2  3B C2                     CMP EAX,EDX
006813A4  7C 0B                     JL 0x006813b1
006813A6  83 F8 09                  CMP EAX,0x9
006813A9  7F 06                     JG 0x006813b1
006813AB  B8 01 00 00 00            MOV EAX,0x1
006813B0  C3                        RET
LAB_006813b1:
006813B1  33 C0                     XOR EAX,EAX
006813B3  C3                        RET
