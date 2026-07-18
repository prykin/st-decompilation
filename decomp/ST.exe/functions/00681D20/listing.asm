FUN_00681d20:
00681D20  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681D26  8B C1                     MOV EAX,ECX
00681D28  C1 E0 04                  SHL EAX,0x4
00681D2B  03 C1                     ADD EAX,ECX
00681D2D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681D30  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681D33  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681D36  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681D39  C1 E0 02                  SHL EAX,0x2
00681D3C  83 B8 E8 1A 81 00 01      CMP dword ptr [EAX + 0x811ae8],0x1
00681D43  0F 8C CF 00 00 00         JL 0x00681e18
00681D49  8B 88 7C 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c7c]
00681D4F  33 D2                     XOR EDX,EDX
00681D51  83 F9 01                  CMP ECX,0x1
00681D54  7D 06                     JGE 0x00681d5c
00681D56  89 90 80 1C 81 00         MOV dword ptr [EAX + 0x811c80],EDX
LAB_00681d5c:
00681D5C  83 B8 7C 1C 81 00 02      CMP dword ptr [EAX + 0x811c7c],0x2
00681D63  7D 0A                     JGE 0x00681d6f
00681D65  C7 80 84 1C 81 00 02 00 00 00  MOV dword ptr [EAX + 0x811c84],0x2
LAB_00681d6f:
00681D6F  83 B8 7C 1C 81 00 03      CMP dword ptr [EAX + 0x811c7c],0x3
00681D76  7D 06                     JGE 0x00681d7e
00681D78  89 90 88 1C 81 00         MOV dword ptr [EAX + 0x811c88],EDX
LAB_00681d7e:
00681D7E  83 B8 7C 1C 81 00 04      CMP dword ptr [EAX + 0x811c7c],0x4
00681D85  7D 06                     JGE 0x00681d8d
00681D87  89 90 8C 1C 81 00         MOV dword ptr [EAX + 0x811c8c],EDX
LAB_00681d8d:
00681D8D  83 B8 7C 1C 81 00 05      CMP dword ptr [EAX + 0x811c7c],0x5
00681D94  7D 06                     JGE 0x00681d9c
00681D96  89 90 90 1C 81 00         MOV dword ptr [EAX + 0x811c90],EDX
LAB_00681d9c:
00681D9C  83 B8 7C 1C 81 00 06      CMP dword ptr [EAX + 0x811c7c],0x6
00681DA3  7D 0A                     JGE 0x00681daf
00681DA5  C7 80 94 1C 81 00 20 03 00 00  MOV dword ptr [EAX + 0x811c94],0x320
LAB_00681daf:
00681DAF  83 B8 7C 1C 81 00 07      CMP dword ptr [EAX + 0x811c7c],0x7
00681DB6  7D 0A                     JGE 0x00681dc2
00681DB8  C7 80 98 1C 81 00 58 02 00 00  MOV dword ptr [EAX + 0x811c98],0x258
LAB_00681dc2:
00681DC2  83 B8 7C 1C 81 00 08      CMP dword ptr [EAX + 0x811c7c],0x8
00681DC9  7D 06                     JGE 0x00681dd1
00681DCB  89 90 9C 1C 81 00         MOV dword ptr [EAX + 0x811c9c],EDX
LAB_00681dd1:
00681DD1  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00681DD7  3B CA                     CMP ECX,EDX
00681DD9  7C 3D                     JL 0x00681e18
00681DDB  83 F9 01                  CMP ECX,0x1
00681DDE  7F 38                     JG 0x00681e18
00681DE0  8B 88 84 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c84]
00681DE6  3B CA                     CMP ECX,EDX
00681DE8  7C 2E                     JL 0x00681e18
00681DEA  83 F9 02                  CMP ECX,0x2
00681DED  7F 29                     JG 0x00681e18
00681DEF  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
00681DF5  3B CA                     CMP ECX,EDX
00681DF7  7C 1F                     JL 0x00681e18
00681DF9  83 F9 02                  CMP ECX,0x2
00681DFC  7F 1A                     JG 0x00681e18
00681DFE  39 90 94 1C 81 00         CMP dword ptr [EAX + 0x811c94],EDX
00681E04  7E 12                     JLE 0x00681e18
00681E06  56                        PUSH ESI
00681E07  8B B0 98 1C 81 00         MOV ESI,dword ptr [EAX + 0x811c98]
00681E0D  33 C9                     XOR ECX,ECX
00681E0F  3B F2                     CMP ESI,EDX
00681E11  0F 9F C1                  SETG CL
00681E14  8B C1                     MOV EAX,ECX
00681E16  5E                        POP ESI
00681E17  C3                        RET
LAB_00681e18:
00681E18  33 C0                     XOR EAX,EAX
00681E1A  C3                        RET
