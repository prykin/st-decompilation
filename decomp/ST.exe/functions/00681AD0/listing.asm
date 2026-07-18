FUN_00681ad0:
00681AD0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681AD6  8B C1                     MOV EAX,ECX
00681AD8  C1 E0 04                  SHL EAX,0x4
00681ADB  03 C1                     ADD EAX,ECX
00681ADD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681AE0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681AE3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681AE6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00681AE9  B8 01 00 00 00            MOV EAX,0x1
00681AEE  C1 E1 02                  SHL ECX,0x2
00681AF1  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
00681AF7  7D 0A                     JGE 0x00681b03
00681AF9  C7 81 80 1C 81 00 00 00 00 00  MOV dword ptr [ECX + 0x811c80],0x0
LAB_00681b03:
00681B03  83 B9 7C 1C 81 00 02      CMP dword ptr [ECX + 0x811c7c],0x2
00681B0A  7D 0A                     JGE 0x00681b16
00681B0C  C7 81 84 1C 81 00 32 00 00 00  MOV dword ptr [ECX + 0x811c84],0x32
LAB_00681b16:
00681B16  83 B9 7C 1C 81 00 03      CMP dword ptr [ECX + 0x811c7c],0x3
00681B1D  7D 0A                     JGE 0x00681b29
00681B1F  C7 81 88 1C 81 00 00 00 00 00  MOV dword ptr [ECX + 0x811c88],0x0
LAB_00681b29:
00681B29  83 B9 7C 1C 81 00 04      CMP dword ptr [ECX + 0x811c7c],0x4
00681B30  7D 06                     JGE 0x00681b38
00681B32  89 81 8C 1C 81 00         MOV dword ptr [ECX + 0x811c8c],EAX
LAB_00681b38:
00681B38  83 B9 7C 1C 81 00 05      CMP dword ptr [ECX + 0x811c7c],0x5
00681B3F  7D 0A                     JGE 0x00681b4b
00681B41  C7 81 90 1C 81 00 FF FF FF 3F  MOV dword ptr [ECX + 0x811c90],0x3fffffff
LAB_00681b4b:
00681B4B  8B 91 80 1C 81 00         MOV EDX,dword ptr [ECX + 0x811c80]
00681B51  85 D2                     TEST EDX,EDX
00681B53  7C 19                     JL 0x00681b6e
00681B55  83 FA 02                  CMP EDX,0x2
00681B58  7F 14                     JG 0x00681b6e
00681B5A  83 B9 84 1C 81 00 64      CMP dword ptr [ECX + 0x811c84],0x64
00681B61  7C 0D                     JL 0x00681b70
00681B63  C7 81 84 1C 81 00 63 00 00 00  MOV dword ptr [ECX + 0x811c84],0x63
00681B6D  C3                        RET
LAB_00681b6e:
00681B6E  33 C0                     XOR EAX,EAX
LAB_00681b70:
00681B70  C3                        RET
