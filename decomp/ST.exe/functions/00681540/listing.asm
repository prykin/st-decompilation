FUN_00681540:
00681540  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681546  33 D2                     XOR EDX,EDX
00681548  8B C1                     MOV EAX,ECX
0068154A  C1 E0 04                  SHL EAX,0x4
0068154D  03 C1                     ADD EAX,ECX
0068154F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681552  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681555  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681558  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0068155B  C1 E0 02                  SHL EAX,0x2
0068155E  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
00681565  7D 06                     JGE 0x0068156d
00681567  89 90 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],EDX
LAB_0068156d:
0068156D  83 B8 7C 1C 81 00 02      CMP dword ptr [EAX + 0x811c7c],0x2
00681574  7D 06                     JGE 0x0068157c
00681576  89 90 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],EDX
LAB_0068157c:
0068157C  83 B8 7C 1C 81 00 03      CMP dword ptr [EAX + 0x811c7c],0x3
00681583  7D 06                     JGE 0x0068158b
00681585  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_0068158b:
0068158B  83 B8 7C 1C 81 00 04      CMP dword ptr [EAX + 0x811c7c],0x4
00681592  7D 06                     JGE 0x0068159a
00681594  89 90 8C 1C 81 00         MOV dword ptr [EAX + 0x811c8c],EDX
LAB_0068159a:
0068159A  83 B8 7C 1C 81 00 05      CMP dword ptr [EAX + 0x811c7c],0x5
006815A1  7D 06                     JGE 0x006815a9
006815A3  89 90 90 1C 81 00         MOV dword ptr [EAX + 0x811c90],EDX
LAB_006815a9:
006815A9  83 B8 7C 1C 81 00 06      CMP dword ptr [EAX + 0x811c7c],0x6
006815B0  7D 06                     JGE 0x006815b8
006815B2  89 90 94 1C 81 00         MOV dword ptr [EAX + 0x811c94],EDX
LAB_006815b8:
006815B8  83 B8 7C 1C 81 00 07      CMP dword ptr [EAX + 0x811c7c],0x7
006815BF  7D 06                     JGE 0x006815c7
006815C1  89 90 98 1C 81 00         MOV dword ptr [EAX + 0x811c98],EDX
LAB_006815c7:
006815C7  83 B8 7C 1C 81 00 08      CMP dword ptr [EAX + 0x811c7c],0x8
006815CE  7D 06                     JGE 0x006815d6
006815D0  89 90 9C 1C 81 00         MOV dword ptr [EAX + 0x811c9c],EDX
LAB_006815d6:
006815D6  39 90 80 1C 81 00         CMP dword ptr [EAX + 0x811c80],EDX
006815DC  7D 06                     JGE 0x006815e4
006815DE  89 90 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],EDX
LAB_006815e4:
006815E4  39 90 84 1C 81 00         CMP dword ptr [EAX + 0x811c84],EDX
006815EA  7D 06                     JGE 0x006815f2
006815EC  89 90 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],EDX
LAB_006815f2:
006815F2  39 90 88 1C 81 00         CMP dword ptr [EAX + 0x811c88],EDX
006815F8  7D 06                     JGE 0x00681600
006815FA  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_00681600:
00681600  8B 88 94 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c94]
00681606  3B CA                     CMP ECX,EDX
00681608  7C 1A                     JL 0x00681624
0068160A  83 F9 05                  CMP ECX,0x5
0068160D  7F 15                     JG 0x00681624
0068160F  8B 80 98 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c98]
00681615  3B C2                     CMP EAX,EDX
00681617  7C 0B                     JL 0x00681624
00681619  83 F8 09                  CMP EAX,0x9
0068161C  7F 06                     JG 0x00681624
0068161E  B8 01 00 00 00            MOV EAX,0x1
00681623  C3                        RET
LAB_00681624:
00681624  33 C0                     XOR EAX,EAX
00681626  C3                        RET
