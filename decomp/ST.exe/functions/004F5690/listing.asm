FUN_004f5690:
004F5690  55                        PUSH EBP
004F5691  8B EC                     MOV EBP,ESP
004F5693  83 EC 74                  SUB ESP,0x74
004F5696  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F569B  53                        PUSH EBX
004F569C  56                        PUSH ESI
004F569D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004F56A0  57                        PUSH EDI
004F56A1  8D 55 90                  LEA EDX,[EBP + -0x70]
004F56A4  8D 4D 8C                  LEA ECX,[EBP + -0x74]
004F56A7  6A 00                     PUSH 0x0
004F56A9  52                        PUSH EDX
004F56AA  C6 45 E0 E0               MOV byte ptr [EBP + -0x20],0xe0
004F56AE  C6 45 E1 E2               MOV byte ptr [EBP + -0x1f],0xe2
004F56B2  C6 45 E2 E4               MOV byte ptr [EBP + -0x1e],0xe4
004F56B6  C6 45 E3 E6               MOV byte ptr [EBP + -0x1d],0xe6
004F56BA  C6 45 E4 E8               MOV byte ptr [EBP + -0x1c],0xe8
004F56BE  C6 45 E5 EA               MOV byte ptr [EBP + -0x1b],0xea
004F56C2  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004F56C5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F56CB  E8 20 81 23 00            CALL 0x0072d7f0
004F56D0  8B F0                     MOV ESI,EAX
004F56D2  83 C4 08                  ADD ESP,0x8
004F56D5  85 F6                     TEST ESI,ESI
004F56D7  0F 85 27 1A 00 00         JNZ 0x004f7104
004F56DD  A1 48 73 80 00            MOV EAX,[0x00807348]
004F56E2  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004F56E5  84 C0                     TEST AL,AL
004F56E7  89 35 88 16 80 00         MOV dword ptr [0x00801688],ESI
004F56ED  74 10                     JZ 0x004f56ff
004F56EF  FE C8                     DEC AL
004F56F1  F6 D8                     NEG AL
004F56F3  1B C0                     SBB EAX,EAX
004F56F5  25 80 00 00 00            AND EAX,0x80
004F56FA  83 C0 70                  ADD EAX,0x70
004F56FD  EB 02                     JMP 0x004f5701
LAB_004f56ff:
004F56FF  33 C0                     XOR EAX,EAX
LAB_004f5701:
004F5701  8D 7E 68                  LEA EDI,[ESI + 0x68]
004F5704  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
004F570A  89 86 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EAX
004F5710  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004F5713  C7 45 F4 0B 00 00 00      MOV dword ptr [EBP + -0xc],0xb
004F571A  EB 03                     JMP 0x004f571f
LAB_004f571c:
004F571C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_004f571f:
004F571F  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F5724  6A 01                     PUSH 0x1
004F5726  8D 48 28                  LEA ECX,[EAX + 0x28]
004F5729  51                        PUSH ECX
004F572A  50                        PUSH EAX
004F572B  E8 B0 F8 1B 00            CALL 0x006b4fe0
004F5730  8B 4F 58                  MOV ECX,dword ptr [EDI + 0x58]
004F5733  50                        PUSH EAX
004F5734  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F5739  33 D2                     XOR EDX,EDX
004F573B  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
004F573F  52                        PUSH EDX
004F5740  8B 17                     MOV EDX,dword ptr [EDI]
004F5742  51                        PUSH ECX
004F5743  52                        PUSH EDX
004F5744  E8 77 F9 1B 00            CALL 0x006b50c0
004F5749  89 87 18 01 00 00         MOV dword ptr [EDI + 0x118],EAX
004F574F  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
004F5752  85 DB                     TEST EBX,EBX
004F5754  75 18                     JNZ 0x004f576e
004F5756  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
004F575A  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
004F575E  83 C3 1F                  ADD EBX,0x1f
004F5761  C1 EB 03                  SHR EBX,0x3
004F5764  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
004F576A  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_004f576e:
004F576E  50                        PUSH EAX
004F576F  E8 2C F8 1B 00            CALL 0x006b4fa0
004F5774  8B CB                     MOV ECX,EBX
004F5776  8B F8                     MOV EDI,EAX
004F5778  8B D1                     MOV EDX,ECX
004F577A  B8 3A 3A 3A 3A            MOV EAX,0x3a3a3a3a
004F577F  C1 E9 02                  SHR ECX,0x2
004F5782  F3 AB                     STOSD.REP ES:EDI
004F5784  8B CA                     MOV ECX,EDX
004F5786  83 E1 03                  AND ECX,0x3
004F5789  F3 AA                     STOSB.REP ES:EDI
004F578B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004F578E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F5791  83 C1 04                  ADD ECX,0x4
004F5794  48                        DEC EAX
004F5795  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F5798  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F579B  0F 85 7B FF FF FF         JNZ 0x004f571c
004F57A1  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
004F57A6  8B 0D 9C 67 80 00         MOV ECX,dword ptr [0x0080679c]
004F57AC  33 DB                     XOR EBX,EBX
004F57AE  50                        PUSH EAX
004F57AF  53                        PUSH EBX
004F57B0  51                        PUSH ECX
004F57B1  E8 60 F2 F0 FF            CALL 0x00404a16
004F57B6  BF 01 00 00 00            MOV EDI,0x1
004F57BB  89 86 B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EAX
004F57C1  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
004F57C4  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F57C7  8B 96 B8 01 00 00         MOV EDX,dword ptr [ESI + 0x1b8]
004F57CD  53                        PUSH EBX
004F57CE  68 2C 21 7C 00            PUSH 0x7c212c
004F57D3  89 BA 96 00 00 00         MOV dword ptr [EDX + 0x96],EDI
004F57D9  A1 90 67 80 00            MOV EAX,[0x00806790]
004F57DE  50                        PUSH EAX
004F57DF  68 9D 01 00 00            PUSH 0x19d
004F57E4  E8 C7 76 21 00            CALL 0x0070ceb0
004F57E9  89 86 BC 01 00 00         MOV dword ptr [ESI + 0x1bc],EAX
004F57EF  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
004F57F2  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F57F5  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F57FB  53                        PUSH EBX
004F57FC  68 44 18 7C 00            PUSH 0x7c1844
004F5801  51                        PUSH ECX
004F5802  68 9D 01 00 00            PUSH 0x19d
004F5807  E8 A4 76 21 00            CALL 0x0070ceb0
004F580C  89 86 C0 01 00 00         MOV dword ptr [ESI + 0x1c0],EAX
004F5812  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
004F5815  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F5818  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
004F581E  53                        PUSH EBX
004F581F  68 1C 21 7C 00            PUSH 0x7c211c
004F5824  52                        PUSH EDX
004F5825  68 9D 01 00 00            PUSH 0x19d
004F582A  E8 81 76 21 00            CALL 0x0070ceb0
004F582F  89 86 C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EAX
004F5835  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
004F5838  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F583B  A1 90 67 80 00            MOV EAX,[0x00806790]
004F5840  53                        PUSH EBX
004F5841  68 0C 21 7C 00            PUSH 0x7c210c
004F5846  50                        PUSH EAX
004F5847  68 9D 01 00 00            PUSH 0x19d
004F584C  E8 5F 76 21 00            CALL 0x0070ceb0
004F5851  83 C4 4C                  ADD ESP,0x4c
004F5854  89 86 CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EAX
004F585A  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
004F585D  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F5860  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5866  53                        PUSH EBX
004F5867  68 44 18 7C 00            PUSH 0x7c1844
004F586C  51                        PUSH ECX
004F586D  68 9D 01 00 00            PUSH 0x19d
004F5872  E8 39 76 21 00            CALL 0x0070ceb0
004F5877  89 86 C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EAX
004F587D  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
004F5880  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F5883  8A 15 D9 7D 80 00         MOV DL,byte ptr [0x00807dd9]
004F5889  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F588E  52                        PUSH EDX
004F588F  53                        PUSH EBX
004F5890  50                        PUSH EAX
004F5891  E8 AF E0 F0 FF            CALL 0x00403945
004F5896  89 86 D0 01 00 00         MOV dword ptr [ESI + 0x1d0],EAX
004F589C  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
004F589F  C7 40 5C FF FF FF FF      MOV dword ptr [EAX + 0x5c],0xffffffff
004F58A6  8B 86 D0 01 00 00         MOV EAX,dword ptr [ESI + 0x1d0]
004F58AC  83 C4 1C                  ADD ESP,0x1c
004F58AF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F58B2  39 98 A0 00 00 00         CMP dword ptr [EAX + 0xa0],EBX
004F58B8  74 0B                     JZ 0x004f58c5
004F58BA  8B C8                     MOV ECX,EAX
004F58BC  51                        PUSH ECX
004F58BD  E8 CE AE 21 00            CALL 0x00710790
004F58C2  83 C4 04                  ADD ESP,0x4
LAB_004f58c5:
004F58C5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F58C8  8B 82 8A 00 00 00         MOV EAX,dword ptr [EDX + 0x8a]
004F58CE  8D 44 80 FD               LEA EAX,[EAX + EAX*0x4 + -0x3]
004F58D2  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
004F58D8  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
004F58DE  8B 15 9C 67 80 00         MOV EDX,dword ptr [0x0080679c]
004F58E4  51                        PUSH ECX
004F58E5  53                        PUSH EBX
004F58E6  52                        PUSH EDX
004F58E7  E8 1E D0 F0 FF            CALL 0x0040290a
004F58EC  83 C4 0C                  ADD ESP,0xc
004F58EF  89 86 D4 01 00 00         MOV dword ptr [ESI + 0x1d4],EAX
004F58F5  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
004F58F8  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
004F58FB  57                        PUSH EDI
004F58FC  6A 02                     PUSH 0x2
004F58FE  53                        PUSH EBX
004F58FF  68 00 21 7C 00            PUSH 0x7c2100
004F5904  E8 73 FE F0 FF            CALL 0x0040577c
004F5909  83 C4 08                  ADD ESP,0x8
004F590C  50                        PUSH EAX
004F590D  A1 90 67 80 00            MOV EAX,[0x00806790]
004F5912  50                        PUSH EAX
004F5913  E8 D8 50 21 00            CALL 0x0070a9f0
004F5918  83 C4 10                  ADD ESP,0x10
004F591B  89 86 AC 01 00 00         MOV dword ptr [ESI + 0x1ac],EAX
004F5921  8B 8E CC 01 00 00         MOV ECX,dword ptr [ESI + 0x1cc]
004F5927  53                        PUSH EBX
004F5928  53                        PUSH EBX
004F5929  53                        PUSH EBX
004F592A  53                        PUSH EBX
004F592B  53                        PUSH EBX
004F592C  50                        PUSH EAX
004F592D  E8 5E B1 21 00            CALL 0x00710a90
004F5932  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F5937  57                        PUSH EDI
004F5938  8D 48 28                  LEA ECX,[EAX + 0x28]
004F593B  51                        PUSH ECX
004F593C  50                        PUSH EAX
004F593D  E8 9E F6 1B 00            CALL 0x006b4fe0
004F5942  8B 8E 08 01 00 00         MOV ECX,dword ptr [ESI + 0x108]
004F5948  50                        PUSH EAX
004F5949  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F594E  33 D2                     XOR EDX,EDX
004F5950  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
004F5954  52                        PUSH EDX
004F5955  8B 96 04 01 00 00         MOV EDX,dword ptr [ESI + 0x104]
004F595B  51                        PUSH ECX
004F595C  52                        PUSH EDX
004F595D  E8 5E F7 1B 00            CALL 0x006b50c0
004F5962  89 86 B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EAX
004F5968  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004F596B  3B CB                     CMP ECX,EBX
004F596D  75 1A                     JNZ 0x004f5989
004F596F  33 C9                     XOR ECX,ECX
004F5971  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
004F5975  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
004F5979  83 C1 1F                  ADD ECX,0x1f
004F597C  C1 E9 03                  SHR ECX,0x3
004F597F  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
004F5985  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_004f5989:
004F5989  50                        PUSH EAX
004F598A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F598D  E8 0E F6 1B 00            CALL 0x006b4fa0
004F5992  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F5995  8B F8                     MOV EDI,EAX
004F5997  8B D1                     MOV EDX,ECX
004F5999  83 C8 FF                  OR EAX,0xffffffff
004F599C  C1 E9 02                  SHR ECX,0x2
004F599F  F3 AB                     STOSD.REP ES:EDI
004F59A1  8B CA                     MOV ECX,EDX
004F59A3  53                        PUSH EBX
004F59A4  83 E1 03                  AND ECX,0x3
004F59A7  53                        PUSH EBX
004F59A8  F3 AA                     STOSB.REP ES:EDI
004F59AA  8B 86 B0 01 00 00         MOV EAX,dword ptr [ESI + 0x1b0]
004F59B0  8B 8E D0 01 00 00         MOV ECX,dword ptr [ESI + 0x1d0]
004F59B6  53                        PUSH EBX
004F59B7  53                        PUSH EBX
004F59B8  53                        PUSH EBX
004F59B9  50                        PUSH EAX
004F59BA  E8 D1 B0 21 00            CALL 0x00710a90
004F59BF  6A 01                     PUSH 0x1
004F59C1  6A 02                     PUSH 0x2
004F59C3  53                        PUSH EBX
004F59C4  68 F4 20 7C 00            PUSH 0x7c20f4
004F59C9  E8 AE FD F0 FF            CALL 0x0040577c
004F59CE  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F59D4  83 C4 08                  ADD ESP,0x8
004F59D7  50                        PUSH EAX
004F59D8  51                        PUSH ECX
004F59D9  E8 12 50 21 00            CALL 0x0070a9f0
004F59DE  83 C4 10                  ADD ESP,0x10
004F59E1  89 86 B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EAX
004F59E7  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F59ED  6A 01                     PUSH 0x1
004F59EF  53                        PUSH EBX
004F59F0  68 E4 20 7C 00            PUSH 0x7c20e4
004F59F5  6A 01                     PUSH 0x1
004F59F7  E8 E4 C2 1F 00            CALL 0x006f1ce0
004F59FC  6A 01                     PUSH 0x1
004F59FE  53                        PUSH EBX
004F59FF  89 86 86 02 00 00         MOV dword ptr [ESI + 0x286],EAX
004F5A05  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5A0B  68 D4 20 7C 00            PUSH 0x7c20d4
004F5A10  6A 01                     PUSH 0x1
004F5A12  E8 C9 C2 1F 00            CALL 0x006f1ce0
004F5A17  53                        PUSH EBX
004F5A18  53                        PUSH EBX
004F5A19  6A 01                     PUSH 0x1
004F5A1B  53                        PUSH EBX
004F5A1C  89 86 8A 02 00 00         MOV dword ptr [ESI + 0x28a],EAX
004F5A22  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5A28  6A FF                     PUSH -0x1
004F5A2A  68 C8 20 7C 00            PUSH 0x7c20c8
004F5A2F  6A 0B                     PUSH 0xb
004F5A31  52                        PUSH EDX
004F5A32  E8 B9 40 21 00            CALL 0x00709af0
004F5A37  53                        PUSH EBX
004F5A38  53                        PUSH EBX
004F5A39  6A 01                     PUSH 0x1
004F5A3B  53                        PUSH EBX
004F5A3C  89 86 B2 02 00 00         MOV dword ptr [ESI + 0x2b2],EAX
004F5A42  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5A47  6A FF                     PUSH -0x1
004F5A49  68 BC 20 7C 00            PUSH 0x7c20bc
004F5A4E  6A 0B                     PUSH 0xb
004F5A50  50                        PUSH EAX
004F5A51  E8 9A 40 21 00            CALL 0x00709af0
004F5A56  83 C4 40                  ADD ESP,0x40
004F5A59  89 86 8E 02 00 00         MOV dword ptr [ESI + 0x28e],EAX
004F5A5F  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F5A65  53                        PUSH EBX
004F5A66  53                        PUSH EBX
004F5A67  6A 01                     PUSH 0x1
004F5A69  53                        PUSH EBX
004F5A6A  6A FF                     PUSH -0x1
004F5A6C  68 B0 20 7C 00            PUSH 0x7c20b0
004F5A71  6A 0B                     PUSH 0xb
004F5A73  51                        PUSH ECX
004F5A74  E8 77 40 21 00            CALL 0x00709af0
004F5A79  89 86 92 02 00 00         MOV dword ptr [ESI + 0x292],EAX
004F5A7F  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5A85  53                        PUSH EBX
004F5A86  53                        PUSH EBX
004F5A87  6A 01                     PUSH 0x1
004F5A89  53                        PUSH EBX
004F5A8A  6A FF                     PUSH -0x1
004F5A8C  68 A4 20 7C 00            PUSH 0x7c20a4
004F5A91  6A 0B                     PUSH 0xb
004F5A93  52                        PUSH EDX
004F5A94  E8 57 40 21 00            CALL 0x00709af0
004F5A99  83 C4 40                  ADD ESP,0x40
004F5A9C  89 86 96 02 00 00         MOV dword ptr [ESI + 0x296],EAX
004F5AA2  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5AA7  53                        PUSH EBX
004F5AA8  53                        PUSH EBX
004F5AA9  6A 01                     PUSH 0x1
004F5AAB  53                        PUSH EBX
004F5AAC  6A FF                     PUSH -0x1
004F5AAE  68 A0 20 7C 00            PUSH 0x7c20a0
004F5AB3  6A 0B                     PUSH 0xb
004F5AB5  50                        PUSH EAX
004F5AB6  E8 35 40 21 00            CALL 0x00709af0
004F5ABB  89 86 9A 02 00 00         MOV dword ptr [ESI + 0x29a],EAX
004F5AC1  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F5AC6  83 C4 20                  ADD ESP,0x20
004F5AC9  3C 03                     CMP AL,0x3
004F5ACB  74 2D                     JZ 0x004f5afa
004F5ACD  53                        PUSH EBX
004F5ACE  53                        PUSH EBX
004F5ACF  6A 01                     PUSH 0x1
004F5AD1  53                        PUSH EBX
004F5AD2  6A FF                     PUSH -0x1
004F5AD4  53                        PUSH EBX
004F5AD5  68 90 20 7C 00            PUSH 0x7c2090
004F5ADA  E8 9D FC F0 FF            CALL 0x0040577c
004F5ADF  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F5AE5  83 C4 08                  ADD ESP,0x8
004F5AE8  50                        PUSH EAX
004F5AE9  6A 0B                     PUSH 0xb
004F5AEB  51                        PUSH ECX
004F5AEC  E8 FF 3F 21 00            CALL 0x00709af0
004F5AF1  83 C4 20                  ADD ESP,0x20
004F5AF4  89 86 9E 02 00 00         MOV dword ptr [ESI + 0x29e],EAX
LAB_004f5afa:
004F5AFA  53                        PUSH EBX
004F5AFB  53                        PUSH EBX
004F5AFC  6A 01                     PUSH 0x1
004F5AFE  53                        PUSH EBX
004F5AFF  6A FF                     PUSH -0x1
004F5B01  53                        PUSH EBX
004F5B02  68 84 20 7C 00            PUSH 0x7c2084
004F5B07  E8 70 FC F0 FF            CALL 0x0040577c
004F5B0C  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5B12  83 C4 08                  ADD ESP,0x8
004F5B15  50                        PUSH EAX
004F5B16  6A 0B                     PUSH 0xb
004F5B18  52                        PUSH EDX
004F5B19  E8 D2 3F 21 00            CALL 0x00709af0
004F5B1E  83 C4 20                  ADD ESP,0x20
004F5B21  89 86 A2 02 00 00         MOV dword ptr [ESI + 0x2a2],EAX
004F5B27  53                        PUSH EBX
004F5B28  53                        PUSH EBX
004F5B29  6A 01                     PUSH 0x1
004F5B2B  53                        PUSH EBX
004F5B2C  6A FF                     PUSH -0x1
004F5B2E  53                        PUSH EBX
004F5B2F  68 78 20 7C 00            PUSH 0x7c2078
004F5B34  E8 43 FC F0 FF            CALL 0x0040577c
004F5B39  83 C4 08                  ADD ESP,0x8
004F5B3C  50                        PUSH EAX
004F5B3D  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5B42  6A 0B                     PUSH 0xb
004F5B44  50                        PUSH EAX
004F5B45  E8 A6 3F 21 00            CALL 0x00709af0
004F5B4A  89 86 B6 02 00 00         MOV dword ptr [ESI + 0x2b6],EAX
004F5B50  A0 4D 87 80 00            MOV AL,[0x0080874d]
004F5B55  83 C4 20                  ADD ESP,0x20
004F5B58  3C FF                     CMP AL,0xff
004F5B5A  8D BE E1 01 00 00         LEA EDI,[ESI + 0x1e1]
004F5B60  74 08                     JZ 0x004f5b6a
004F5B62  33 C9                     XOR ECX,ECX
004F5B64  8A C8                     MOV CL,AL
004F5B66  41                        INC ECX
004F5B67  51                        PUSH ECX
004F5B68  EB 02                     JMP 0x004f5b6c
LAB_004f5b6a:
004F5B6A  6A 01                     PUSH 0x1
LAB_004f5b6c:
004F5B6C  68 10 18 7C 00            PUSH 0x7c1810
004F5B71  57                        PUSH EDI
004F5B72  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F5B78  83 C4 0C                  ADD ESP,0xc
004F5B7B  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5B81  53                        PUSH EBX
004F5B82  53                        PUSH EBX
004F5B83  6A 01                     PUSH 0x1
004F5B85  53                        PUSH EBX
004F5B86  6A FF                     PUSH -0x1
004F5B88  57                        PUSH EDI
004F5B89  6A 0B                     PUSH 0xb
004F5B8B  52                        PUSH EDX
004F5B8C  E8 5F 3F 21 00            CALL 0x00709af0
004F5B91  53                        PUSH EBX
004F5B92  53                        PUSH EBX
004F5B93  6A 01                     PUSH 0x1
004F5B95  53                        PUSH EBX
004F5B96  89 86 BA 02 00 00         MOV dword ptr [ESI + 0x2ba],EAX
004F5B9C  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5BA1  6A FF                     PUSH -0x1
004F5BA3  68 6C 20 7C 00            PUSH 0x7c206c
004F5BA8  6A 0B                     PUSH 0xb
004F5BAA  50                        PUSH EAX
004F5BAB  E8 40 3F 21 00            CALL 0x00709af0
004F5BB0  83 C4 40                  ADD ESP,0x40
004F5BB3  89 86 BE 02 00 00         MOV dword ptr [ESI + 0x2be],EAX
004F5BB9  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F5BBF  53                        PUSH EBX
004F5BC0  53                        PUSH EBX
004F5BC1  6A 01                     PUSH 0x1
004F5BC3  53                        PUSH EBX
004F5BC4  6A FF                     PUSH -0x1
004F5BC6  68 10 19 7C 00            PUSH 0x7c1910
004F5BCB  6A 0B                     PUSH 0xb
004F5BCD  51                        PUSH ECX
004F5BCE  E8 1D 3F 21 00            CALL 0x00709af0
004F5BD3  53                        PUSH EBX
004F5BD4  53                        PUSH EBX
004F5BD5  6A 01                     PUSH 0x1
004F5BD7  53                        PUSH EBX
004F5BD8  89 86 C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EAX
004F5BDE  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5BE4  6A FF                     PUSH -0x1
004F5BE6  68 64 20 7C 00            PUSH 0x7c2064
004F5BEB  6A 0B                     PUSH 0xb
004F5BED  52                        PUSH EDX
004F5BEE  E8 FD 3E 21 00            CALL 0x00709af0
004F5BF3  83 C4 40                  ADD ESP,0x40
004F5BF6  89 86 C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EAX
004F5BFC  53                        PUSH EBX
004F5BFD  53                        PUSH EBX
004F5BFE  6A 01                     PUSH 0x1
004F5C00  53                        PUSH EBX
004F5C01  6A FF                     PUSH -0x1
004F5C03  53                        PUSH EBX
004F5C04  68 5C 20 7C 00            PUSH 0x7c205c
004F5C09  E8 6E FB F0 FF            CALL 0x0040577c
004F5C0E  83 C4 08                  ADD ESP,0x8
004F5C11  50                        PUSH EAX
004F5C12  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5C17  6A 0B                     PUSH 0xb
004F5C19  50                        PUSH EAX
004F5C1A  E8 D1 3E 21 00            CALL 0x00709af0
004F5C1F  53                        PUSH EBX
004F5C20  53                        PUSH EBX
004F5C21  6A 01                     PUSH 0x1
004F5C23  53                        PUSH EBX
004F5C24  89 86 CA 02 00 00         MOV dword ptr [ESI + 0x2ca],EAX
004F5C2A  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F5C30  6A FF                     PUSH -0x1
004F5C32  68 50 20 7C 00            PUSH 0x7c2050
004F5C37  6A 0B                     PUSH 0xb
004F5C39  51                        PUSH ECX
004F5C3A  E8 B1 3E 21 00            CALL 0x00709af0
004F5C3F  83 C4 40                  ADD ESP,0x40
004F5C42  89 86 CE 02 00 00         MOV dword ptr [ESI + 0x2ce],EAX
004F5C48  53                        PUSH EBX
004F5C49  53                        PUSH EBX
004F5C4A  6A 01                     PUSH 0x1
004F5C4C  53                        PUSH EBX
004F5C4D  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5C53  6A FF                     PUSH -0x1
004F5C55  68 4C 20 7C 00            PUSH 0x7c204c
004F5C5A  6A 0B                     PUSH 0xb
004F5C5C  52                        PUSH EDX
004F5C5D  E8 8E 3E 21 00            CALL 0x00709af0
004F5C62  53                        PUSH EBX
004F5C63  53                        PUSH EBX
004F5C64  6A 01                     PUSH 0x1
004F5C66  53                        PUSH EBX
004F5C67  89 86 D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EAX
004F5C6D  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5C72  6A FF                     PUSH -0x1
004F5C74  68 48 20 7C 00            PUSH 0x7c2048
004F5C79  6A 0B                     PUSH 0xb
004F5C7B  50                        PUSH EAX
004F5C7C  E8 6F 3E 21 00            CALL 0x00709af0
004F5C81  83 C4 40                  ADD ESP,0x40
004F5C84  89 86 D6 02 00 00         MOV dword ptr [ESI + 0x2d6],EAX
004F5C8A  53                        PUSH EBX
004F5C8B  53                        PUSH EBX
004F5C8C  6A 01                     PUSH 0x1
004F5C8E  53                        PUSH EBX
004F5C8F  6A FF                     PUSH -0x1
004F5C91  53                        PUSH EBX
004F5C92  68 38 20 7C 00            PUSH 0x7c2038
004F5C97  E8 E0 FA F0 FF            CALL 0x0040577c
004F5C9C  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F5CA2  83 C4 08                  ADD ESP,0x8
004F5CA5  50                        PUSH EAX
004F5CA6  6A 0B                     PUSH 0xb
004F5CA8  51                        PUSH ECX
004F5CA9  E8 42 3E 21 00            CALL 0x00709af0
004F5CAE  53                        PUSH EBX
004F5CAF  53                        PUSH EBX
004F5CB0  6A 01                     PUSH 0x1
004F5CB2  53                        PUSH EBX
004F5CB3  89 86 17 0B 00 00         MOV dword ptr [ESI + 0xb17],EAX
004F5CB9  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5CBF  6A FF                     PUSH -0x1
004F5CC1  68 2C 20 7C 00            PUSH 0x7c202c
004F5CC6  6A 0B                     PUSH 0xb
004F5CC8  52                        PUSH EDX
004F5CC9  E8 22 3E 21 00            CALL 0x00709af0
004F5CCE  83 C4 40                  ADD ESP,0x40
004F5CD1  89 86 1B 0B 00 00         MOV dword ptr [ESI + 0xb1b],EAX
004F5CD7  53                        PUSH EBX
004F5CD8  53                        PUSH EBX
004F5CD9  6A 01                     PUSH 0x1
004F5CDB  53                        PUSH EBX
004F5CDC  6A FF                     PUSH -0x1
004F5CDE  53                        PUSH EBX
004F5CDF  68 1C 20 7C 00            PUSH 0x7c201c
004F5CE4  E8 93 FA F0 FF            CALL 0x0040577c
004F5CE9  83 C4 08                  ADD ESP,0x8
004F5CEC  50                        PUSH EAX
004F5CED  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5CF2  6A 0B                     PUSH 0xb
004F5CF4  50                        PUSH EAX
004F5CF5  E8 F6 3D 21 00            CALL 0x00709af0
004F5CFA  53                        PUSH EBX
004F5CFB  53                        PUSH EBX
004F5CFC  6A 01                     PUSH 0x1
004F5CFE  53                        PUSH EBX
004F5CFF  89 86 D5 09 00 00         MOV dword ptr [ESI + 0x9d5],EAX
004F5D05  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F5D0B  6A FF                     PUSH -0x1
004F5D0D  68 14 20 7C 00            PUSH 0x7c2014
004F5D12  6A 0B                     PUSH 0xb
004F5D14  51                        PUSH ECX
004F5D15  E8 D6 3D 21 00            CALL 0x00709af0
004F5D1A  83 C4 40                  ADD ESP,0x40
004F5D1D  89 86 DA 02 00 00         MOV dword ptr [ESI + 0x2da],EAX
004F5D23  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
004F5D29  53                        PUSH EBX
004F5D2A  53                        PUSH EBX
004F5D2B  6A 01                     PUSH 0x1
004F5D2D  53                        PUSH EBX
004F5D2E  6A FF                     PUSH -0x1
004F5D30  68 F4 16 7C 00            PUSH 0x7c16f4
004F5D35  6A 0B                     PUSH 0xb
004F5D37  52                        PUSH EDX
004F5D38  E8 B3 3D 21 00            CALL 0x00709af0
004F5D3D  53                        PUSH EBX
004F5D3E  53                        PUSH EBX
004F5D3F  6A 01                     PUSH 0x1
004F5D41  53                        PUSH EBX
004F5D42  89 86 DE 02 00 00         MOV dword ptr [ESI + 0x2de],EAX
004F5D48  A1 94 67 80 00            MOV EAX,[0x00806794]
004F5D4D  6A FF                     PUSH -0x1
004F5D4F  68 0C 20 7C 00            PUSH 0x7c200c
004F5D54  6A 0B                     PUSH 0xb
004F5D56  50                        PUSH EAX
004F5D57  E8 94 3D 21 00            CALL 0x00709af0
004F5D5C  83 C4 40                  ADD ESP,0x40
004F5D5F  89 86 7C 07 00 00         MOV dword ptr [ESI + 0x77c],EAX
004F5D65  6A 01                     PUSH 0x1
004F5D67  53                        PUSH EBX
004F5D68  53                        PUSH EBX
004F5D69  68 FC 1F 7C 00            PUSH 0x7c1ffc
004F5D6E  E8 09 FA F0 FF            CALL 0x0040577c
004F5D73  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5D79  83 C4 08                  ADD ESP,0x8
004F5D7C  50                        PUSH EAX
004F5D7D  6A 01                     PUSH 0x1
004F5D7F  E8 5C BF 1F 00            CALL 0x006f1ce0
004F5D84  6A 01                     PUSH 0x1
004F5D86  53                        PUSH EBX
004F5D87  53                        PUSH EBX
004F5D88  68 EC 1F 7C 00            PUSH 0x7c1fec
004F5D8D  89 86 54 09 00 00         MOV dword ptr [ESI + 0x954],EAX
004F5D93  E8 E4 F9 F0 FF            CALL 0x0040577c
004F5D98  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5D9E  83 C4 08                  ADD ESP,0x8
004F5DA1  50                        PUSH EAX
004F5DA2  6A 01                     PUSH 0x1
004F5DA4  E8 37 BF 1F 00            CALL 0x006f1ce0
004F5DA9  6A 01                     PUSH 0x1
004F5DAB  53                        PUSH EBX
004F5DAC  6A 01                     PUSH 0x1
004F5DAE  89 86 58 09 00 00         MOV dword ptr [ESI + 0x958],EAX
004F5DB4  68 E0 1F 7C 00            PUSH 0x7c1fe0
004F5DB9  89 9E E2 02 00 00         MOV dword ptr [ESI + 0x2e2],EBX
004F5DBF  E8 B8 F9 F0 FF            CALL 0x0040577c
004F5DC4  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5DCA  83 C4 08                  ADD ESP,0x8
004F5DCD  50                        PUSH EAX
004F5DCE  6A 01                     PUSH 0x1
004F5DD0  E8 0B BF 1F 00            CALL 0x006f1ce0
004F5DD5  89 86 74 09 00 00         MOV dword ptr [ESI + 0x974],EAX
004F5DDB  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F5DE0  3C 03                     CMP AL,0x3
004F5DE2  6A 01                     PUSH 0x1
004F5DE4  53                        PUSH EBX
004F5DE5  0F 84 F7 00 00 00         JZ 0x004f5ee2
004F5DEB  6A 01                     PUSH 0x1
004F5DED  68 D4 1F 7C 00            PUSH 0x7c1fd4
004F5DF2  E8 85 F9 F0 FF            CALL 0x0040577c
004F5DF7  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5DFD  83 C4 08                  ADD ESP,0x8
004F5E00  50                        PUSH EAX
004F5E01  6A 01                     PUSH 0x1
004F5E03  E8 D8 BE 1F 00            CALL 0x006f1ce0
004F5E08  6A 01                     PUSH 0x1
004F5E0A  53                        PUSH EBX
004F5E0B  6A 01                     PUSH 0x1
004F5E0D  68 C8 1F 7C 00            PUSH 0x7c1fc8
004F5E12  89 86 78 09 00 00         MOV dword ptr [ESI + 0x978],EAX
004F5E18  E8 5F F9 F0 FF            CALL 0x0040577c
004F5E1D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5E23  83 C4 08                  ADD ESP,0x8
004F5E26  50                        PUSH EAX
004F5E27  6A 01                     PUSH 0x1
004F5E29  E8 B2 BE 1F 00            CALL 0x006f1ce0
004F5E2E  6A 01                     PUSH 0x1
004F5E30  53                        PUSH EBX
004F5E31  6A 01                     PUSH 0x1
004F5E33  68 BC 1F 7C 00            PUSH 0x7c1fbc
004F5E38  89 86 7C 09 00 00         MOV dword ptr [ESI + 0x97c],EAX
004F5E3E  E8 39 F9 F0 FF            CALL 0x0040577c
004F5E43  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5E49  83 C4 08                  ADD ESP,0x8
004F5E4C  50                        PUSH EAX
004F5E4D  6A 01                     PUSH 0x1
004F5E4F  E8 8C BE 1F 00            CALL 0x006f1ce0
004F5E54  6A 01                     PUSH 0x1
004F5E56  53                        PUSH EBX
004F5E57  53                        PUSH EBX
004F5E58  68 A8 1F 7C 00            PUSH 0x7c1fa8
004F5E5D  89 86 80 09 00 00         MOV dword ptr [ESI + 0x980],EAX
004F5E63  E8 14 F9 F0 FF            CALL 0x0040577c
004F5E68  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5E6E  83 C4 08                  ADD ESP,0x8
004F5E71  50                        PUSH EAX
004F5E72  6A 01                     PUSH 0x1
004F5E74  E8 67 BE 1F 00            CALL 0x006f1ce0
004F5E79  6A 01                     PUSH 0x1
004F5E7B  53                        PUSH EBX
004F5E7C  53                        PUSH EBX
004F5E7D  68 98 1F 7C 00            PUSH 0x7c1f98
004F5E82  89 86 84 09 00 00         MOV dword ptr [ESI + 0x984],EAX
004F5E88  E8 EF F8 F0 FF            CALL 0x0040577c
004F5E8D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5E93  83 C4 08                  ADD ESP,0x8
004F5E96  50                        PUSH EAX
004F5E97  6A 01                     PUSH 0x1
004F5E99  E8 42 BE 1F 00            CALL 0x006f1ce0
004F5E9E  6A 01                     PUSH 0x1
004F5EA0  53                        PUSH EBX
004F5EA1  53                        PUSH EBX
004F5EA2  68 88 1F 7C 00            PUSH 0x7c1f88
004F5EA7  89 86 88 09 00 00         MOV dword ptr [ESI + 0x988],EAX
004F5EAD  E8 CA F8 F0 FF            CALL 0x0040577c
004F5EB2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5EB8  83 C4 08                  ADD ESP,0x8
004F5EBB  50                        PUSH EAX
004F5EBC  6A 01                     PUSH 0x1
004F5EBE  E8 1D BE 1F 00            CALL 0x006f1ce0
004F5EC3  6A 01                     PUSH 0x1
004F5EC5  53                        PUSH EBX
004F5EC6  53                        PUSH EBX
004F5EC7  68 78 1F 7C 00            PUSH 0x7c1f78
004F5ECC  89 86 8C 09 00 00         MOV dword ptr [ESI + 0x98c],EAX
004F5ED2  E8 A5 F8 F0 FF            CALL 0x0040577c
004F5ED7  83 C4 08                  ADD ESP,0x8
004F5EDA  50                        PUSH EAX
004F5EDB  6A 01                     PUSH 0x1
004F5EDD  E9 A9 00 00 00            JMP 0x004f5f8b
LAB_004f5ee2:
004F5EE2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5EE8  68 68 1F 7C 00            PUSH 0x7c1f68
004F5EED  6A 06                     PUSH 0x6
004F5EEF  E8 EC BD 1F 00            CALL 0x006f1ce0
004F5EF4  6A 01                     PUSH 0x1
004F5EF6  53                        PUSH EBX
004F5EF7  89 86 78 09 00 00         MOV dword ptr [ESI + 0x978],EAX
004F5EFD  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5F03  68 58 1F 7C 00            PUSH 0x7c1f58
004F5F08  6A 06                     PUSH 0x6
004F5F0A  E8 D1 BD 1F 00            CALL 0x006f1ce0
004F5F0F  6A 01                     PUSH 0x1
004F5F11  53                        PUSH EBX
004F5F12  89 86 7C 09 00 00         MOV dword ptr [ESI + 0x97c],EAX
004F5F18  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5F1E  68 48 1F 7C 00            PUSH 0x7c1f48
004F5F23  6A 06                     PUSH 0x6
004F5F25  E8 B6 BD 1F 00            CALL 0x006f1ce0
004F5F2A  6A 01                     PUSH 0x1
004F5F2C  53                        PUSH EBX
004F5F2D  89 86 80 09 00 00         MOV dword ptr [ESI + 0x980],EAX
004F5F33  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5F39  68 38 1F 7C 00            PUSH 0x7c1f38
004F5F3E  6A 06                     PUSH 0x6
004F5F40  E8 9B BD 1F 00            CALL 0x006f1ce0
004F5F45  6A 01                     PUSH 0x1
004F5F47  53                        PUSH EBX
004F5F48  89 86 84 09 00 00         MOV dword ptr [ESI + 0x984],EAX
004F5F4E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5F54  68 28 1F 7C 00            PUSH 0x7c1f28
004F5F59  6A 01                     PUSH 0x1
004F5F5B  E8 80 BD 1F 00            CALL 0x006f1ce0
004F5F60  6A 01                     PUSH 0x1
004F5F62  53                        PUSH EBX
004F5F63  89 86 88 09 00 00         MOV dword ptr [ESI + 0x988],EAX
004F5F69  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5F6F  68 18 1F 7C 00            PUSH 0x7c1f18
004F5F74  6A 06                     PUSH 0x6
004F5F76  E8 65 BD 1F 00            CALL 0x006f1ce0
004F5F7B  6A 01                     PUSH 0x1
004F5F7D  53                        PUSH EBX
004F5F7E  68 08 1F 7C 00            PUSH 0x7c1f08
004F5F83  89 86 8C 09 00 00         MOV dword ptr [ESI + 0x98c],EAX
004F5F89  6A 06                     PUSH 0x6
LAB_004f5f8b:
004F5F8B  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5F91  E8 4A BD 1F 00            CALL 0x006f1ce0
004F5F96  6A 01                     PUSH 0x1
004F5F98  53                        PUSH EBX
004F5F99  53                        PUSH EBX
004F5F9A  68 FC 1E 7C 00            PUSH 0x7c1efc
004F5F9F  89 86 90 09 00 00         MOV dword ptr [ESI + 0x990],EAX
004F5FA5  E8 D2 F7 F0 FF            CALL 0x0040577c
004F5FAA  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F5FB0  83 C4 08                  ADD ESP,0x8
004F5FB3  50                        PUSH EAX
004F5FB4  6A 01                     PUSH 0x1
004F5FB6  E8 25 BD 1F 00            CALL 0x006f1ce0
004F5FBB  89 86 94 09 00 00         MOV dword ptr [ESI + 0x994],EAX
004F5FC1  8D 86 27 02 00 00         LEA EAX,[ESI + 0x227]
004F5FC7  C7 45 FC 60 3B 00 00      MOV dword ptr [EBP + -0x4],0x3b60
004F5FCE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F5FD1  C7 45 F0 04 00 00 00      MOV dword ptr [EBP + -0x10],0x4
LAB_004f5fd8:
004F5FD8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
004F5FDE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004F5FE1  51                        PUSH ECX
004F5FE2  52                        PUSH EDX
004F5FE3  E8 58 A1 1B 00            CALL 0x006b0140
004F5FE8  8B F8                     MOV EDI,EAX
004F5FEA  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F5FEF  6A 01                     PUSH 0x1
004F5FF1  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004F5FF4  8D 48 28                  LEA ECX,[EAX + 0x28]
004F5FF7  51                        PUSH ECX
004F5FF8  50                        PUSH EAX
004F5FF9  E8 E2 EF 1B 00            CALL 0x006b4fe0
004F5FFE  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F6004  50                        PUSH EAX
004F6005  A1 9C 67 80 00            MOV EAX,[0x0080679c]
004F600A  33 D2                     XOR EDX,EDX
004F600C  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
004F6010  52                        PUSH EDX
004F6011  57                        PUSH EDI
004F6012  E8 A9 B1 21 00            CALL 0x007111c0
004F6017  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F601D  50                        PUSH EAX
004F601E  57                        PUSH EDI
004F601F  E8 EC B0 21 00            CALL 0x00711110
004F6024  50                        PUSH EAX
004F6025  E8 96 F0 1B 00            CALL 0x006b50c0
004F602A  3B C3                     CMP EAX,EBX
004F602C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F602F  0F 84 8C 00 00 00         JZ 0x004f60c1
004F6035  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004F6038  3B CB                     CMP ECX,EBX
004F603A  74 04                     JZ 0x004f6040
004F603C  8B D9                     MOV EBX,ECX
004F603E  EB 1A                     JMP 0x004f605a
LAB_004f6040:
004F6040  33 DB                     XOR EBX,EBX
004F6042  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
004F6046  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
004F604A  83 C3 1F                  ADD EBX,0x1f
004F604D  C1 EB 03                  SHR EBX,0x3
004F6050  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
004F6056  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_004f605a:
004F605A  50                        PUSH EAX
004F605B  E8 40 EF 1B 00            CALL 0x006b4fa0
004F6060  8B CB                     MOV ECX,EBX
004F6062  8B F8                     MOV EDI,EAX
004F6064  8B D1                     MOV EDX,ECX
004F6066  B8 3A 3A 3A 3A            MOV EAX,0x3a3a3a3a
004F606B  C1 E9 02                  SHR ECX,0x2
004F606E  F3 AB                     STOSD.REP ES:EDI
004F6070  8B CA                     MOV ECX,EDX
004F6072  6A 00                     PUSH 0x0
004F6074  83 E1 03                  AND ECX,0x3
004F6077  6A 00                     PUSH 0x0
004F6079  F3 AA                     STOSB.REP ES:EDI
004F607B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F607E  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F6084  6A 00                     PUSH 0x0
004F6086  6A 00                     PUSH 0x0
004F6088  6A 00                     PUSH 0x0
004F608A  50                        PUSH EAX
004F608B  E8 00 AA 21 00            CALL 0x00710a90
004F6090  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004F6093  6A 00                     PUSH 0x0
004F6095  6A 00                     PUSH 0x0
004F6097  6A 00                     PUSH 0x0
004F6099  51                        PUSH ECX
004F609A  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004F60A0  E8 1B B9 21 00            CALL 0x007119c0
004F60A5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F60A8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F60AB  6A 3A                     PUSH 0x3a
004F60AD  6A 00                     PUSH 0x0
004F60AF  52                        PUSH EDX
004F60B0  50                        PUSH EAX
004F60B1  E8 6A EA 1B 00            CALL 0x006b4b20
004F60B6  8D 4D F8                  LEA ECX,[EBP + -0x8]
004F60B9  51                        PUSH ECX
004F60BA  E8 A1 4F 1B 00            CALL 0x006ab060
004F60BF  33 DB                     XOR EBX,EBX
LAB_004f60c1:
004F60C1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004F60C4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F60C7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F60CA  42                        INC EDX
004F60CB  83 C1 04                  ADD ECX,0x4
004F60CE  48                        DEC EAX
004F60CF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004F60D2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F60D5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004F60D8  0F 85 FA FE FF FF         JNZ 0x004f5fd8
004F60DE  33 DB                     XOR EBX,EBX
004F60E0  8D BE BF 0D 00 00         LEA EDI,[ESI + 0xdbf]
004F60E6  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
LAB_004f60ed:
004F60ED  6A 00                     PUSH 0x0
004F60EF  6A 00                     PUSH 0x0
004F60F1  6A 01                     PUSH 0x1
004F60F3  6A 00                     PUSH 0x0
004F60F5  6A FF                     PUSH -0x1
004F60F7  53                        PUSH EBX
004F60F8  6A 01                     PUSH 0x1
004F60FA  68 EC 1E 7C 00            PUSH 0x7c1eec
004F60FF  E8 FC CA 1F 00            CALL 0x006f2c00
004F6104  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
004F610A  83 C4 0C                  ADD ESP,0xc
004F610D  50                        PUSH EAX
004F610E  6A 0B                     PUSH 0xb
004F6110  52                        PUSH EDX
004F6111  E8 DA 39 21 00            CALL 0x00709af0
004F6116  83 C4 20                  ADD ESP,0x20
004F6119  89 87 09 FC FF FF         MOV dword ptr [EDI + 0xfffffc09],EAX
004F611F  83 C0 30                  ADD EAX,0x30
004F6122  6A 01                     PUSH 0x1
004F6124  6A 00                     PUSH 0x0
004F6126  53                        PUSH EBX
004F6127  6A 01                     PUSH 0x1
004F6129  68 E0 1E 7C 00            PUSH 0x7c1ee0
004F612E  89 07                     MOV dword ptr [EDI],EAX
004F6130  E8 CB CA 1F 00            CALL 0x006f2c00
004F6135  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
004F613B  83 C4 0C                  ADD ESP,0xc
004F613E  50                        PUSH EAX
004F613F  6A 06                     PUSH 0x6
004F6141  E8 9A BB 1F 00            CALL 0x006f1ce0
004F6146  89 47 F8                  MOV dword ptr [EDI + -0x8],EAX
004F6149  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F614C  43                        INC EBX
004F614D  83 C7 04                  ADD EDI,0x4
004F6150  48                        DEC EAX
004F6151  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004F6154  75 97                     JNZ 0x004f60ed
004F6156  6A 01                     PUSH 0x1
004F6158  6A 00                     PUSH 0x0
004F615A  6A 01                     PUSH 0x1
004F615C  68 D4 1E 7C 00            PUSH 0x7c1ed4
004F6161  E8 16 F6 F0 FF            CALL 0x0040577c
004F6166  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F616C  83 C4 08                  ADD ESP,0x8
004F616F  50                        PUSH EAX
004F6170  6A 01                     PUSH 0x1
004F6172  E8 69 BB 1F 00            CALL 0x006f1ce0
004F6177  89 86 D9 09 00 00         MOV dword ptr [ESI + 0x9d9],EAX
004F617D  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6182  3C 03                     CMP AL,0x3
004F6184  6A 01                     PUSH 0x1
004F6186  6A 00                     PUSH 0x0
004F6188  0F 84 B7 01 00 00         JZ 0x004f6345
004F618E  6A 01                     PUSH 0x1
004F6190  68 C8 1E 7C 00            PUSH 0x7c1ec8
004F6195  E8 E2 F5 F0 FF            CALL 0x0040577c
004F619A  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F61A0  83 C4 08                  ADD ESP,0x8
004F61A3  50                        PUSH EAX
004F61A4  6A 01                     PUSH 0x1
004F61A6  E8 35 BB 1F 00            CALL 0x006f1ce0
004F61AB  6A 01                     PUSH 0x1
004F61AD  6A 00                     PUSH 0x0
004F61AF  6A 01                     PUSH 0x1
004F61B1  68 BC 1E 7C 00            PUSH 0x7c1ebc
004F61B6  89 86 DD 09 00 00         MOV dword ptr [ESI + 0x9dd],EAX
004F61BC  E8 BB F5 F0 FF            CALL 0x0040577c
004F61C1  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F61C7  83 C4 08                  ADD ESP,0x8
004F61CA  50                        PUSH EAX
004F61CB  6A 01                     PUSH 0x1
004F61CD  E8 0E BB 1F 00            CALL 0x006f1ce0
004F61D2  6A 01                     PUSH 0x1
004F61D4  6A 00                     PUSH 0x0
004F61D6  6A 01                     PUSH 0x1
004F61D8  68 B0 1E 7C 00            PUSH 0x7c1eb0
004F61DD  89 86 E1 09 00 00         MOV dword ptr [ESI + 0x9e1],EAX
004F61E3  E8 94 F5 F0 FF            CALL 0x0040577c
004F61E8  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F61EE  83 C4 08                  ADD ESP,0x8
004F61F1  50                        PUSH EAX
004F61F2  6A 01                     PUSH 0x1
004F61F4  E8 E7 BA 1F 00            CALL 0x006f1ce0
004F61F9  6A 01                     PUSH 0x1
004F61FB  6A 00                     PUSH 0x0
004F61FD  6A 00                     PUSH 0x0
004F61FF  68 A0 1E 7C 00            PUSH 0x7c1ea0
004F6204  89 86 E5 09 00 00         MOV dword ptr [ESI + 0x9e5],EAX
004F620A  E8 6D F5 F0 FF            CALL 0x0040577c
004F620F  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6215  83 C4 08                  ADD ESP,0x8
004F6218  50                        PUSH EAX
004F6219  6A 01                     PUSH 0x1
004F621B  E8 C0 BA 1F 00            CALL 0x006f1ce0
004F6220  6A 01                     PUSH 0x1
004F6222  6A 00                     PUSH 0x0
004F6224  6A 00                     PUSH 0x0
004F6226  68 90 1E 7C 00            PUSH 0x7c1e90
004F622B  89 86 E9 09 00 00         MOV dword ptr [ESI + 0x9e9],EAX
004F6231  E8 46 F5 F0 FF            CALL 0x0040577c
004F6236  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F623C  83 C4 08                  ADD ESP,0x8
004F623F  50                        PUSH EAX
004F6240  6A 01                     PUSH 0x1
004F6242  E8 99 BA 1F 00            CALL 0x006f1ce0
004F6247  6A 01                     PUSH 0x1
004F6249  6A 00                     PUSH 0x0
004F624B  6A 00                     PUSH 0x0
004F624D  68 80 1E 7C 00            PUSH 0x7c1e80
004F6252  89 86 ED 09 00 00         MOV dword ptr [ESI + 0x9ed],EAX
004F6258  E8 1F F5 F0 FF            CALL 0x0040577c
004F625D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6263  83 C4 08                  ADD ESP,0x8
004F6266  50                        PUSH EAX
004F6267  6A 01                     PUSH 0x1
004F6269  E8 72 BA 1F 00            CALL 0x006f1ce0
004F626E  6A 01                     PUSH 0x1
004F6270  6A 00                     PUSH 0x0
004F6272  6A 00                     PUSH 0x0
004F6274  68 6C 1E 7C 00            PUSH 0x7c1e6c
004F6279  89 86 F5 09 00 00         MOV dword ptr [ESI + 0x9f5],EAX
004F627F  E8 F8 F4 F0 FF            CALL 0x0040577c
004F6284  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F628A  83 C4 08                  ADD ESP,0x8
004F628D  50                        PUSH EAX
004F628E  6A 01                     PUSH 0x1
004F6290  E8 4B BA 1F 00            CALL 0x006f1ce0
004F6295  6A 01                     PUSH 0x1
004F6297  6A 00                     PUSH 0x0
004F6299  6A 00                     PUSH 0x0
004F629B  68 58 1E 7C 00            PUSH 0x7c1e58
004F62A0  89 86 F9 09 00 00         MOV dword ptr [ESI + 0x9f9],EAX
004F62A6  E8 D1 F4 F0 FF            CALL 0x0040577c
004F62AB  83 C4 08                  ADD ESP,0x8
004F62AE  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F62B4  50                        PUSH EAX
004F62B5  6A 01                     PUSH 0x1
004F62B7  E8 24 BA 1F 00            CALL 0x006f1ce0
004F62BC  6A 01                     PUSH 0x1
004F62BE  6A 00                     PUSH 0x0
004F62C0  6A 00                     PUSH 0x0
004F62C2  68 44 1E 7C 00            PUSH 0x7c1e44
004F62C7  89 86 FD 09 00 00         MOV dword ptr [ESI + 0x9fd],EAX
004F62CD  E8 AA F4 F0 FF            CALL 0x0040577c
004F62D2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F62D8  83 C4 08                  ADD ESP,0x8
004F62DB  50                        PUSH EAX
004F62DC  6A 01                     PUSH 0x1
004F62DE  E8 FD B9 1F 00            CALL 0x006f1ce0
004F62E3  6A 01                     PUSH 0x1
004F62E5  6A 00                     PUSH 0x0
004F62E7  6A 00                     PUSH 0x0
004F62E9  68 30 1E 7C 00            PUSH 0x7c1e30
004F62EE  89 86 01 0A 00 00         MOV dword ptr [ESI + 0xa01],EAX
004F62F4  E8 83 F4 F0 FF            CALL 0x0040577c
004F62F9  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F62FF  83 C4 08                  ADD ESP,0x8
004F6302  50                        PUSH EAX
004F6303  6A 01                     PUSH 0x1
004F6305  E8 D6 B9 1F 00            CALL 0x006f1ce0
004F630A  6A 01                     PUSH 0x1
004F630C  6A 00                     PUSH 0x0
004F630E  89 86 05 0A 00 00         MOV dword ptr [ESI + 0xa05],EAX
004F6314  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F631A  68 1C 1E 7C 00            PUSH 0x7c1e1c
004F631F  6A 01                     PUSH 0x1
004F6321  E8 BA B9 1F 00            CALL 0x006f1ce0
004F6326  6A 01                     PUSH 0x1
004F6328  6A 00                     PUSH 0x0
004F632A  6A 00                     PUSH 0x0
004F632C  68 0C 1E 7C 00            PUSH 0x7c1e0c
004F6331  89 86 09 0A 00 00         MOV dword ptr [ESI + 0xa09],EAX
004F6337  E8 40 F4 F0 FF            CALL 0x0040577c
004F633C  83 C4 08                  ADD ESP,0x8
004F633F  50                        PUSH EAX
004F6340  E9 39 01 00 00            JMP 0x004f647e
LAB_004f6345:
004F6345  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F634B  68 FC 1D 7C 00            PUSH 0x7c1dfc
004F6350  6A 01                     PUSH 0x1
004F6352  E8 89 B9 1F 00            CALL 0x006f1ce0
004F6357  6A 01                     PUSH 0x1
004F6359  6A 00                     PUSH 0x0
004F635B  89 86 DD 09 00 00         MOV dword ptr [ESI + 0x9dd],EAX
004F6361  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6367  68 EC 1D 7C 00            PUSH 0x7c1dec
004F636C  6A 01                     PUSH 0x1
004F636E  E8 6D B9 1F 00            CALL 0x006f1ce0
004F6373  6A 01                     PUSH 0x1
004F6375  6A 00                     PUSH 0x0
004F6377  89 86 E1 09 00 00         MOV dword ptr [ESI + 0x9e1],EAX
004F637D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6383  68 DC 1D 7C 00            PUSH 0x7c1ddc
004F6388  6A 01                     PUSH 0x1
004F638A  E8 51 B9 1F 00            CALL 0x006f1ce0
004F638F  6A 01                     PUSH 0x1
004F6391  6A 00                     PUSH 0x0
004F6393  89 86 E5 09 00 00         MOV dword ptr [ESI + 0x9e5],EAX
004F6399  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F639F  68 CC 1D 7C 00            PUSH 0x7c1dcc
004F63A4  6A 01                     PUSH 0x1
004F63A6  E8 35 B9 1F 00            CALL 0x006f1ce0
004F63AB  6A 01                     PUSH 0x1
004F63AD  6A 00                     PUSH 0x0
004F63AF  89 86 E9 09 00 00         MOV dword ptr [ESI + 0x9e9],EAX
004F63B5  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F63BB  68 BC 1D 7C 00            PUSH 0x7c1dbc
004F63C0  6A 01                     PUSH 0x1
004F63C2  E8 19 B9 1F 00            CALL 0x006f1ce0
004F63C7  6A 01                     PUSH 0x1
004F63C9  6A 00                     PUSH 0x0
004F63CB  89 86 ED 09 00 00         MOV dword ptr [ESI + 0x9ed],EAX
004F63D1  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F63D7  68 AC 1D 7C 00            PUSH 0x7c1dac
004F63DC  6A 01                     PUSH 0x1
004F63DE  E8 FD B8 1F 00            CALL 0x006f1ce0
004F63E3  6A 01                     PUSH 0x1
004F63E5  6A 00                     PUSH 0x0
004F63E7  89 86 F5 09 00 00         MOV dword ptr [ESI + 0x9f5],EAX
004F63ED  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F63F3  68 9C 1D 7C 00            PUSH 0x7c1d9c
004F63F8  6A 06                     PUSH 0x6
004F63FA  E8 E1 B8 1F 00            CALL 0x006f1ce0
004F63FF  6A 01                     PUSH 0x1
004F6401  6A 00                     PUSH 0x0
004F6403  89 86 F9 09 00 00         MOV dword ptr [ESI + 0x9f9],EAX
004F6409  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F640F  68 8C 1D 7C 00            PUSH 0x7c1d8c
004F6414  6A 06                     PUSH 0x6
004F6416  E8 C5 B8 1F 00            CALL 0x006f1ce0
004F641B  6A 01                     PUSH 0x1
004F641D  6A 00                     PUSH 0x0
004F641F  89 86 FD 09 00 00         MOV dword ptr [ESI + 0x9fd],EAX
004F6425  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F642B  68 7C 1D 7C 00            PUSH 0x7c1d7c
004F6430  6A 06                     PUSH 0x6
004F6432  E8 A9 B8 1F 00            CALL 0x006f1ce0
004F6437  6A 01                     PUSH 0x1
004F6439  6A 00                     PUSH 0x0
004F643B  89 86 01 0A 00 00         MOV dword ptr [ESI + 0xa01],EAX
004F6441  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6447  68 6C 1D 7C 00            PUSH 0x7c1d6c
004F644C  6A 06                     PUSH 0x6
004F644E  E8 8D B8 1F 00            CALL 0x006f1ce0
004F6453  6A 01                     PUSH 0x1
004F6455  6A 00                     PUSH 0x0
004F6457  89 86 05 0A 00 00         MOV dword ptr [ESI + 0xa05],EAX
004F645D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6463  68 60 1D 7C 00            PUSH 0x7c1d60
004F6468  6A 01                     PUSH 0x1
004F646A  E8 71 B8 1F 00            CALL 0x006f1ce0
004F646F  6A 01                     PUSH 0x1
004F6471  6A 00                     PUSH 0x0
004F6473  89 86 09 0A 00 00         MOV dword ptr [ESI + 0xa09],EAX
004F6479  68 50 1D 7C 00            PUSH 0x7c1d50
LAB_004f647e:
004F647E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6484  6A 01                     PUSH 0x1
004F6486  E8 55 B8 1F 00            CALL 0x006f1ce0
004F648B  6A 01                     PUSH 0x1
004F648D  6A 00                     PUSH 0x0
004F648F  6A 00                     PUSH 0x0
004F6491  68 40 1D 7C 00            PUSH 0x7c1d40
004F6496  89 86 11 0A 00 00         MOV dword ptr [ESI + 0xa11],EAX
004F649C  E8 DB F2 F0 FF            CALL 0x0040577c
004F64A1  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F64A7  83 C4 08                  ADD ESP,0x8
004F64AA  50                        PUSH EAX
004F64AB  6A 01                     PUSH 0x1
004F64AD  E8 2E B8 1F 00            CALL 0x006f1ce0
004F64B2  6A 01                     PUSH 0x1
004F64B4  6A 00                     PUSH 0x0
004F64B6  6A 00                     PUSH 0x0
004F64B8  68 34 1D 7C 00            PUSH 0x7c1d34
004F64BD  89 86 F1 09 00 00         MOV dword ptr [ESI + 0x9f1],EAX
004F64C3  E8 B4 F2 F0 FF            CALL 0x0040577c
004F64C8  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F64CE  83 C4 08                  ADD ESP,0x8
004F64D1  50                        PUSH EAX
004F64D2  6A 01                     PUSH 0x1
004F64D4  E8 07 B8 1F 00            CALL 0x006f1ce0
004F64D9  6A 01                     PUSH 0x1
004F64DB  6A 00                     PUSH 0x0
004F64DD  6A 00                     PUSH 0x0
004F64DF  68 24 1D 7C 00            PUSH 0x7c1d24
004F64E4  89 86 0D 0A 00 00         MOV dword ptr [ESI + 0xa0d],EAX
004F64EA  E8 8D F2 F0 FF            CALL 0x0040577c
004F64EF  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F64F5  83 C4 08                  ADD ESP,0x8
004F64F8  50                        PUSH EAX
004F64F9  6A 01                     PUSH 0x1
004F64FB  E8 E0 B7 1F 00            CALL 0x006f1ce0
004F6500  6A 01                     PUSH 0x1
004F6502  6A 00                     PUSH 0x0
004F6504  6A 00                     PUSH 0x0
004F6506  68 14 1D 7C 00            PUSH 0x7c1d14
004F650B  89 86 43 0B 00 00         MOV dword ptr [ESI + 0xb43],EAX
004F6511  E8 66 F2 F0 FF            CALL 0x0040577c
004F6516  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F651C  83 C4 08                  ADD ESP,0x8
004F651F  50                        PUSH EAX
004F6520  6A 01                     PUSH 0x1
004F6522  E8 B9 B7 1F 00            CALL 0x006f1ce0
004F6527  89 86 47 0B 00 00         MOV dword ptr [ESI + 0xb47],EAX
004F652D  C7 86 E6 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2e6],0x0
004F6537  A1 48 73 80 00            MOV EAX,[0x00807348]
004F653C  84 C0                     TEST AL,AL
004F653E  76 77                     JBE 0x004f65b7
004F6540  3C 02                     CMP AL,0x2
004F6542  77 73                     JA 0x004f65b7
004F6544  8D 8E A4 01 00 00         LEA ECX,[ESI + 0x1a4]
004F654A  6A 00                     PUSH 0x0
004F654C  51                        PUSH ECX
004F654D  25 FF 00 00 00            AND EAX,0xff
004F6552  6A 01                     PUSH 0x1
004F6554  50                        PUSH EAX
004F6555  6A 01                     PUSH 0x1
004F6557  68 04 1D 7C 00            PUSH 0x7c1d04
004F655C  E8 9F C6 1F 00            CALL 0x006f2c00
004F6561  83 C4 0C                  ADD ESP,0xc
004F6564  50                        PUSH EAX
004F6565  E8 12 F2 F0 FF            CALL 0x0040577c
004F656A  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F6570  83 C4 08                  ADD ESP,0x8
004F6573  50                        PUSH EAX
004F6574  6A 01                     PUSH 0x1
004F6576  E8 65 B7 1F 00            CALL 0x006f1ce0
004F657B  A1 48 73 80 00            MOV EAX,[0x00807348]
004F6580  8D 96 A8 01 00 00         LEA EDX,[ESI + 0x1a8]
004F6586  6A 00                     PUSH 0x0
004F6588  52                        PUSH EDX
004F6589  25 FF 00 00 00            AND EAX,0xff
004F658E  6A 01                     PUSH 0x1
004F6590  50                        PUSH EAX
004F6591  6A 01                     PUSH 0x1
004F6593  68 04 1D 7C 00            PUSH 0x7c1d04
004F6598  E8 63 C6 1F 00            CALL 0x006f2c00
004F659D  83 C4 0C                  ADD ESP,0xc
004F65A0  50                        PUSH EAX
004F65A1  E8 D6 F1 F0 FF            CALL 0x0040577c
004F65A6  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F65AC  83 C4 08                  ADD ESP,0x8
004F65AF  50                        PUSH EAX
004F65B0  6A 01                     PUSH 0x1
004F65B2  E8 29 B7 1F 00            CALL 0x006f1ce0
LAB_004f65b7:
004F65B7  6A 0A                     PUSH 0xa
004F65B9  6A 09                     PUSH 0x9
004F65BB  6A 0A                     PUSH 0xa
004F65BD  6A 00                     PUSH 0x0
004F65BF  E8 CC 7C 1B 00            CALL 0x006ae290
004F65C4  8D BE 63 0B 00 00         LEA EDI,[ESI + 0xb63]
004F65CA  89 86 95 0B 00 00         MOV dword ptr [ESI + 0xb95],EAX
004F65D0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F65D6  57                        PUSH EDI
004F65D7  6A 01                     PUSH 0x1
004F65D9  E8 DE CF F0 FF            CALL 0x004035bc
004F65DE  8D 8E 99 0B 00 00         LEA ECX,[ESI + 0xb99]
004F65E4  51                        PUSH ECX
004F65E5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F65EB  6A 02                     PUSH 0x2
004F65ED  E8 CA CF F0 FF            CALL 0x004035bc
004F65F2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F65F8  8D 96 F5 0B 00 00         LEA EDX,[ESI + 0xbf5]
004F65FE  52                        PUSH EDX
004F65FF  6A 04                     PUSH 0x4
004F6601  E8 B6 CF F0 FF            CALL 0x004035bc
004F6606  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F660C  8D 9E 51 0C 00 00         LEA EBX,[ESI + 0xc51]
004F6612  53                        PUSH EBX
004F6613  6A 05                     PUSH 0x5
004F6615  E8 A2 CF F0 FF            CALL 0x004035bc
004F661A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F6620  8D 86 87 0C 00 00         LEA EAX,[ESI + 0xc87]
004F6626  50                        PUSH EAX
004F6627  6A 0E                     PUSH 0xe
004F6629  E8 8E CF F0 FF            CALL 0x004035bc
004F662E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F6634  8D 86 C9 0C 00 00         LEA EAX,[ESI + 0xcc9]
004F663A  50                        PUSH EAX
004F663B  6A 0F                     PUSH 0xf
004F663D  E8 7A CF F0 FF            CALL 0x004035bc
004F6642  6A 00                     PUSH 0x0
004F6644  6A 00                     PUSH 0x0
004F6646  6A 01                     PUSH 0x1
004F6648  6A 00                     PUSH 0x0
004F664A  6A 06                     PUSH 0x6
004F664C  6A 00                     PUSH 0x0
004F664E  57                        PUSH EDI
004F664F  E8 B3 CF F0 FF            CALL 0x00403607
004F6654  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F665A  83 C4 08                  ADD ESP,0x8
004F665D  50                        PUSH EAX
004F665E  6A 1F                     PUSH 0x1f
004F6660  51                        PUSH ECX
004F6661  E8 8A 34 21 00            CALL 0x00709af0
004F6666  83 C4 20                  ADD ESP,0x20
004F6669  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
004F666C  89 86 E2 02 00 00         MOV dword ptr [ESI + 0x2e2],EAX
004F6672  C6 86 EA 02 00 00 00      MOV byte ptr [ESI + 0x2ea],0x0
004F6679  6A 00                     PUSH 0x0
004F667B  6A 00                     PUSH 0x0
004F667D  6A 01                     PUSH 0x1
004F667F  6A 00                     PUSH 0x0
004F6681  6A 06                     PUSH 0x6
004F6683  6A 00                     PUSH 0x0
004F6685  53                        PUSH EBX
004F6686  C6 86 EC 02 00 00 01      MOV byte ptr [ESI + 0x2ec],0x1
004F668D  89 96 EE 02 00 00         MOV dword ptr [ESI + 0x2ee],EDX
004F6693  E8 6F CF F0 FF            CALL 0x00403607
004F6698  83 C4 08                  ADD ESP,0x8
004F669B  50                        PUSH EAX
004F669C  A1 94 67 80 00            MOV EAX,[0x00806794]
004F66A1  6A 1F                     PUSH 0x1f
004F66A3  50                        PUSH EAX
004F66A4  E8 47 34 21 00            CALL 0x00709af0
004F66A9  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
004F66AC  89 86 E6 02 00 00         MOV dword ptr [ESI + 0x2e6],EAX
004F66B2  83 C4 20                  ADD ESP,0x20
004F66B5  C6 86 EB 02 00 00 00      MOV byte ptr [ESI + 0x2eb],0x0
004F66BC  C6 86 ED 02 00 00 01      MOV byte ptr [ESI + 0x2ed],0x1
004F66C3  89 8E F2 02 00 00         MOV dword ptr [ESI + 0x2f2],ECX
004F66C9  8D 86 87 0C 00 00         LEA EAX,[ESI + 0xc87]
004F66CF  8D BE 53 0D 00 00         LEA EDI,[ESI + 0xd53]
004F66D5  8D 9E 47 0D 00 00         LEA EBX,[ESI + 0xd47]
004F66DB  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
LAB_004f66e2:
004F66E2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F66E5  C7 45 F0 06 00 00 00      MOV dword ptr [EBP + -0x10],0x6
LAB_004f66ec:
004F66EC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004F66EF  6A 00                     PUSH 0x0
004F66F1  6A 00                     PUSH 0x0
004F66F3  6A 01                     PUSH 0x1
004F66F5  6A 00                     PUSH 0x0
004F66F7  6A 06                     PUSH 0x6
004F66F9  52                        PUSH EDX
004F66FA  8B CE                     MOV ECX,ESI
004F66FC  E8 B4 BC F0 FF            CALL 0x004023b5
004F6701  50                        PUSH EAX
004F6702  A1 94 67 80 00            MOV EAX,[0x00806794]
004F6707  6A 1F                     PUSH 0x1f
004F6709  50                        PUSH EAX
004F670A  E8 E1 33 21 00            CALL 0x00709af0
004F670F  89 47 B8                  MOV dword ptr [EDI + -0x48],EAX
004F6712  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F6715  C6 43 F4 00               MOV byte ptr [EBX + -0xc],0x0
004F6719  C6 03 01                  MOV byte ptr [EBX],0x1
004F671C  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
004F671F  83 C0 0B                  ADD EAX,0xb
004F6722  89 0F                     MOV dword ptr [EDI],ECX
004F6724  C7 47 30 00 00 00 00      MOV dword ptr [EDI + 0x30],0x0
004F672B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F672E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F6731  83 C4 20                  ADD ESP,0x20
004F6734  83 C7 04                  ADD EDI,0x4
004F6737  43                        INC EBX
004F6738  48                        DEC EAX
004F6739  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004F673C  75 AE                     JNZ 0x004f66ec
004F673E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F6741  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F6744  49                        DEC ECX
004F6745  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F6748  75 98                     JNZ 0x004f66e2
004F674A  8B CE                     MOV ECX,ESI
004F674C  E8 F7 CE F0 FF            CALL 0x00403648
004F6751  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6756  8B CE                     MOV ECX,ESI
004F6758  3C 03                     CMP AL,0x3
004F675A  75 07                     JNZ 0x004f6763
004F675C  E8 8A B3 F0 FF            CALL 0x00401aeb
004F6761  EB 05                     JMP 0x004f6768
LAB_004f6763:
004F6763  E8 67 BB F0 FF            CALL 0x004022cf
LAB_004f6768:
004F6768  8B CE                     MOV ECX,ESI
004F676A  E8 A6 CA F0 FF            CALL 0x00403215
004F676F  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004F6776  75 09                     JNZ 0x004f6781
004F6778  8B CE                     MOV ECX,ESI
004F677A  E8 11 BE F0 FF            CALL 0x00402590
004F677F  EB 09                     JMP 0x004f678a
LAB_004f6781:
004F6781  6A 01                     PUSH 0x1
004F6783  8B CE                     MOV ECX,ESI
004F6785  E8 35 DF F0 FF            CALL 0x004046bf
LAB_004f678a:
004F678A  8B CE                     MOV ECX,ESI
004F678C  E8 6D CD F0 FF            CALL 0x004034fe
004F6791  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F6797  8D BE 1C 01 00 00         LEA EDI,[ESI + 0x11c]
004F679D  57                        PUSH EDI
004F679E  6A 00                     PUSH 0x0
004F67A0  6A 03                     PUSH 0x3
004F67A2  52                        PUSH EDX
004F67A3  E8 A8 B2 1B 00            CALL 0x006b1a50
004F67A8  8B 0F                     MOV ECX,dword ptr [EDI]
004F67AA  8D 46 3C                  LEA EAX,[ESI + 0x3c]
004F67AD  89 4E 40                  MOV dword ptr [ESI + 0x40],ECX
004F67B0  89 08                     MOV dword ptr [EAX],ECX
004F67B2  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004F67B8  80 FA 03                  CMP DL,0x3
004F67BB  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
004F67BE  75 07                     JNZ 0x004f67c7
004F67C0  03 D1                     ADD EDX,ECX
004F67C2  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
004F67C5  EB 0D                     JMP 0x004f67d4
LAB_004f67c7:
004F67C7  8B 7E 70                  MOV EDI,dword ptr [ESI + 0x70]
004F67CA  03 D1                     ADD EDX,ECX
004F67CC  03 FA                     ADD EDI,EDX
004F67CE  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
004F67D1  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
LAB_004f67d4:
004F67D4  8B 56 74                  MOV EDX,dword ptr [ESI + 0x74]
004F67D7  8B 7E 48                  MOV EDI,dword ptr [ESI + 0x48]
004F67DA  03 D7                     ADD EDX,EDI
004F67DC  8B 7E 78                  MOV EDI,dword ptr [ESI + 0x78]
004F67DF  89 56 4C                  MOV dword ptr [ESI + 0x4c],EDX
004F67E2  03 D7                     ADD EDX,EDI
004F67E4  8B 7E 7C                  MOV EDI,dword ptr [ESI + 0x7c]
004F67E7  89 56 50                  MOV dword ptr [ESI + 0x50],EDX
004F67EA  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004F67F1  74 0B                     JZ 0x004f67fe
004F67F3  03 D7                     ADD EDX,EDI
004F67F5  8B BE 80 00 00 00         MOV EDI,dword ptr [ESI + 0x80]
004F67FB  89 56 54                  MOV dword ptr [ESI + 0x54],EDX
LAB_004f67fe:
004F67FE  03 D7                     ADD EDX,EDI
004F6800  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
004F6803  89 56 58                  MOV dword ptr [ESI + 0x58],EDX
004F6806  89 56 5C                  MOV dword ptr [ESI + 0x5c],EDX
004F6809  8B 96 88 00 00 00         MOV EDX,dword ptr [ESI + 0x88]
004F680F  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
004F6812  03 D7                     ADD EDX,EDI
004F6814  B9 0A 00 00 00            MOV ECX,0xa
004F6819  89 56 60                  MOV dword ptr [ESI + 0x60],EDX
LAB_004f681c:
004F681C  8B 96 8C 00 00 00         MOV EDX,dword ptr [ESI + 0x8c]
004F6822  8B 18                     MOV EBX,dword ptr [EAX]
004F6824  03 DA                     ADD EBX,EDX
004F6826  89 18                     MOV dword ptr [EAX],EBX
004F6828  83 C0 04                  ADD EAX,0x4
004F682B  49                        DEC ECX
004F682C  75 EE                     JNZ 0x004f681c
004F682E  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
004F6834  32 C0                     XOR AL,AL
004F6836  8B D7                     MOV EDX,EDI
LAB_004f6838:
004F6838  8B 8E 20 01 00 00         MOV ECX,dword ptr [ESI + 0x120]
004F683E  8B 9E 28 01 00 00         MOV EBX,dword ptr [ESI + 0x128]
004F6844  3C 01                     CMP AL,0x1
004F6846  8D 8C 19 65 FF FF FF      LEA ECX,[ECX + EBX*0x1 + 0xffffff65]
004F684D  74 04                     JZ 0x004f6853
004F684F  3C 07                     CMP AL,0x7
004F6851  75 06                     JNZ 0x004f6859
LAB_004f6853:
004F6853  03 8E C0 00 00 00         ADD ECX,dword ptr [ESI + 0xc0]
LAB_004f6859:
004F6859  89 0A                     MOV dword ptr [EDX],ECX
004F685B  FE C0                     INC AL
004F685D  83 C2 04                  ADD EDX,0x4
004F6860  3C 0B                     CMP AL,0xb
004F6862  72 D4                     JC 0x004f6838
004F6864  66 8B 15 34 67 80 00      MOV DX,word ptr [0x00806734]
004F686B  32 DB                     XOR BL,BL
004F686D  66 2B 17                  SUB DX,word ptr [EDI]
004F6870  66 89 96 41 02 00 00      MOV word ptr [ESI + 0x241],DX
004F6877  A0 48 73 80 00            MOV AL,[0x00807348]
004F687C  F6 D8                     NEG AL
004F687E  1B C0                     SBB EAX,EAX
004F6880  83 E0 02                  AND EAX,0x2
004F6883  83 C0 09                  ADD EAX,0x9
004F6886  85 C0                     TEST EAX,EAX
004F6888  7E 7C                     JLE 0x004f6906
004F688A  33 C0                     XOR EAX,EAX
LAB_004f688c:
004F688C  8B 54 86 68               MOV EDX,dword ptr [ESI + EAX*0x4 + 0x68]
004F6890  85 D2                     TEST EDX,EDX
004F6892  74 51                     JZ 0x004f68e5
004F6894  8B 8C 86 C0 00 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0xc0]
004F689B  85 C9                     TEST ECX,ECX
004F689D  74 46                     JZ 0x004f68e5
004F689F  8D BC 86 48 01 00 00      LEA EDI,[ESI + EAX*0x4 + 0x148]
004F68A6  8B 84 86 80 01 00 00      MOV EAX,dword ptr [ESI + EAX*0x4 + 0x180]
004F68AD  50                        PUSH EAX
004F68AE  51                        PUSH ECX
004F68AF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004F68B5  52                        PUSH EDX
004F68B6  68 46 29 40 00            PUSH 0x402946
004F68BB  6A 05                     PUSH 0x5
004F68BD  57                        PUSH EDI
004F68BE  51                        PUSH ECX
004F68BF  E8 6C BA 1B 00            CALL 0x006b2330
004F68C4  8B 17                     MOV EDX,dword ptr [EDI]
004F68C6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F68CB  6A 03                     PUSH 0x3
004F68CD  52                        PUSH EDX
004F68CE  50                        PUSH EAX
004F68CF  E8 3C B2 1B 00            CALL 0x006b1b10
004F68D4  8B 0F                     MOV ECX,dword ptr [EDI]
004F68D6  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F68DC  6A 01                     PUSH 0x1
004F68DE  51                        PUSH ECX
004F68DF  52                        PUSH EDX
004F68E0  E8 DB BF 1B 00            CALL 0x006b28c0
LAB_004f68e5:
004F68E5  8A 0D 48 73 80 00         MOV CL,byte ptr [0x00807348]
004F68EB  FE C3                     INC BL
004F68ED  88 5D E8                  MOV byte ptr [EBP + -0x18],BL
004F68F0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004F68F3  25 FF 00 00 00            AND EAX,0xff
004F68F8  F6 D9                     NEG CL
004F68FA  1B C9                     SBB ECX,ECX
004F68FC  83 E1 02                  AND ECX,0x2
004F68FF  83 C1 09                  ADD ECX,0x9
004F6902  3B C1                     CMP EAX,ECX
004F6904  7C 86                     JL 0x004f688c
LAB_004f6906:
004F6906  B9 01 00 00 00            MOV ECX,0x1
004F690B  89 8E 34 01 00 00         MOV dword ptr [ESI + 0x134],ECX
004F6911  89 8E 38 01 00 00         MOV dword ptr [ESI + 0x138],ECX
004F6917  89 8E 30 01 00 00         MOV dword ptr [ESI + 0x130],ECX
004F691D  8B 96 AC 01 00 00         MOV EDX,dword ptr [ESI + 0x1ac]
004F6923  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
004F6926  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
004F692C  8B 96 AC 01 00 00         MOV EDX,dword ptr [ESI + 0x1ac]
004F6932  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004F6935  89 86 F8 00 00 00         MOV dword ptr [ESI + 0xf8],EAX
004F693B  8B 96 24 01 00 00         MOV EDX,dword ptr [ESI + 0x124]
004F6941  8B 9E F4 00 00 00         MOV EBX,dword ptr [ESI + 0xf4]
004F6947  8B BE 1C 01 00 00         MOV EDI,dword ptr [ESI + 0x11c]
004F694D  2B D3                     SUB EDX,EBX
004F694F  03 D7                     ADD EDX,EDI
004F6951  89 96 EC 00 00 00         MOV dword ptr [ESI + 0xec],EDX
004F6957  A1 D3 C4 80 00            MOV EAX,[0x0080c4d3]
004F695C  3B C1                     CMP EAX,ECX
004F695E  74 15                     JZ 0x004f6975
004F6960  83 F8 03                  CMP EAX,0x3
004F6963  74 10                     JZ 0x004f6975
004F6965  8B 86 20 01 00 00         MOV EAX,dword ptr [ESI + 0x120]
004F696B  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
004F6971  2B C1                     SUB EAX,ECX
004F6973  EB 06                     JMP 0x004f697b
LAB_004f6975:
004F6975  8B 86 20 01 00 00         MOV EAX,dword ptr [ESI + 0x120]
LAB_004f697b:
004F697B  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
004F6981  8B 86 AC 01 00 00         MOV EAX,dword ptr [ESI + 0x1ac]
004F6987  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
004F698D  8B 96 F4 00 00 00         MOV EDX,dword ptr [ESI + 0xf4]
004F6993  50                        PUSH EAX
004F6994  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F6999  51                        PUSH ECX
004F699A  52                        PUSH EDX
004F699B  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
004F69A1  68 2A 40 40 00            PUSH 0x40402a
004F69A6  6A 05                     PUSH 0x5
004F69A8  57                        PUSH EDI
004F69A9  50                        PUSH EAX
004F69AA  E8 81 B9 1B 00            CALL 0x006b2330
004F69AF  8B 0F                     MOV ECX,dword ptr [EDI]
004F69B1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F69B7  6A 03                     PUSH 0x3
004F69B9  51                        PUSH ECX
004F69BA  52                        PUSH EDX
004F69BB  E8 50 B1 1B 00            CALL 0x006b1b10
004F69C0  8B 86 F0 00 00 00         MOV EAX,dword ptr [ESI + 0xf0]
004F69C6  8B 8E EC 00 00 00         MOV ECX,dword ptr [ESI + 0xec]
004F69CC  8B 17                     MOV EDX,dword ptr [EDI]
004F69CE  50                        PUSH EAX
004F69CF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F69D4  51                        PUSH ECX
004F69D5  6A FF                     PUSH -0x1
004F69D7  52                        PUSH EDX
004F69D8  50                        PUSH EAX
004F69D9  E8 62 CC 1B 00            CALL 0x006b3640
004F69DE  8B 8E 24 01 00 00         MOV ECX,dword ptr [ESI + 0x124]
004F69E4  8B BE 04 01 00 00         MOV EDI,dword ptr [ESI + 0x104]
004F69EA  8B 96 1C 01 00 00         MOV EDX,dword ptr [ESI + 0x11c]
004F69F0  2B CF                     SUB ECX,EDI
004F69F2  03 CA                     ADD ECX,EDX
004F69F4  8D BE 78 01 00 00         LEA EDI,[ESI + 0x178]
004F69FA  89 8E FC 00 00 00         MOV dword ptr [ESI + 0xfc],ECX
004F6A00  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
004F6A06  2B 96 08 01 00 00         SUB EDX,dword ptr [ESI + 0x108]
004F6A0C  89 96 00 01 00 00         MOV dword ptr [ESI + 0x100],EDX
004F6A12  8B 86 B0 01 00 00         MOV EAX,dword ptr [ESI + 0x1b0]
004F6A18  8B 8E 08 01 00 00         MOV ECX,dword ptr [ESI + 0x108]
004F6A1E  8B 96 04 01 00 00         MOV EDX,dword ptr [ESI + 0x104]
004F6A24  50                        PUSH EAX
004F6A25  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F6A2A  51                        PUSH ECX
004F6A2B  52                        PUSH EDX
004F6A2C  68 2A 40 40 00            PUSH 0x40402a
004F6A31  6A 06                     PUSH 0x6
004F6A33  57                        PUSH EDI
004F6A34  50                        PUSH EAX
004F6A35  E8 F6 B8 1B 00            CALL 0x006b2330
004F6A3A  8B 0F                     MOV ECX,dword ptr [EDI]
004F6A3C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F6A42  6A 03                     PUSH 0x3
004F6A44  51                        PUSH ECX
004F6A45  52                        PUSH EDX
004F6A46  E8 C5 B0 1B 00            CALL 0x006b1b10
004F6A4B  8B 86 00 01 00 00         MOV EAX,dword ptr [ESI + 0x100]
004F6A51  8B 8E FC 00 00 00         MOV ECX,dword ptr [ESI + 0xfc]
004F6A57  8B 17                     MOV EDX,dword ptr [EDI]
004F6A59  50                        PUSH EAX
004F6A5A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F6A5F  51                        PUSH ECX
004F6A60  6A FF                     PUSH -0x1
004F6A62  52                        PUSH EDX
004F6A63  50                        PUSH EAX
004F6A64  E8 D7 CB 1B 00            CALL 0x006b3640
004F6A69  8B 0F                     MOV ECX,dword ptr [EDI]
004F6A6B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F6A71  51                        PUSH ECX
004F6A72  52                        PUSH EDX
004F6A73  E8 78 D0 1B 00            CALL 0x006b3af0
004F6A78  8B 86 B4 01 00 00         MOV EAX,dword ptr [ESI + 0x1b4]
004F6A7E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004F6A81  89 8E 14 01 00 00         MOV dword ptr [ESI + 0x114],ECX
004F6A87  8B 96 B4 01 00 00         MOV EDX,dword ptr [ESI + 0x1b4]
004F6A8D  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004F6A90  89 86 18 01 00 00         MOV dword ptr [ESI + 0x118],EAX
004F6A96  8B 8E 24 01 00 00         MOV ECX,dword ptr [ESI + 0x124]
004F6A9C  8B 96 14 01 00 00         MOV EDX,dword ptr [ESI + 0x114]
004F6AA2  8B 86 1C 01 00 00         MOV EAX,dword ptr [ESI + 0x11c]
004F6AA8  2B CA                     SUB ECX,EDX
004F6AAA  8D BE 7C 01 00 00         LEA EDI,[ESI + 0x17c]
004F6AB0  03 C8                     ADD ECX,EAX
004F6AB2  89 8E 0C 01 00 00         MOV dword ptr [ESI + 0x10c],ECX
004F6AB8  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
004F6ABE  89 96 10 01 00 00         MOV dword ptr [ESI + 0x110],EDX
004F6AC4  8B 86 B4 01 00 00         MOV EAX,dword ptr [ESI + 0x1b4]
004F6ACA  8B 8E 18 01 00 00         MOV ECX,dword ptr [ESI + 0x118]
004F6AD0  8B 96 14 01 00 00         MOV EDX,dword ptr [ESI + 0x114]
004F6AD6  50                        PUSH EAX
004F6AD7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F6ADC  51                        PUSH ECX
004F6ADD  52                        PUSH EDX
004F6ADE  68 88 19 40 00            PUSH 0x401988
004F6AE3  6A 06                     PUSH 0x6
004F6AE5  57                        PUSH EDI
004F6AE6  50                        PUSH EAX
004F6AE7  E8 44 B8 1B 00            CALL 0x006b2330
004F6AEC  8B 0F                     MOV ECX,dword ptr [EDI]
004F6AEE  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F6AF4  6A 03                     PUSH 0x3
004F6AF6  51                        PUSH ECX
004F6AF7  52                        PUSH EDX
004F6AF8  E8 13 B0 1B 00            CALL 0x006b1b10
004F6AFD  8B 86 10 01 00 00         MOV EAX,dword ptr [ESI + 0x110]
004F6B03  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
004F6B09  8B 17                     MOV EDX,dword ptr [EDI]
004F6B0B  50                        PUSH EAX
004F6B0C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F6B11  51                        PUSH ECX
004F6B12  6A FF                     PUSH -0x1
004F6B14  52                        PUSH EDX
004F6B15  50                        PUSH EAX
004F6B16  E8 25 CB 1B 00            CALL 0x006b3640
004F6B1B  8B 0F                     MOV ECX,dword ptr [EDI]
004F6B1D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F6B23  51                        PUSH ECX
004F6B24  52                        PUSH EDX
004F6B25  E8 C6 CF 1B 00            CALL 0x006b3af0
004F6B2A  6A 01                     PUSH 0x1
004F6B2C  6A 00                     PUSH 0x0
004F6B2E  6A 06                     PUSH 0x6
004F6B30  6A 00                     PUSH 0x0
004F6B32  6A 00                     PUSH 0x0
004F6B34  E8 CE CA F0 FF            CALL 0x00403607
004F6B39  83 C4 08                  ADD ESP,0x8
004F6B3C  50                        PUSH EAX
004F6B3D  A1 90 67 80 00            MOV EAX,[0x00806790]
004F6B42  50                        PUSH EAX
004F6B43  E8 E8 48 21 00            CALL 0x0070b430
004F6B48  89 86 5B 02 00 00         MOV dword ptr [ESI + 0x25b],EAX
004F6B4E  C6 86 5F 02 00 00 00      MOV byte ptr [ESI + 0x25f],0x0
004F6B55  C6 86 60 02 00 00 02      MOV byte ptr [ESI + 0x260],0x2
004F6B5C  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
004F6B5F  89 8E 61 02 00 00         MOV dword ptr [ESI + 0x261],ECX
004F6B65  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004F6B6B  83 C4 14                  ADD ESP,0x14
004F6B6E  E8 E8 D0 F0 FF            CALL 0x00403c5b
004F6B73  32 DB                     XOR BL,BL
004F6B75  8D BE 48 01 00 00         LEA EDI,[ESI + 0x148]
004F6B7B  80 FB 0B                  CMP BL,0xb
004F6B7E  73 23                     JNC 0x004f6ba3
LAB_004f6b80:
004F6B80  8B 07                     MOV EAX,dword ptr [EDI]
004F6B82  85 C0                     TEST EAX,EAX
004F6B84  7C 1D                     JL 0x004f6ba3
004F6B86  8B 97 4C FF FF FF         MOV EDX,dword ptr [EDI + 0xffffff4c]
004F6B8C  8B 8F F4 FE FF FF         MOV ECX,dword ptr [EDI + 0xfffffef4]
004F6B92  52                        PUSH EDX
004F6B93  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004F6B99  51                        PUSH ECX
004F6B9A  6A FF                     PUSH -0x1
004F6B9C  50                        PUSH EAX
004F6B9D  52                        PUSH EDX
004F6B9E  E8 9D CA 1B 00            CALL 0x006b3640
LAB_004f6ba3:
004F6BA3  FE C3                     INC BL
004F6BA5  83 C7 04                  ADD EDI,0x4
004F6BA8  80 FB 0B                  CMP BL,0xb
004F6BAB  72 D3                     JC 0x004f6b80
004F6BAD  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6BB2  8B CE                     MOV ECX,ESI
004F6BB4  3C 03                     CMP AL,0x3
004F6BB6  75 07                     JNZ 0x004f6bbf
004F6BB8  E8 B1 BD F0 FF            CALL 0x0040296e
004F6BBD  EB 05                     JMP 0x004f6bc4
LAB_004f6bbf:
004F6BBF  E8 AB E9 F0 FF            CALL 0x0040556f
LAB_004f6bc4:
004F6BC4  8B CE                     MOV ECX,ESI
004F6BC6  E8 91 A7 F0 FF            CALL 0x0040135c
004F6BCB  A0 27 73 80 00            MOV AL,[0x00807327]
004F6BD0  33 C9                     XOR ECX,ECX
004F6BD2  83 E0 02                  AND EAX,0x2
004F6BD5  6A 00                     PUSH 0x0
004F6BD7  0C 01                     OR AL,0x1
004F6BD9  6A 00                     PUSH 0x0
004F6BDB  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
004F6BDE  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
004F6BE4  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
004F6BE7  80 FB 03                  CMP BL,0x3
004F6BEA  6A 00                     PUSH 0x0
004F6BEC  68 F4 1C 7C 00            PUSH 0x7c1cf4
004F6BF1  0F 94 C1                  SETZ CL
004F6BF4  68 FC 3A 00 00            PUSH 0x3afc
004F6BF9  6A 00                     PUSH 0x0
004F6BFB  8D 44 11 68               LEA EAX,[ECX + EDX*0x1 + 0x68]
004F6BFF  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
004F6C05  6A 02                     PUSH 0x2
004F6C07  68 05 B1 00 00            PUSH 0xb105
004F6C0C  68 04 B1 00 00            PUSH 0xb104
004F6C11  83 C1 08                  ADD ECX,0x8
004F6C14  8D 55 D0                  LEA EDX,[EBP + -0x30]
004F6C17  6A 00                     PUSH 0x0
004F6C19  68 E4 1C 7C 00            PUSH 0x7c1ce4
004F6C1E  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004F6C21  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004F6C24  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
004F6C27  E8 50 EB F0 FF            CALL 0x0040577c
004F6C2C  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
004F6C32  8B 7E 4C                  MOV EDI,dword ptr [ESI + 0x4c]
004F6C35  83 C4 08                  ADD ESP,0x8
004F6C38  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
004F6C3B  50                        PUSH EAX
004F6C3C  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004F6C3F  2B C1                     SUB EAX,ECX
004F6C41  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004F6C44  6A 06                     PUSH 0x6
004F6C46  2B CF                     SUB ECX,EDI
004F6C48  50                        PUSH EAX
004F6C49  51                        PUSH ECX
004F6C4A  52                        PUSH EDX
004F6C4B  6A 03                     PUSH 0x3
004F6C4D  6A 04                     PUSH 0x4
004F6C4F  8B CE                     MOV ECX,ESI
004F6C51  E8 93 AB F0 FF            CALL 0x004017e9
004F6C56  89 86 A4 09 00 00         MOV dword ptr [ESI + 0x9a4],EAX
004F6C5C  A0 27 73 80 00            MOV AL,[0x00807327]
004F6C61  83 E0 04                  AND EAX,0x4
004F6C64  6A 00                     PUSH 0x0
004F6C66  0C 02                     OR AL,0x2
004F6C68  6A 00                     PUSH 0x0
004F6C6A  D1 E8                     SHR EAX,0x1
004F6C6C  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
004F6C6F  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
004F6C75  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
004F6C78  6A 00                     PUSH 0x0
004F6C7A  33 C9                     XOR ECX,ECX
004F6C7C  68 D4 1C 7C 00            PUSH 0x7c1cd4
004F6C81  80 FB 03                  CMP BL,0x3
004F6C84  68 FD 3A 00 00            PUSH 0x3afd
004F6C89  6A 00                     PUSH 0x0
004F6C8B  6A 02                     PUSH 0x2
004F6C8D  0F 94 C1                  SETZ CL
004F6C90  68 07 B1 00 00            PUSH 0xb107
004F6C95  68 06 B1 00 00            PUSH 0xb106
004F6C9A  8D 44 11 7B               LEA EAX,[ECX + EDX*0x1 + 0x7b]
004F6C9E  6A 00                     PUSH 0x0
004F6CA0  68 C4 1C 7C 00            PUSH 0x7c1cc4
004F6CA5  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004F6CA8  E8 CF EA F0 FF            CALL 0x0040577c
004F6CAD  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004F6CB0  8B BE A4 00 00 00         MOV EDI,dword ptr [ESI + 0xa4]
004F6CB6  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004F6CB9  83 C4 08                  ADD ESP,0x8
004F6CBC  2B CF                     SUB ECX,EDI
004F6CBE  50                        PUSH EAX
004F6CBF  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
004F6CC2  6A 06                     PUSH 0x6
004F6CC4  51                        PUSH ECX
004F6CC5  2B D0                     SUB EDX,EAX
004F6CC7  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
004F6CCA  52                        PUSH EDX
004F6CCB  50                        PUSH EAX
004F6CCC  6A 03                     PUSH 0x3
004F6CCE  6A 04                     PUSH 0x4
004F6CD0  8B CE                     MOV ECX,ESI
004F6CD2  E8 12 AB F0 FF            CALL 0x004017e9
004F6CD7  6A 00                     PUSH 0x0
004F6CD9  6A 00                     PUSH 0x0
004F6CDB  6A 00                     PUSH 0x0
004F6CDD  68 B4 1C 7C 00            PUSH 0x7c1cb4
004F6CE2  68 FE 3A 00 00            PUSH 0x3afe
004F6CE7  6A 00                     PUSH 0x0
004F6CE9  6A 02                     PUSH 0x2
004F6CEB  68 09 B1 00 00            PUSH 0xb109
004F6CF0  68 08 B1 00 00            PUSH 0xb108
004F6CF5  6A 00                     PUSH 0x0
004F6CF7  68 A4 1C 7C 00            PUSH 0x7c1ca4
004F6CFC  89 86 A8 09 00 00         MOV dword ptr [ESI + 0x9a8],EAX
004F6D02  E8 75 EA F0 FF            CALL 0x0040577c
004F6D07  83 C4 08                  ADD ESP,0x8
004F6D0A  33 C9                     XOR ECX,ECX
004F6D0C  50                        PUSH EAX
004F6D0D  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6D12  3C 03                     CMP AL,0x3
004F6D14  6A 06                     PUSH 0x6
004F6D16  0F 94 C1                  SETZ CL
004F6D19  83 C1 58                  ADD ECX,0x58
004F6D1C  6A 6D                     PUSH 0x6d
004F6D1E  51                        PUSH ECX
004F6D1F  6A 01                     PUSH 0x1
004F6D21  6A 01                     PUSH 0x1
004F6D23  6A 04                     PUSH 0x4
004F6D25  8B CE                     MOV ECX,ESI
004F6D27  E8 BD AA F0 FF            CALL 0x004017e9
004F6D2C  6A 00                     PUSH 0x0
004F6D2E  6A 00                     PUSH 0x0
004F6D30  6A 00                     PUSH 0x0
004F6D32  68 94 1C 7C 00            PUSH 0x7c1c94
004F6D37  68 FF 3A 00 00            PUSH 0x3aff
004F6D3C  6A 00                     PUSH 0x0
004F6D3E  6A 02                     PUSH 0x2
004F6D40  68 0B B1 00 00            PUSH 0xb10b
004F6D45  68 0A B1 00 00            PUSH 0xb10a
004F6D4A  6A 00                     PUSH 0x0
004F6D4C  68 84 1C 7C 00            PUSH 0x7c1c84
004F6D51  89 86 AC 09 00 00         MOV dword ptr [ESI + 0x9ac],EAX
004F6D57  E8 20 EA F0 FF            CALL 0x0040577c
004F6D5C  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
004F6D62  83 C4 08                  ADD ESP,0x8
004F6D65  33 D2                     XOR EDX,EDX
004F6D67  80 FB 03                  CMP BL,0x3
004F6D6A  0F 94 C2                  SETZ DL
004F6D6D  50                        PUSH EAX
004F6D6E  6A 06                     PUSH 0x6
004F6D70  83 C2 5D                  ADD EDX,0x5d
004F6D73  68 84 00 00 00            PUSH 0x84
004F6D78  52                        PUSH EDX
004F6D79  6A 01                     PUSH 0x1
004F6D7B  6A 01                     PUSH 0x1
004F6D7D  6A 04                     PUSH 0x4
004F6D7F  8B CE                     MOV ECX,ESI
004F6D81  E8 63 AA F0 FF            CALL 0x004017e9
004F6D86  6A 00                     PUSH 0x0
004F6D88  6A 00                     PUSH 0x0
004F6D8A  6A 00                     PUSH 0x0
004F6D8C  68 74 1C 7C 00            PUSH 0x7c1c74
004F6D91  68 00 3B 00 00            PUSH 0x3b00
004F6D96  6A 00                     PUSH 0x0
004F6D98  6A 02                     PUSH 0x2
004F6D9A  68 0D B1 00 00            PUSH 0xb10d
004F6D9F  68 0C B1 00 00            PUSH 0xb10c
004F6DA4  6A 00                     PUSH 0x0
004F6DA6  68 64 1C 7C 00            PUSH 0x7c1c64
004F6DAB  89 86 B0 09 00 00         MOV dword ptr [ESI + 0x9b0],EAX
004F6DB1  E8 C6 E9 F0 FF            CALL 0x0040577c
004F6DB6  83 C4 08                  ADD ESP,0x8
004F6DB9  50                        PUSH EAX
004F6DBA  6A 06                     PUSH 0x6
004F6DBC  68 84 00 00 00            PUSH 0x84
004F6DC1  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
004F6DC7  33 C0                     XOR EAX,EAX
004F6DC9  80 F9 03                  CMP CL,0x3
004F6DCC  8B CE                     MOV ECX,ESI
004F6DCE  0F 94 C0                  SETZ AL
004F6DD1  83 C0 0D                  ADD EAX,0xd
004F6DD4  50                        PUSH EAX
004F6DD5  6A 01                     PUSH 0x1
004F6DD7  6A 01                     PUSH 0x1
004F6DD9  6A 04                     PUSH 0x4
004F6DDB  E8 09 AA F0 FF            CALL 0x004017e9
004F6DE0  6A 00                     PUSH 0x0
004F6DE2  6A 00                     PUSH 0x0
004F6DE4  6A 00                     PUSH 0x0
004F6DE6  68 54 1C 7C 00            PUSH 0x7c1c54
004F6DEB  68 01 3B 00 00            PUSH 0x3b01
004F6DF0  6A 00                     PUSH 0x0
004F6DF2  6A 02                     PUSH 0x2
004F6DF4  68 0F B1 00 00            PUSH 0xb10f
004F6DF9  68 0E B1 00 00            PUSH 0xb10e
004F6DFE  6A 00                     PUSH 0x0
004F6E00  68 44 1C 7C 00            PUSH 0x7c1c44
004F6E05  89 86 B4 09 00 00         MOV dword ptr [ESI + 0x9b4],EAX
004F6E0B  E8 6C E9 F0 FF            CALL 0x0040577c
004F6E10  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
004F6E16  83 C4 08                  ADD ESP,0x8
004F6E19  33 C9                     XOR ECX,ECX
004F6E1B  80 FB 03                  CMP BL,0x3
004F6E1E  0F 94 C1                  SETZ CL
004F6E21  50                        PUSH EAX
004F6E22  6A 06                     PUSH 0x6
004F6E24  83 C1 1C                  ADD ECX,0x1c
004F6E27  6A 6D                     PUSH 0x6d
004F6E29  51                        PUSH ECX
004F6E2A  6A 01                     PUSH 0x1
004F6E2C  6A 01                     PUSH 0x1
004F6E2E  6A 04                     PUSH 0x4
004F6E30  8B CE                     MOV ECX,ESI
004F6E32  E8 B2 A9 F0 FF            CALL 0x004017e9
004F6E37  6A 00                     PUSH 0x0
004F6E39  6A 00                     PUSH 0x0
004F6E3B  6A 00                     PUSH 0x0
004F6E3D  68 34 1C 7C 00            PUSH 0x7c1c34
004F6E42  68 03 3B 00 00            PUSH 0x3b03
004F6E47  6A 00                     PUSH 0x0
004F6E49  6A 02                     PUSH 0x2
004F6E4B  68 14 B1 00 00            PUSH 0xb114
004F6E50  68 13 B1 00 00            PUSH 0xb113
004F6E55  6A 00                     PUSH 0x0
004F6E57  68 24 1C 7C 00            PUSH 0x7c1c24
004F6E5C  89 86 B8 09 00 00         MOV dword ptr [ESI + 0x9b8],EAX
004F6E62  E8 15 E9 F0 FF            CALL 0x0040577c
004F6E67  8A 15 27 73 80 00         MOV DL,byte ptr [0x00807327]
004F6E6D  83 C4 08                  ADD ESP,0x8
004F6E70  83 E2 08                  AND EDX,0x8
004F6E73  8B CE                     MOV ECX,ESI
004F6E75  50                        PUSH EAX
004F6E76  83 CA 04                  OR EDX,0x4
004F6E79  6A 06                     PUSH 0x6
004F6E7B  6A 20                     PUSH 0x20
004F6E7D  C1 EA 02                  SHR EDX,0x2
004F6E80  6A 06                     PUSH 0x6
004F6E82  52                        PUSH EDX
004F6E83  6A 03                     PUSH 0x3
004F6E85  6A 04                     PUSH 0x4
004F6E87  E8 5D A9 F0 FF            CALL 0x004017e9
004F6E8C  89 86 BC 09 00 00         MOV dword ptr [ESI + 0x9bc],EAX
004F6E92  33 C0                     XOR EAX,EAX
004F6E94  8A 86 AE 0B 00 00         MOV AL,byte ptr [ESI + 0xbae]
004F6E9A  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
004F6E9D  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6EA2  8A C8                     MOV CL,AL
004F6EA4  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
004F6EA7  80 E9 03                  SUB CL,0x3
004F6EAA  F6 D9                     NEG CL
004F6EAC  1B C9                     SBB ECX,ECX
004F6EAE  83 E1 FD                  AND ECX,0xfffffffd
004F6EB1  83 C1 04                  ADD ECX,0x4
004F6EB4  03 CA                     ADD ECX,EDX
004F6EB6  33 D2                     XOR EDX,EDX
004F6EB8  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
004F6EBB  8B BE A4 00 00 00         MOV EDI,dword ptr [ESI + 0xa4]
004F6EC1  6A 00                     PUSH 0x0
004F6EC3  6A 00                     PUSH 0x0
004F6EC5  6A 00                     PUSH 0x0
004F6EC7  3C 03                     CMP AL,0x3
004F6EC9  6A 00                     PUSH 0x0
004F6ECB  68 02 3B 00 00            PUSH 0x3b02
004F6ED0  6A 00                     PUSH 0x0
004F6ED2  0F 95 C2                  SETNZ DL
004F6ED5  6A 02                     PUSH 0x2
004F6ED7  83 C2 65                  ADD EDX,0x65
004F6EDA  68 12 B1 00 00            PUSH 0xb112
004F6EDF  68 10 B1 00 00            PUSH 0xb110
004F6EE4  03 D7                     ADD EDX,EDI
004F6EE6  8D 45 D0                  LEA EAX,[EBP + -0x30]
004F6EE9  6A 00                     PUSH 0x0
004F6EEB  68 18 1C 7C 00            PUSH 0x7c1c18
004F6EF0  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004F6EF3  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004F6EF6  E8 81 E8 F0 FF            CALL 0x0040577c
004F6EFB  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004F6EFE  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
004F6F04  8B 5E 4C                  MOV EBX,dword ptr [ESI + 0x4c]
004F6F07  83 C4 08                  ADD ESP,0x8
004F6F0A  2B CA                     SUB ECX,EDX
004F6F0C  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004F6F0F  50                        PUSH EAX
004F6F10  33 C0                     XOR EAX,EAX
004F6F12  8A 86 AE 0B 00 00         MOV AL,byte ptr [ESI + 0xbae]
004F6F18  6A 01                     PUSH 0x1
004F6F1A  2B D3                     SUB EDX,EBX
004F6F1C  51                        PUSH ECX
004F6F1D  52                        PUSH EDX
004F6F1E  50                        PUSH EAX
004F6F1F  6A 03                     PUSH 0x3
004F6F21  6A 04                     PUSH 0x4
004F6F23  8B CE                     MOV ECX,ESI
004F6F25  E8 BF A8 F0 FF            CALL 0x004017e9
004F6F2A  33 C9                     XOR ECX,ECX
004F6F2C  89 86 C0 09 00 00         MOV dword ptr [ESI + 0x9c0],EAX
004F6F32  8A 8E 0A 0C 00 00         MOV CL,byte ptr [ESI + 0xc0a]
004F6F38  6A 00                     PUSH 0x0
004F6F3A  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
004F6F3D  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6F42  8A D0                     MOV DL,AL
004F6F44  8B 7E 4C                  MOV EDI,dword ptr [ESI + 0x4c]
004F6F47  80 EA 03                  SUB DL,0x3
004F6F4A  6A 00                     PUSH 0x0
004F6F4C  F6 DA                     NEG DL
004F6F4E  1B D2                     SBB EDX,EDX
004F6F50  33 C9                     XOR ECX,ECX
004F6F52  83 E2 03                  AND EDX,0x3
004F6F55  6A 00                     PUSH 0x0
004F6F57  81 C2 81 00 00 00         ADD EDX,0x81
004F6F5D  6A 00                     PUSH 0x0
004F6F5F  03 D7                     ADD EDX,EDI
004F6F61  8B BE A4 00 00 00         MOV EDI,dword ptr [ESI + 0xa4]
004F6F67  3C 03                     CMP AL,0x3
004F6F69  68 02 3B 00 00            PUSH 0x3b02
004F6F6E  0F 95 C1                  SETNZ CL
004F6F71  6A 00                     PUSH 0x0
004F6F73  6A 02                     PUSH 0x2
004F6F75  83 C1 65                  ADD ECX,0x65
004F6F78  68 12 B1 00 00            PUSH 0xb112
004F6F7D  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
004F6F80  68 11 B1 00 00            PUSH 0xb111
004F6F85  03 CF                     ADD ECX,EDI
004F6F87  8D 55 D0                  LEA EDX,[EBP + -0x30]
004F6F8A  6A 00                     PUSH 0x0
004F6F8C  68 18 1C 7C 00            PUSH 0x7c1c18
004F6F91  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
004F6F94  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
004F6F97  E8 E0 E7 F0 FF            CALL 0x0040577c
004F6F9C  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
004F6FA2  83 C4 08                  ADD ESP,0x8
004F6FA5  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004F6FA8  50                        PUSH EAX
004F6FA9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004F6FAC  2B C2                     SUB EAX,EDX
004F6FAE  6A 01                     PUSH 0x1
004F6FB0  50                        PUSH EAX
004F6FB1  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
004F6FB4  33 D2                     XOR EDX,EDX
004F6FB6  8A 96 0A 0C 00 00         MOV DL,byte ptr [ESI + 0xc0a]
004F6FBC  2B C8                     SUB ECX,EAX
004F6FBE  51                        PUSH ECX
004F6FBF  52                        PUSH EDX
004F6FC0  6A 03                     PUSH 0x3
004F6FC2  6A 04                     PUSH 0x4
004F6FC4  8B CE                     MOV ECX,ESI
004F6FC6  E8 1E A8 F0 FF            CALL 0x004017e9
004F6FCB  89 86 C4 09 00 00         MOV dword ptr [ESI + 0x9c4],EAX
004F6FD1  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F6FD6  3C 03                     CMP AL,0x3
004F6FD8  6A 01                     PUSH 0x1
004F6FDA  8B CE                     MOV ECX,ESI
004F6FDC  75 07                     JNZ 0x004f6fe5
004F6FDE  E8 1F C6 F0 FF            CALL 0x00403602
004F6FE3  EB 05                     JMP 0x004f6fea
LAB_004f6fe5:
004F6FE5  E8 99 BD F0 FF            CALL 0x00402d83
LAB_004f6fea:
004F6FEA  8B CE                     MOV ECX,ESI
004F6FEC  E8 AF EB F0 FF            CALL 0x00405ba0
004F6FF1  8B 0D 50 67 80 00         MOV ECX,dword ptr [0x00806750]
004F6FF7  8D 45 E0                  LEA EAX,[EBP + -0x20]
004F6FFA  8D BE 17 02 00 00         LEA EDI,[ESI + 0x217]
004F7000  50                        PUSH EAX
004F7001  68 8B 00 00 00            PUSH 0x8b
004F7006  57                        PUSH EDI
004F7007  51                        PUSH ECX
004F7008  E8 4D E6 F0 FF            CALL 0x0040565a
004F700D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004F7013  83 C4 10                  ADD ESP,0x10
004F7016  6A 46                     PUSH 0x46
004F7018  68 8B 00 00 00            PUSH 0x8b
004F701D  6A 00                     PUSH 0x0
004F701F  57                        PUSH EDI
004F7020  E8 DB F3 1E 00            CALL 0x006e6400
004F7025  A1 98 75 80 00            MOV EAX,[0x00807598]
004F702A  33 D2                     XOR EDX,EDX
004F702C  8A 15 27 73 80 00         MOV DL,byte ptr [0x00807327]
004F7032  6A 00                     PUSH 0x0
004F7034  89 90 18 04 00 00         MOV dword ptr [EAX + 0x418],EDX
004F703A  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004F7040  E8 02 E5 F0 FF            CALL 0x00405547
004F7045  8B 8E 28 01 00 00         MOV ECX,dword ptr [ESI + 0x128]
004F704B  8B 96 24 01 00 00         MOV EDX,dword ptr [ESI + 0x124]
004F7051  8B 86 20 01 00 00         MOV EAX,dword ptr [ESI + 0x120]
004F7057  81 E9 9B 00 00 00         SUB ECX,0x9b
004F705D  51                        PUSH ECX
004F705E  8B 8E 1C 01 00 00         MOV ECX,dword ptr [ESI + 0x11c]
004F7064  52                        PUSH EDX
004F7065  50                        PUSH EAX
004F7066  51                        PUSH ECX
004F7067  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004F706D  E8 FB AA F0 FF            CALL 0x00401b6d
004F7072  8D 5E 18                  LEA EBX,[ESI + 0x18]
004F7075  8B CE                     MOV ECX,ESI
004F7077  53                        PUSH EBX
004F7078  6A 00                     PUSH 0x0
004F707A  6A 0F                     PUSH 0xf
004F707C  C7 46 28 03 44 00 00      MOV dword ptr [ESI + 0x28],0x4403
004F7083  E8 78 EF 1E 00            CALL 0x006e6000
004F7088  F6 05 27 73 80 00 08      TEST byte ptr [0x00807327],0x8
004F708F  74 12                     JZ 0x004f70a3
004F7091  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004F7097  8D 86 27 02 00 00         LEA EAX,[ESI + 0x227]
004F709D  50                        PUSH EAX
004F709E  E8 5D F4 1E 00            CALL 0x006e6500
LAB_004f70a3:
004F70A3  B9 08 00 00 00            MOV ECX,0x8
004F70A8  33 C0                     XOR EAX,EAX
004F70AA  8B FB                     MOV EDI,EBX
004F70AC  53                        PUSH EBX
004F70AD  F3 AB                     STOSD.REP ES:EDI
004F70AF  C7 46 28 13 00 00 00      MOV dword ptr [ESI + 0x28],0x13
004F70B6  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
004F70B9  6A 01                     PUSH 0x1
004F70BB  6A 03                     PUSH 0x3
004F70BD  8B CE                     MOV ECX,ESI
004F70BF  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
004F70C2  E8 39 EF 1E 00            CALL 0x006e6000
004F70C7  A0 F9 C4 80 00            MOV AL,[0x0080c4f9]
004F70CC  84 C0                     TEST AL,AL
004F70CE  74 24                     JZ 0x004f70f4
004F70D0  C7 46 28 C6 5D 00 00      MOV dword ptr [ESI + 0x28],0x5dc6
004F70D7  C7 46 2C D7 C4 80 00      MOV dword ptr [ESI + 0x2c],0x80c4d7
004F70DE  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004F70E4  85 C9                     TEST ECX,ECX
004F70E6  74 05                     JZ 0x004f70ed
004F70E8  8B 01                     MOV EAX,dword ptr [ECX]
004F70EA  53                        PUSH EBX
004F70EB  FF 10                     CALL dword ptr [EAX]
LAB_004f70ed:
004F70ED  C6 05 F9 C4 80 00 00      MOV byte ptr [0x0080c4f9],0x0
LAB_004f70f4:
004F70F4  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
004F70F7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F70FD  5F                        POP EDI
004F70FE  5E                        POP ESI
004F70FF  5B                        POP EBX
004F7100  8B E5                     MOV ESP,EBP
004F7102  5D                        POP EBP
004F7103  C3                        RET
LAB_004f7104:
004F7104  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
004F7107  68 FC 1B 7C 00            PUSH 0x7c1bfc
004F710C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F7111  56                        PUSH ESI
004F7112  6A 00                     PUSH 0x0
004F7114  68 BF 01 00 00            PUSH 0x1bf
004F7119  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F711E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F7124  E8 A7 63 1B 00            CALL 0x006ad4d0
004F7129  83 C4 18                  ADD ESP,0x18
004F712C  85 C0                     TEST EAX,EAX
004F712E  74 01                     JZ 0x004f7131
004F7130  CC                        INT3
LAB_004f7131:
004F7131  68 BF 01 00 00            PUSH 0x1bf
004F7136  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F713B  6A 00                     PUSH 0x0
004F713D  56                        PUSH ESI
004F713E  E8 FD EC 1A 00            CALL 0x006a5e40
004F7143  5F                        POP EDI
004F7144  5E                        POP ESI
004F7145  5B                        POP EBX
004F7146  8B E5                     MOV ESP,EBP
004F7148  5D                        POP EBP
004F7149  C3                        RET
