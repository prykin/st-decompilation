FUN_0059a640:
0059A640  55                        PUSH EBP
0059A641  8B EC                     MOV EBP,ESP
0059A643  83 EC 48                  SUB ESP,0x48
0059A646  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059A64B  53                        PUSH EBX
0059A64C  56                        PUSH ESI
0059A64D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059A650  57                        PUSH EDI
0059A651  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059A654  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059A657  6A 00                     PUSH 0x0
0059A659  52                        PUSH EDX
0059A65A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059A65D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059A663  E8 88 31 19 00            CALL 0x0072d7f0
0059A668  8B F0                     MOV ESI,EAX
0059A66A  83 C4 08                  ADD ESP,0x8
0059A66D  85 F6                     TEST ESI,ESI
0059A66F  0F 85 BF 01 00 00         JNZ 0x0059a834
0059A675  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059A678  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A67E  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0059A681  85 DB                     TEST EBX,EBX
0059A683  75 18                     JNZ 0x0059a69d
0059A685  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0059A689  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0059A68D  83 C3 1F                  ADD EBX,0x1f
0059A690  C1 EB 03                  SHR EBX,0x3
0059A693  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0059A699  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0059a69d:
0059A69D  50                        PUSH EAX
0059A69E  E8 FD A8 11 00            CALL 0x006b4fa0
0059A6A3  8B CB                     MOV ECX,EBX
0059A6A5  8B F8                     MOV EDI,EAX
0059A6A7  8B D1                     MOV EDX,ECX
0059A6A9  83 C8 FF                  OR EAX,0xffffffff
0059A6AC  C1 E9 02                  SHR ECX,0x2
0059A6AF  F3 AB                     STOSD.REP ES:EDI
0059A6B1  8B CA                     MOV ECX,EDX
0059A6B3  6A 14                     PUSH 0x14
0059A6B5  83 E1 03                  AND ECX,0x3
0059A6B8  68 86 01 00 00            PUSH 0x186
0059A6BD  F3 AA                     STOSB.REP ES:EDI
0059A6BF  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A6C5  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A6CB  6A 48                     PUSH 0x48
0059A6CD  6A 19                     PUSH 0x19
0059A6CF  6A 00                     PUSH 0x0
0059A6D1  50                        PUSH EAX
0059A6D2  E8 B9 63 17 00            CALL 0x00710a90
0059A6D7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A6DD  6A 02                     PUSH 0x2
0059A6DF  6A FF                     PUSH -0x1
0059A6E1  6A 00                     PUSH 0x0
0059A6E3  51                        PUSH ECX
0059A6E4  68 6B 25 00 00            PUSH 0x256b
0059A6E9  E8 52 5A 11 00            CALL 0x006b0140
0059A6EE  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A6F4  50                        PUSH EAX
0059A6F5  E8 C6 72 17 00            CALL 0x007119c0
0059A6FA  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A700  6A 0D                     PUSH 0xd
0059A702  6A 0F                     PUSH 0xf
0059A704  6A 1B                     PUSH 0x1b
0059A706  68 88 01 00 00            PUSH 0x188
0059A70B  6A 5B                     PUSH 0x5b
0059A70D  6A 18                     PUSH 0x18
0059A70F  6A 00                     PUSH 0x0
0059A711  52                        PUSH EDX
0059A712  E8 C9 B7 11 00            CALL 0x006b5ee0
0059A717  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A71D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A723  6A 14                     PUSH 0x14
0059A725  68 B4 00 00 00            PUSH 0xb4
0059A72A  6A 7F                     PUSH 0x7f
0059A72C  6A 19                     PUSH 0x19
0059A72E  6A 00                     PUSH 0x0
0059A730  50                        PUSH EAX
0059A731  E8 5A 63 17 00            CALL 0x00710a90
0059A736  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A73C  6A 02                     PUSH 0x2
0059A73E  6A FF                     PUSH -0x1
0059A740  6A 00                     PUSH 0x0
0059A742  51                        PUSH ECX
0059A743  68 50 25 00 00            PUSH 0x2550
0059A748  E8 F3 59 11 00            CALL 0x006b0140
0059A74D  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A753  50                        PUSH EAX
0059A754  E8 67 72 17 00            CALL 0x007119c0
0059A759  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A75F  6A 0D                     PUSH 0xd
0059A761  6A 0F                     PUSH 0xf
0059A763  6A 16                     PUSH 0x16
0059A765  68 B6 00 00 00            PUSH 0xb6
0059A76A  68 92 00 00 00            PUSH 0x92
0059A76F  6A 18                     PUSH 0x18
0059A771  6A 00                     PUSH 0x0
0059A773  52                        PUSH EDX
0059A774  E8 67 B7 11 00            CALL 0x006b5ee0
0059A779  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A77F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A785  6A 14                     PUSH 0x14
0059A787  68 B4 00 00 00            PUSH 0xb4
0059A78C  68 B1 00 00 00            PUSH 0xb1
0059A791  6A 19                     PUSH 0x19
0059A793  6A 00                     PUSH 0x0
0059A795  50                        PUSH EAX
0059A796  E8 F5 62 17 00            CALL 0x00710a90
0059A79B  6A 02                     PUSH 0x2
0059A79D  6A FF                     PUSH -0x1
0059A79F  6A 00                     PUSH 0x0
0059A7A1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A7A7  51                        PUSH ECX
0059A7A8  68 6D 25 00 00            PUSH 0x256d
0059A7AD  E8 8E 59 11 00            CALL 0x006b0140
0059A7B2  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A7B8  50                        PUSH EAX
0059A7B9  E8 02 72 17 00            CALL 0x007119c0
0059A7BE  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A7C4  6A 0F                     PUSH 0xf
0059A7C6  6A 04                     PUSH 0x4
0059A7C8  6A 19                     PUSH 0x19
0059A7CA  68 86 01 00 00            PUSH 0x186
0059A7CF  68 C5 00 00 00            PUSH 0xc5
0059A7D4  6A 19                     PUSH 0x19
0059A7D6  6A 00                     PUSH 0x0
0059A7D8  52                        PUSH EDX
0059A7D9  E8 92 CD 12 00            CALL 0x006c7570
0059A7DE  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A7E4  6A 0F                     PUSH 0xf
0059A7E6  6A 04                     PUSH 0x4
0059A7E8  6A 15                     PUSH 0x15
0059A7EA  68 82 01 00 00            PUSH 0x182
0059A7EF  68 C7 00 00 00            PUSH 0xc7
0059A7F4  6A 1B                     PUSH 0x1b
0059A7F6  6A 00                     PUSH 0x0
0059A7F8  50                        PUSH EAX
0059A7F9  E8 72 CD 12 00            CALL 0x006c7570
0059A7FE  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
0059A804  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059A80A  51                        PUSH ECX
0059A80B  52                        PUSH EDX
0059A80C  E8 1F 8C 11 00            CALL 0x006b3430
0059A811  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
0059A817  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059A81D  50                        PUSH EAX
0059A81E  51                        PUSH ECX
0059A81F  E8 AC 8D 11 00            CALL 0x006b35d0
0059A824  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059A827  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059A82D  5F                        POP EDI
0059A82E  5E                        POP ESI
0059A82F  5B                        POP EBX
0059A830  8B E5                     MOV ESP,EBP
0059A832  5D                        POP EBP
0059A833  C3                        RET
LAB_0059a834:
0059A834  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059A837  68 30 C2 7C 00            PUSH 0x7cc230
0059A83C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059A841  56                        PUSH ESI
0059A842  6A 00                     PUSH 0x0
0059A844  68 18 04 00 00            PUSH 0x418
0059A849  68 70 BF 7C 00            PUSH 0x7cbf70
0059A84E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059A853  E8 78 2C 11 00            CALL 0x006ad4d0
0059A858  83 C4 18                  ADD ESP,0x18
0059A85B  85 C0                     TEST EAX,EAX
0059A85D  74 01                     JZ 0x0059a860
0059A85F  CC                        INT3
LAB_0059a860:
0059A860  68 18 04 00 00            PUSH 0x418
0059A865  68 70 BF 7C 00            PUSH 0x7cbf70
0059A86A  6A 00                     PUSH 0x0
0059A86C  56                        PUSH ESI
0059A86D  E8 CE B5 10 00            CALL 0x006a5e40
0059A872  5F                        POP EDI
0059A873  5E                        POP ESI
0059A874  5B                        POP EBX
0059A875  8B E5                     MOV ESP,EBP
0059A877  5D                        POP EBP
0059A878  C3                        RET
