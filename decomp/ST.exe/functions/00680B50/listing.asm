FUN_00680b50:
00680B50  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680B56  BA 02 00 00 00            MOV EDX,0x2
00680B5B  8B C1                     MOV EAX,ECX
00680B5D  C1 E0 04                  SHL EAX,0x4
00680B60  03 C1                     ADD EAX,ECX
00680B62  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680B65  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680B68  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680B6B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680B6E  C1 E0 02                  SHL EAX,0x2
00680B71  8A 88 C8 3B 81 00         MOV CL,byte ptr [EAX + 0x813bc8]
00680B77  3A CA                     CMP CL,DL
00680B79  74 08                     JZ 0x00680b83
00680B7B  80 F9 04                  CMP CL,0x4
00680B7E  74 03                     JZ 0x00680b83
00680B80  33 C0                     XOR EAX,EAX
00680B82  C3                        RET
LAB_00680b83:
00680B83  39 90 C4 3B 81 00         CMP dword ptr [EAX + 0x813bc4],EDX
00680B89  7D 10                     JGE 0x00680b9b
00680B8B  C7 80 84 1C 81 00 FF FF FF FF  MOV dword ptr [EAX + 0x811c84],0xffffffff
LAB_00680b95:
00680B95  B8 01 00 00 00            MOV EAX,0x1
00680B9A  C3                        RET
LAB_00680b9b:
00680B9B  38 90 C9 3B 81 00         CMP byte ptr [EAX + 0x813bc9],DL
00680BA1  74 F2                     JZ 0x00680b95
00680BA3  33 C0                     XOR EAX,EAX
00680BA5  C3                        RET
