FUN_0044d320:
0044D320  55                        PUSH EBP
0044D321  8B EC                     MOV EBP,ESP
0044D323  83 EC 14                  SUB ESP,0x14
0044D326  33 C0                     XOR EAX,EAX
0044D328  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0044D32B  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044D330  53                        PUSH EBX
0044D331  56                        PUSH ESI
0044D332  57                        PUSH EDI
0044D333  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D336  6A 0C                     PUSH 0xc
0044D338  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0044D33F  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D342  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D345  C1 E1 04                  SHL ECX,0x4
0044D348  03 C8                     ADD ECX,EAX
0044D34A  8B 04 4D 8D 4F 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4f8d]
0044D351  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044D354  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0044D357  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0044D35A  E8 11 D9 25 00            CALL 0x006aac70
0044D35F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0044D362  8B F8                     MOV EDI,EAX
0044D364  81 FB 00 10 00 00         CMP EBX,0x1000
0044D36A  B9 00 08 00 00            MOV ECX,0x800
0044D36F  B8 01 00 00 00            MOV EAX,0x1
0044D374  BE 00 04 00 00            MOV ESI,0x400
0044D379  0F 87 E8 01 00 00         JA 0x0044d567
0044D37F  0F 84 BC 01 00 00         JZ 0x0044d541
0044D385  83 FB 40                  CMP EBX,0x40
0044D388  0F 87 F1 00 00 00         JA 0x0044d47f
0044D38E  0F 84 C5 00 00 00         JZ 0x0044d459
0044D394  8D 43 FF                  LEA EAX,[EBX + -0x1]
0044D397  83 F8 27                  CMP EAX,0x27
0044D39A  0F 87 64 0A 00 00         JA 0x0044de04
0044D3A0  33 D2                     XOR EDX,EDX
0044D3A2  8A 90 48 DE 44 00         MOV DL,byte ptr [EAX + 0x44de48]
switchD_0044d3a8::switchD:
0044D3A8  FF 24 95 34 DE 44 00      JMP dword ptr [EDX*0x4 + 0x44de34]
switchD_0044d3a8::caseD_1:
0044D3AF  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D3B4  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D3BA  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D3C0  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D3C4  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D3CA  66 C7 47 0A 01 07         MOV word ptr [EDI + 0xa],0x701
0044D3D0  B8 01 00 00 00            MOV EAX,0x1
0044D3D5  E9 36 03 00 00            JMP 0x0044d710
switchD_0044d3a8::caseD_2:
0044D3DA  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D3DF  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D3E5  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D3EB  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D3EF  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D3F5  66 89 4F 0A               MOV word ptr [EDI + 0xa],CX
0044D3F9  B8 01 00 00 00            MOV EAX,0x1
0044D3FE  E9 0D 03 00 00            JMP 0x0044d710
switchD_0044d3a8::caseD_10:
0044D403  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D408  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D40E  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D414  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D418  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D41E  66 C7 47 0A 01 0A         MOV word ptr [EDI + 0xa],0xa01
0044D424  B8 01 00 00 00            MOV EAX,0x1
0044D429  E9 E2 02 00 00            JMP 0x0044d710
switchD_0044d3a8::caseD_28:
0044D42E  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D433  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D439  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D43F  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D443  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D449  66 C7 47 0A 01 0B         MOV word ptr [EDI + 0xa],0xb01
0044D44F  B8 01 00 00 00            MOV EAX,0x1
0044D454  E9 B7 02 00 00            JMP 0x0044d710
LAB_0044d459:
0044D459  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D45E  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D464  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D46A  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D46E  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D474  66 C7 47 0A 00 09         MOV word ptr [EDI + 0xa],0x900
0044D47A  E9 91 02 00 00            JMP 0x0044d710
LAB_0044d47f:
0044D47F  81 FB 00 02 00 00         CMP EBX,0x200
0044D485  77 62                     JA 0x0044d4e9
0044D487  74 3A                     JZ 0x0044d4c3
0044D489  81 FB 80 00 00 00         CMP EBX,0x80
0044D48F  74 0C                     JZ 0x0044d49d
0044D491  81 FB 00 01 00 00         CMP EBX,0x100
0044D497  0F 85 67 09 00 00         JNZ 0x0044de04
LAB_0044d49d:
0044D49D  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D4A2  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D4A8  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D4AE  66 C7 47 06 00 00         MOV word ptr [EDI + 0x6],0x0
0044D4B4  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D4BA  66 89 47 0A               MOV word ptr [EDI + 0xa],AX
0044D4BE  E9 4D 02 00 00            JMP 0x0044d710
LAB_0044d4c3:
0044D4C3  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D4C8  66 C7 47 02 01 11         MOV word ptr [EDI + 0x2],0x1101
0044D4CE  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D4D4  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D4D8  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D4DE  66 C7 47 0A 01 12         MOV word ptr [EDI + 0xa],0x1201
0044D4E4  E9 27 02 00 00            JMP 0x0044d710
LAB_0044d4e9:
0044D4E9  3B DE                     CMP EBX,ESI
0044D4EB  74 2E                     JZ 0x0044d51b
0044D4ED  3B D9                     CMP EBX,ECX
0044D4EF  0F 85 0F 09 00 00         JNZ 0x0044de04
0044D4F5  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D4FA  66 C7 47 02 01 0E         MOV word ptr [EDI + 0x2],0xe01
0044D500  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D506  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D50A  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D510  66 C7 47 0A 01 10         MOV word ptr [EDI + 0xa],0x1001
0044D516  E9 F5 01 00 00            JMP 0x0044d710
LAB_0044d51b:
0044D51B  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D520  66 C7 47 02 01 0D         MOV word ptr [EDI + 0x2],0xd01
0044D526  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D52C  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D530  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D536  66 C7 47 0A 01 13         MOV word ptr [EDI + 0xa],0x1301
0044D53C  E9 CF 01 00 00            JMP 0x0044d710
LAB_0044d541:
0044D541  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D546  66 C7 47 02 00 03         MOV word ptr [EDI + 0x2],0x300
0044D54C  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D552  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D556  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D55C  66 C7 47 0A 01 0B         MOV word ptr [EDI + 0xa],0xb01
0044D562  E9 A9 01 00 00            JMP 0x0044d710
LAB_0044d567:
0044D567  81 FB 00 00 10 00         CMP EBX,0x100000
0044D56D  0F 87 F7 00 00 00         JA 0x0044d66a
0044D573  0F 84 E1 00 00 00         JZ 0x0044d65a
0044D579  81 FB 00 00 02 00         CMP EBX,0x20000
0044D57F  0F 87 8C 00 00 00         JA 0x0044d611
0044D585  74 62                     JZ 0x0044d5e9
0044D587  81 FB 00 20 00 00         CMP EBX,0x2000
0044D58D  74 34                     JZ 0x0044d5c3
0044D58F  81 FB 00 00 01 00         CMP EBX,0x10000
0044D595  0F 85 69 08 00 00         JNZ 0x0044de04
0044D59B  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D5A0  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D5A6  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
LAB_0044d5ac:
0044D5AC  66 C7 47 06 00 48         MOV word ptr [EDI + 0x6],0x4800
0044D5B2  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D5B8  66 C7 47 0A 01 07         MOV word ptr [EDI + 0xa],0x701
0044D5BE  E9 4D 01 00 00            JMP 0x0044d710
LAB_0044d5c3:
0044D5C3  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D5C8  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D5CE  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D5D4  66 89 77 06               MOV word ptr [EDI + 0x6],SI
0044D5D8  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D5DE  66 C7 47 0A 01 06         MOV word ptr [EDI + 0xa],0x601
0044D5E4  E9 27 01 00 00            JMP 0x0044d710
LAB_0044d5e9:
0044D5E9  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D5EE  66 C7 47 02 01 11         MOV word ptr [EDI + 0x2],0x1101
0044D5F4  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D5FA  66 C7 47 06 00 48         MOV word ptr [EDI + 0x6],0x4800
0044D600  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D606  66 C7 47 0A 01 12         MOV word ptr [EDI + 0xa],0x1201
0044D60C  E9 FF 00 00 00            JMP 0x0044d710
LAB_0044d611:
0044D611  81 FB 00 00 04 00         CMP EBX,0x40000
0044D617  74 34                     JZ 0x0044d64d
0044D619  81 FB 00 00 08 00         CMP EBX,0x80000
0044D61F  0F 85 DF 07 00 00         JNZ 0x0044de04
0044D625  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D62A  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D630  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D636  66 C7 47 06 00 48         MOV word ptr [EDI + 0x6],0x4800
0044D63C  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D642  66 C7 47 0A 00 49         MOV word ptr [EDI + 0xa],0x4900
0044D648  E9 C3 00 00 00            JMP 0x0044d710
LAB_0044d64d:
0044D64D  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D652  66 C7 47 02 01 0E         MOV word ptr [EDI + 0x2],0xe01
0044D658  EB 7D                     JMP 0x0044d6d7
LAB_0044d65a:
0044D65A  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D65F  66 C7 47 02 01 10         MOV word ptr [EDI + 0x2],0x1001
0044D665  E9 8E 00 00 00            JMP 0x0044d6f8
LAB_0044d66a:
0044D66A  81 FB 00 00 80 00         CMP EBX,0x800000
0044D670  77 46                     JA 0x0044d6b8
0044D672  74 58                     JZ 0x0044d6cc
0044D674  81 FB 00 00 20 00         CMP EBX,0x200000
0044D67A  74 2F                     JZ 0x0044d6ab
0044D67C  81 FB 00 00 40 00         CMP EBX,0x400000
0044D682  0F 85 7C 07 00 00         JNZ 0x0044de04
0044D688  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D68D  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
0044D693  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D699  66 C7 47 06 00 48         MOV word ptr [EDI + 0x6],0x4800
0044D69F  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D6A5  66 89 4F 0A               MOV word ptr [EDI + 0xa],CX
0044D6A9  EB 65                     JMP 0x0044d710
LAB_0044d6ab:
0044D6AB  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D6B0  66 C7 47 02 01 13         MOV word ptr [EDI + 0x2],0x1301
0044D6B6  EB 40                     JMP 0x0044d6f8
LAB_0044d6b8:
0044D6B8  81 FB 00 00 00 01         CMP EBX,0x1000000
0044D6BE  74 2F                     JZ 0x0044d6ef
0044D6C0  81 FB 00 00 00 02         CMP EBX,0x2000000
0044D6C6  0F 85 38 07 00 00         JNZ 0x0044de04
LAB_0044d6cc:
0044D6CC  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D6D1  66 C7 47 02 01 03         MOV word ptr [EDI + 0x2],0x301
LAB_0044d6d7:
0044D6D7  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D6DD  66 C7 47 06 00 48         MOV word ptr [EDI + 0x6],0x4800
0044D6E3  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D6E9  66 89 47 0A               MOV word ptr [EDI + 0xa],AX
0044D6ED  EB 21                     JMP 0x0044d710
LAB_0044d6ef:
0044D6EF  66 C7 07 01 02            MOV word ptr [EDI],0x201
0044D6F4  66 89 47 02               MOV word ptr [EDI + 0x2],AX
LAB_0044d6f8:
0044D6F8  66 C7 47 04 01 01         MOV word ptr [EDI + 0x4],0x101
0044D6FE  66 C7 47 06 00 48         MOV word ptr [EDI + 0x6],0x4800
0044D704  66 C7 47 08 01 2F         MOV word ptr [EDI + 0x8],0x2f01
0044D70A  66 C7 47 0A 00 18         MOV word ptr [EDI + 0xa],0x1800
LAB_0044d710:
0044D710  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044D713  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0044D71A  85 C9                     TEST ECX,ECX
0044D71C  0F 8E CB 06 00 00         JLE 0x0044dded
LAB_0044d722:
0044D722  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044D725  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0044D728  8D 45 EC                  LEA EAX,[EBP + -0x14]
0044D72B  50                        PUSH EAX
0044D72C  E8 3F F5 25 00            CALL 0x006acc70
0044D731  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0044D734  66 3D FF FF               CMP AX,0xffff
0044D738  0F 84 91 06 00 00         JZ 0x0044ddcf
0044D73E  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044D744  6A 01                     PUSH 0x1
0044D746  50                        PUSH EAX
0044D747  51                        PUSH ECX
0044D748  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044D74B  E8 6A 51 FB FF            CALL 0x004028ba
0044D750  8B F0                     MOV ESI,EAX
0044D752  85 F6                     TEST ESI,ESI
0044D754  0F 84 75 06 00 00         JZ 0x0044ddcf
0044D75A  81 FB 00 10 00 00         CMP EBX,0x1000
0044D760  0F 87 7C 03 00 00         JA 0x0044dae2
0044D766  0F 84 FF 02 00 00         JZ 0x0044da6b
0044D76C  83 FB 40                  CMP EBX,0x40
0044D76F  0F 87 95 01 00 00         JA 0x0044d90a
0044D775  0F 84 1F 01 00 00         JZ 0x0044d89a
0044D77B  8D 43 FF                  LEA EAX,[EBX + -0x1]
0044D77E  83 F8 27                  CMP EAX,0x27
0044D781  0F 87 48 06 00 00         JA 0x0044ddcf
0044D787  33 D2                     XOR EDX,EDX
0044D789  8A 90 84 DE 44 00         MOV DL,byte ptr [EAX + 0x44de84]
switchD_0044d78f::switchD:
0044D78F  FF 24 95 70 DE 44 00      JMP dword ptr [EDX*0x4 + 0x44de70]
switchD_0044d78f::caseD_1:
0044D796  8B 06                     MOV EAX,dword ptr [ESI]
0044D798  8B CE                     MOV ECX,ESI
0044D79A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044D79D  83 F8 06                  CMP EAX,0x6
0044D7A0  74 09                     JZ 0x0044d7ab
0044D7A2  83 F8 12                  CMP EAX,0x12
0044D7A5  0F 85 24 06 00 00         JNZ 0x0044ddcf
LAB_0044d7ab:
0044D7AB  8B CE                     MOV ECX,ESI
0044D7AD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044D7B4  E8 27 6C FB FF            CALL 0x004043e0
0044D7B9  85 C0                     TEST EAX,EAX
0044D7BB  0F 8E 0E 06 00 00         JLE 0x0044ddcf
0044D7C1  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044D7C5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D7C8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D7CB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D7CE  C1 E1 04                  SHL ECX,0x4
0044D7D1  03 C8                     ADD ECX,EAX
0044D7D3  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044D7DC  0F 87 2D 06 00 00         JA 0x0044de0f
0044D7E2  E9 E8 05 00 00            JMP 0x0044ddcf
switchD_0044d78f::caseD_2:
0044D7E7  8B 16                     MOV EDX,dword ptr [ESI]
0044D7E9  8B CE                     MOV ECX,ESI
0044D7EB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044D7EE  83 F8 05                  CMP EAX,0x5
0044D7F1  74 0E                     JZ 0x0044d801
0044D7F3  83 F8 0B                  CMP EAX,0xb
0044D7F6  74 09                     JZ 0x0044d801
0044D7F8  83 F8 11                  CMP EAX,0x11
0044D7FB  0F 85 CE 05 00 00         JNZ 0x0044ddcf
LAB_0044d801:
0044D801  8A 47 06                  MOV AL,byte ptr [EDI + 0x6]
0044D804  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044D80B  84 C0                     TEST AL,AL
0044D80D  0F 85 12 04 00 00         JNZ 0x0044dc25
0044D813  8B CE                     MOV ECX,ESI
0044D815  E8 C6 6B FB FF            CALL 0x004043e0
0044D81A  85 C0                     TEST EAX,EAX
0044D81C  0F 8E 03 04 00 00         JLE 0x0044dc25
0044D822  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044D826  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D829  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D82C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D82F  C1 E1 04                  SHL ECX,0x4
0044D832  03 C8                     ADD ECX,EAX
0044D834  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044D83D  0F 86 E2 03 00 00         JBE 0x0044dc25
0044D843  66 C7 47 06 01 04         MOV word ptr [EDI + 0x6],0x401
0044D849  E9 D7 03 00 00            JMP 0x0044dc25
switchD_0044d78f::caseD_10:
0044D84E  8B 16                     MOV EDX,dword ptr [ESI]
0044D850  8B CE                     MOV ECX,ESI
0044D852  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044D855  83 F8 17                  CMP EAX,0x17
0044D858  0F 85 71 05 00 00         JNZ 0x0044ddcf
0044D85E  8B CE                     MOV ECX,ESI
0044D860  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044D867  E8 74 6B FB FF            CALL 0x004043e0
0044D86C  85 C0                     TEST EAX,EAX
0044D86E  0F 8E 5B 05 00 00         JLE 0x0044ddcf
0044D874  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044D878  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D87B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D87E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D881  C1 E1 04                  SHL ECX,0x4
0044D884  03 C8                     ADD ECX,EAX
0044D886  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044D88F  0F 87 7A 05 00 00         JA 0x0044de0f
0044D895  E9 35 05 00 00            JMP 0x0044ddcf
LAB_0044d89a:
0044D89A  8B 16                     MOV EDX,dword ptr [ESI]
0044D89C  8B CE                     MOV ECX,ESI
0044D89E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044D8A1  83 F8 04                  CMP EAX,0x4
0044D8A4  0F 85 25 05 00 00         JNZ 0x0044ddcf
0044D8AA  8A 47 06                  MOV AL,byte ptr [EDI + 0x6]
0044D8AD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044D8B4  84 C0                     TEST AL,AL
0044D8B6  75 2E                     JNZ 0x0044d8e6
0044D8B8  8B CE                     MOV ECX,ESI
0044D8BA  E8 21 6B FB FF            CALL 0x004043e0
0044D8BF  85 C0                     TEST EAX,EAX
0044D8C1  7E 23                     JLE 0x0044d8e6
0044D8C3  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044D8C7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D8CA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D8CD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D8D0  C1 E1 04                  SHL ECX,0x4
0044D8D3  03 C8                     ADD ECX,EAX
0044D8D5  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044D8DE  76 06                     JBE 0x0044d8e6
0044D8E0  66 C7 47 06 01 04         MOV word ptr [EDI + 0x6],0x401
LAB_0044d8e6:
0044D8E6  8A 47 0A                  MOV AL,byte ptr [EDI + 0xa]
0044D8E9  84 C0                     TEST AL,AL
0044D8EB  0F 85 DE 04 00 00         JNZ 0x0044ddcf
0044D8F1  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
0044D8F7  85 C0                     TEST EAX,EAX
0044D8F9  0F 8E D0 04 00 00         JLE 0x0044ddcf
0044D8FF  66 C7 47 0A 01 09         MOV word ptr [EDI + 0xa],0x901
0044D905  E9 C5 04 00 00            JMP 0x0044ddcf
LAB_0044d90a:
0044D90A  81 FB 00 02 00 00         CMP EBX,0x200
0044D910  0F 87 85 00 00 00         JA 0x0044d99b
0044D916  74 32                     JZ 0x0044d94a
0044D918  81 FB 80 00 00 00         CMP EBX,0x80
0044D91E  74 0C                     JZ 0x0044d92c
0044D920  81 FB 00 01 00 00         CMP EBX,0x100
0044D926  0F 85 A3 04 00 00         JNZ 0x0044ddcf
LAB_0044d92c:
0044D92C  8B 16                     MOV EDX,dword ptr [ESI]
0044D92E  8B CE                     MOV ECX,ESI
0044D930  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044D933  83 F8 09                  CMP EAX,0x9
0044D936  0F 84 C8 04 00 00         JZ 0x0044de04
0044D93C  83 F8 15                  CMP EAX,0x15
0044D93F  0F 84 BF 04 00 00         JZ 0x0044de04
0044D945  E9 85 04 00 00            JMP 0x0044ddcf
LAB_0044d94a:
0044D94A  8B 06                     MOV EAX,dword ptr [ESI]
0044D94C  8B CE                     MOV ECX,ESI
0044D94E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044D951  83 F8 08                  CMP EAX,0x8
0044D954  74 09                     JZ 0x0044d95f
0044D956  83 F8 14                  CMP EAX,0x14
0044D959  0F 85 70 04 00 00         JNZ 0x0044ddcf
LAB_0044d95f:
0044D95F  8B CE                     MOV ECX,ESI
0044D961  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044D968  E8 73 6A FB FF            CALL 0x004043e0
0044D96D  85 C0                     TEST EAX,EAX
0044D96F  0F 8E 5A 04 00 00         JLE 0x0044ddcf
0044D975  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044D979  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D97C  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D97F  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D982  C1 E1 04                  SHL ECX,0x4
0044D985  03 C8                     ADD ECX,EAX
0044D987  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044D990  0F 87 79 04 00 00         JA 0x0044de0f
0044D996  E9 34 04 00 00            JMP 0x0044ddcf
LAB_0044d99b:
0044D99B  81 FB 00 04 00 00         CMP EBX,0x400
0044D9A1  74 5D                     JZ 0x0044da00
0044D9A3  81 FB 00 08 00 00         CMP EBX,0x800
0044D9A9  0F 85 20 04 00 00         JNZ 0x0044ddcf
0044D9AF  8B 16                     MOV EDX,dword ptr [ESI]
0044D9B1  8B CE                     MOV ECX,ESI
0044D9B3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044D9B6  83 F8 0C                  CMP EAX,0xc
0044D9B9  74 09                     JZ 0x0044d9c4
0044D9BB  83 F8 18                  CMP EAX,0x18
0044D9BE  0F 85 0B 04 00 00         JNZ 0x0044ddcf
LAB_0044d9c4:
0044D9C4  8B CE                     MOV ECX,ESI
0044D9C6  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044D9CD  E8 0E 6A FB FF            CALL 0x004043e0
0044D9D2  85 C0                     TEST EAX,EAX
0044D9D4  0F 8E F5 03 00 00         JLE 0x0044ddcf
0044D9DA  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044D9DE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044D9E1  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044D9E4  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044D9E7  C1 E1 04                  SHL ECX,0x4
0044D9EA  03 C8                     ADD ECX,EAX
0044D9EC  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044D9F5  0F 87 14 04 00 00         JA 0x0044de0f
0044D9FB  E9 CF 03 00 00            JMP 0x0044ddcf
LAB_0044da00:
0044DA00  8B 16                     MOV EDX,dword ptr [ESI]
0044DA02  8B CE                     MOV ECX,ESI
0044DA04  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044DA07  83 F8 07                  CMP EAX,0x7
0044DA0A  74 09                     JZ 0x0044da15
0044DA0C  83 F8 13                  CMP EAX,0x13
0044DA0F  0F 85 BA 03 00 00         JNZ 0x0044ddcf
LAB_0044da15:
0044DA15  8A 47 06                  MOV AL,byte ptr [EDI + 0x6]
0044DA18  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DA1F  84 C0                     TEST AL,AL
0044DA21  75 2E                     JNZ 0x0044da51
0044DA23  8B CE                     MOV ECX,ESI
0044DA25  E8 B6 69 FB FF            CALL 0x004043e0
0044DA2A  85 C0                     TEST EAX,EAX
0044DA2C  7E 23                     JLE 0x0044da51
0044DA2E  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DA32  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044DA35  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044DA38  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044DA3B  C1 E1 04                  SHL ECX,0x4
0044DA3E  03 C8                     ADD ECX,EAX
0044DA40  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044DA49  76 06                     JBE 0x0044da51
0044DA4B  66 C7 47 06 01 04         MOV word ptr [EDI + 0x6],0x401
LAB_0044da51:
0044DA51  8B CE                     MOV ECX,ESI
0044DA53  E8 B0 4B FB FF            CALL 0x00402608
0044DA58  85 C0                     TEST EAX,EAX
0044DA5A  0F 86 6F 03 00 00         JBE 0x0044ddcf
0044DA60  66 C7 47 0A 01 14         MOV word ptr [EDI + 0xa],0x1401
0044DA66  E9 64 03 00 00            JMP 0x0044ddcf
switchD_0044d78f::caseD_28:
0044DA6B  8B 16                     MOV EDX,dword ptr [ESI]
0044DA6D  8B CE                     MOV ECX,ESI
0044DA6F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044DA72  83 F8 16                  CMP EAX,0x16
0044DA75  74 09                     JZ 0x0044da80
0044DA77  83 F8 25                  CMP EAX,0x25
0044DA7A  0F 85 4F 03 00 00         JNZ 0x0044ddcf
LAB_0044da80:
0044DA80  8A 47 06                  MOV AL,byte ptr [EDI + 0x6]
0044DA83  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DA8A  84 C0                     TEST AL,AL
0044DA8C  75 2E                     JNZ 0x0044dabc
0044DA8E  8B CE                     MOV ECX,ESI
0044DA90  E8 4B 69 FB FF            CALL 0x004043e0
0044DA95  85 C0                     TEST EAX,EAX
0044DA97  7E 23                     JLE 0x0044dabc
0044DA99  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DA9D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044DAA0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044DAA3  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044DAA6  C1 E1 04                  SHL ECX,0x4
0044DAA9  03 C8                     ADD ECX,EAX
0044DAAB  66 83 3C 4D 7B 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7b],0x0
0044DAB4  76 06                     JBE 0x0044dabc
0044DAB6  66 C7 47 06 01 04         MOV word ptr [EDI + 0x6],0x401
LAB_0044dabc:
0044DABC  33 D2                     XOR EDX,EDX
0044DABE  8A 57 0B                  MOV DL,byte ptr [EDI + 0xb]
0044DAC1  80 FA 0B                  CMP DL,0xb
0044DAC4  0F 85 05 03 00 00         JNZ 0x0044ddcf
0044DACA  83 BE 32 07 00 00 01      CMP dword ptr [ESI + 0x732],0x1
0044DAD1  0F 85 F8 02 00 00         JNZ 0x0044ddcf
0044DAD7  66 C7 47 0A 01 0C         MOV word ptr [EDI + 0xa],0xc01
0044DADD  E9 ED 02 00 00            JMP 0x0044ddcf
LAB_0044dae2:
0044DAE2  81 FB 00 00 10 00         CMP EBX,0x100000
0044DAE8  0F 87 B3 00 00 00         JA 0x0044dba1
0044DAEE  74 48                     JZ 0x0044db38
0044DAF0  81 FB 00 00 02 00         CMP EBX,0x20000
0044DAF6  77 23                     JA 0x0044db1b
0044DAF8  0F 84 E5 01 00 00         JZ 0x0044dce3
0044DAFE  81 FB 00 20 00 00         CMP EBX,0x2000
0044DB04  0F 84 BA FE FF FF         JZ 0x0044d9c4
0044DB0A  81 FB 00 00 01 00         CMP EBX,0x10000
0044DB10  0F 84 CD 01 00 00         JZ 0x0044dce3
0044DB16  E9 B4 02 00 00            JMP 0x0044ddcf
LAB_0044db1b:
0044DB1B  81 FB 00 00 04 00         CMP EBX,0x40000
0044DB21  0F 84 BC 01 00 00         JZ 0x0044dce3
0044DB27  81 FB 00 00 08 00         CMP EBX,0x80000
0044DB2D  0F 84 B0 01 00 00         JZ 0x0044dce3
0044DB33  E9 97 02 00 00            JMP 0x0044ddcf
LAB_0044db38:
0044DB38  8B 16                     MOV EDX,dword ptr [ESI]
0044DB3A  8B CE                     MOV ECX,ESI
0044DB3C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044DB3F  83 F8 1D                  CMP EAX,0x1d
0044DB42  0F 85 87 02 00 00         JNZ 0x0044ddcf
0044DB48  8B CE                     MOV ECX,ESI
0044DB4A  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DB51  E8 3E 5A FB FF            CALL 0x00403594
0044DB56  85 C0                     TEST EAX,EAX
0044DB58  7E 37                     JLE 0x0044db91
0044DB5A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044DB5D  33 C0                     XOR EAX,EAX
0044DB5F  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044DB64  50                        PUSH EAX
0044DB65  E8 3D 5B FB FF            CALL 0x004036a7
0044DB6A  85 C0                     TEST EAX,EAX
0044DB6C  7E 23                     JLE 0x0044db91
0044DB6E  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DB72  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044DB75  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044DB78  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044DB7B  C1 E1 04                  SHL ECX,0x4
0044DB7E  03 C8                     ADD ECX,EAX
0044DB80  66 83 3C 4D 7F 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7f],0x0
0044DB89  76 06                     JBE 0x0044db91
0044DB8B  66 C7 47 06 01 48         MOV word ptr [EDI + 0x6],0x4801
LAB_0044db91:
0044DB91  33 D2                     XOR EDX,EDX
0044DB93  6A 5F                     PUSH 0x5f
0044DB95  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0044DB9B  52                        PUSH EDX
0044DB9C  E9 1D 01 00 00            JMP 0x0044dcbe
LAB_0044dba1:
0044DBA1  81 FB 00 00 80 00         CMP EBX,0x800000
0044DBA7  0F 87 58 01 00 00         JA 0x0044dd05
0044DBAD  0F 84 30 01 00 00         JZ 0x0044dce3
0044DBB3  81 FB 00 00 20 00         CMP EBX,0x200000
0044DBB9  0F 84 8A 00 00 00         JZ 0x0044dc49
0044DBBF  81 FB 00 00 40 00         CMP EBX,0x400000
0044DBC5  0F 85 04 02 00 00         JNZ 0x0044ddcf
0044DBCB  8B 06                     MOV EAX,dword ptr [ESI]
0044DBCD  8B CE                     MOV ECX,ESI
0044DBCF  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044DBD2  83 F8 21                  CMP EAX,0x21
0044DBD5  0F 85 F4 01 00 00         JNZ 0x0044ddcf
0044DBDB  8B CE                     MOV ECX,ESI
0044DBDD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DBE4  E8 AB 59 FB FF            CALL 0x00403594
0044DBE9  85 C0                     TEST EAX,EAX
0044DBEB  7E 38                     JLE 0x0044dc25
0044DBED  33 C9                     XOR ECX,ECX
0044DBEF  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044DBF5  51                        PUSH ECX
0044DBF6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044DBF9  E8 A9 5A FB FF            CALL 0x004036a7
0044DBFE  85 C0                     TEST EAX,EAX
0044DC00  7E 23                     JLE 0x0044dc25
0044DC02  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DC06  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044DC09  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0044DC0C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0044DC0F  C1 E2 04                  SHL EDX,0x4
0044DC12  03 D0                     ADD EDX,EAX
0044DC14  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
0044DC1D  76 06                     JBE 0x0044dc25
0044DC1F  66 C7 47 06 01 48         MOV word ptr [EDI + 0x6],0x4801
LAB_0044dc25:
0044DC25  8A 47 0A                  MOV AL,byte ptr [EDI + 0xa]
0044DC28  84 C0                     TEST AL,AL
0044DC2A  0F 85 9F 01 00 00         JNZ 0x0044ddcf
0044DC30  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
0044DC36  85 C0                     TEST EAX,EAX
0044DC38  0F 8E 91 01 00 00         JLE 0x0044ddcf
0044DC3E  66 C7 47 0A 01 08         MOV word ptr [EDI + 0xa],0x801
0044DC44  E9 86 01 00 00            JMP 0x0044ddcf
LAB_0044dc49:
0044DC49  8B 06                     MOV EAX,dword ptr [ESI]
0044DC4B  8B CE                     MOV ECX,ESI
0044DC4D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0044DC50  83 F8 1B                  CMP EAX,0x1b
0044DC53  0F 85 76 01 00 00         JNZ 0x0044ddcf
0044DC59  8B CE                     MOV ECX,ESI
0044DC5B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DC62  E8 2D 59 FB FF            CALL 0x00403594
0044DC67  85 C0                     TEST EAX,EAX
0044DC69  7E 38                     JLE 0x0044dca3
0044DC6B  33 C9                     XOR ECX,ECX
0044DC6D  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044DC73  51                        PUSH ECX
0044DC74  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044DC77  E8 2B 5A FB FF            CALL 0x004036a7
0044DC7C  85 C0                     TEST EAX,EAX
0044DC7E  7E 23                     JLE 0x0044dca3
0044DC80  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DC84  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044DC87  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0044DC8A  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0044DC8D  C1 E2 04                  SHL EDX,0x4
0044DC90  03 D0                     ADD EDX,EAX
0044DC92  66 83 3C 55 7F 4F 7F 00 00  CMP word ptr [EDX*0x2 + 0x7f4f7f],0x0
0044DC9B  76 06                     JBE 0x0044dca3
0044DC9D  66 C7 47 06 01 48         MOV word ptr [EDI + 0x6],0x4801
LAB_0044dca3:
0044DCA3  8B CE                     MOV ECX,ESI
0044DCA5  E8 5E 49 FB FF            CALL 0x00402608
0044DCAA  85 C0                     TEST EAX,EAX
0044DCAC  76 06                     JBE 0x0044dcb4
0044DCAE  66 C7 47 02 01 14         MOV word ptr [EDI + 0x2],0x1401
LAB_0044dcb4:
0044DCB4  33 C0                     XOR EAX,EAX
0044DCB6  6A 5F                     PUSH 0x5f
0044DCB8  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044DCBD  50                        PUSH EAX
LAB_0044dcbe:
0044DCBE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0044DCC4  E8 A2 3B FB FF            CALL 0x0040186b
0044DCC9  85 C0                     TEST EAX,EAX
0044DCCB  0F 8E FE 00 00 00         JLE 0x0044ddcf
0044DCD1  83 BE 1E 07 00 00 0A      CMP dword ptr [ESI + 0x71e],0xa
0044DCD8  0F 8C F1 00 00 00         JL 0x0044ddcf
0044DCDE  E9 E6 00 00 00            JMP 0x0044ddc9
LAB_0044dce3:
0044DCE3  8B 16                     MOV EDX,dword ptr [ESI]
0044DCE5  8B CE                     MOV ECX,ESI
0044DCE7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044DCEA  83 C0 E7                  ADD EAX,-0x19
0044DCED  83 F8 0A                  CMP EAX,0xa
0044DCF0  0F 87 D9 00 00 00         JA 0x0044ddcf
0044DCF6  33 C9                     XOR ECX,ECX
0044DCF8  8A 88 B4 DE 44 00         MOV CL,byte ptr [EAX + 0x44deb4]
switchD_0044dcfe::switchD:
0044DCFE  FF 24 8D AC DE 44 00      JMP dword ptr [ECX*0x4 + 0x44deac]
LAB_0044dd05:
0044DD05  81 FB 00 00 00 01         CMP EBX,0x1000000
0044DD0B  74 5E                     JZ 0x0044dd6b
0044DD0D  81 FB 00 00 00 02         CMP EBX,0x2000000
0044DD13  0F 85 B6 00 00 00         JNZ 0x0044ddcf
switchD_0044dcfe::caseD_19:
0044DD19  8B CE                     MOV ECX,ESI
0044DD1B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DD22  E8 6D 58 FB FF            CALL 0x00403594
0044DD27  85 C0                     TEST EAX,EAX
0044DD29  0F 8E A0 00 00 00         JLE 0x0044ddcf
0044DD2F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044DD32  33 D2                     XOR EDX,EDX
0044DD34  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0044DD3A  52                        PUSH EDX
0044DD3B  E8 67 59 FB FF            CALL 0x004036a7
0044DD40  85 C0                     TEST EAX,EAX
0044DD42  0F 8E 87 00 00 00         JLE 0x0044ddcf
0044DD48  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DD4C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044DD4F  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044DD52  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044DD55  C1 E1 04                  SHL ECX,0x4
0044DD58  03 C8                     ADD ECX,EAX
0044DD5A  66 83 3C 4D 7F 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7f],0x0
0044DD63  0F 87 B7 00 00 00         JA 0x0044de20
0044DD69  EB 64                     JMP 0x0044ddcf
LAB_0044dd6b:
0044DD6B  8B 16                     MOV EDX,dword ptr [ESI]
0044DD6D  8B CE                     MOV ECX,ESI
0044DD6F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0044DD72  83 F8 24                  CMP EAX,0x24
0044DD75  75 58                     JNZ 0x0044ddcf
0044DD77  8B CE                     MOV ECX,ESI
0044DD79  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0044DD80  E8 0F 58 FB FF            CALL 0x00403594
0044DD85  85 C0                     TEST EAX,EAX
0044DD87  7E 37                     JLE 0x0044ddc0
0044DD89  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044DD8C  33 C0                     XOR EAX,EAX
0044DD8E  A0 4D 87 80 00            MOV AL,[0x0080874d]
0044DD93  50                        PUSH EAX
0044DD94  E8 0E 59 FB FF            CALL 0x004036a7
0044DD99  85 C0                     TEST EAX,EAX
0044DD9B  7E 23                     JLE 0x0044ddc0
0044DD9D  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
0044DDA1  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0044DDA4  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0044DDA7  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0044DDAA  C1 E1 04                  SHL ECX,0x4
0044DDAD  03 C8                     ADD ECX,EAX
0044DDAF  66 83 3C 4D 7F 4F 7F 00 00  CMP word ptr [ECX*0x2 + 0x7f4f7f],0x0
0044DDB8  76 06                     JBE 0x0044ddc0
0044DDBA  66 C7 47 06 01 48         MOV word ptr [EDI + 0x6],0x4801
LAB_0044ddc0:
0044DDC0  83 BE 1E 07 00 00 0A      CMP dword ptr [ESI + 0x71e],0xa
0044DDC7  7C 06                     JL 0x0044ddcf
LAB_0044ddc9:
0044DDC9  66 C7 47 0A 01 18         MOV word ptr [EDI + 0xa],0x1801
FUN_0044d320::cf_continue_loop_0044DDCF:
0044DDCF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044DDD2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044DDD5  40                        INC EAX
0044DDD6  3B C1                     CMP EAX,ECX
0044DDD8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0044DDDB  0F 8C 41 F9 FF FF         JL 0x0044d722
0044DDE1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044DDE4  85 C0                     TEST EAX,EAX
0044DDE6  75 1C                     JNZ 0x0044de04
0044DDE8  B8 01 00 00 00            MOV EAX,0x1
LAB_0044dded:
0044DDED  66 89 47 0A               MOV word ptr [EDI + 0xa],AX
0044DDF1  66 89 47 08               MOV word ptr [EDI + 0x8],AX
0044DDF5  66 89 47 06               MOV word ptr [EDI + 0x6],AX
0044DDF9  66 89 47 04               MOV word ptr [EDI + 0x4],AX
0044DDFD  66 89 47 02               MOV word ptr [EDI + 0x2],AX
0044DE01  66 89 07                  MOV word ptr [EDI],AX
switchD_0044d3a8::caseD_3:
0044DE04  8B C7                     MOV EAX,EDI
0044DE06  5F                        POP EDI
0044DE07  5E                        POP ESI
0044DE08  5B                        POP EBX
0044DE09  8B E5                     MOV ESP,EBP
0044DE0B  5D                        POP EBP
0044DE0C  C2 04 00                  RET 0x4
LAB_0044de0f:
0044DE0F  66 C7 47 06 01 04         MOV word ptr [EDI + 0x6],0x401
0044DE15  8B C7                     MOV EAX,EDI
0044DE17  5F                        POP EDI
0044DE18  5E                        POP ESI
0044DE19  5B                        POP EBX
0044DE1A  8B E5                     MOV ESP,EBP
0044DE1C  5D                        POP EBP
0044DE1D  C2 04 00                  RET 0x4
LAB_0044de20:
0044DE20  66 C7 47 06 01 48         MOV word ptr [EDI + 0x6],0x4801
0044DE26  8B C7                     MOV EAX,EDI
0044DE28  5F                        POP EDI
0044DE29  5E                        POP ESI
0044DE2A  5B                        POP EBX
0044DE2B  8B E5                     MOV ESP,EBP
0044DE2D  5D                        POP EBP
0044DE2E  C2 04 00                  RET 0x4
