STGameObjC::ResetSelfCheckFlag:
0041A680  56                        PUSH ESI
0041A681  8B F1                     MOV ESI,ECX
0041A683  83 BE CD 01 00 00 01      CMP dword ptr [ESI + 0x1cd],0x1
0041A68A  0F 85 C3 03 00 00         JNZ 0x0041aa53
0041A690  8D 86 1D 01 00 00         LEA EAX,[ESI + 0x11d]
0041A696  C7 86 CD 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1cd],0x0
0041A6A0  50                        PUSH EAX
0041A6A1  E8 BA 09 29 00            CALL 0x006ab060
0041A6A6  8D 8E 21 01 00 00         LEA ECX,[ESI + 0x121]
0041A6AC  51                        PUSH ECX
0041A6AD  E8 AE 09 29 00            CALL 0x006ab060
0041A6B2  8D 96 25 01 00 00         LEA EDX,[ESI + 0x125]
0041A6B8  52                        PUSH EDX
0041A6B9  E8 A2 09 29 00            CALL 0x006ab060
0041A6BE  8D 86 29 01 00 00         LEA EAX,[ESI + 0x129]
0041A6C4  50                        PUSH EAX
0041A6C5  E8 96 09 29 00            CALL 0x006ab060
0041A6CA  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0041A6CD  3D AE 01 00 00            CMP EAX,0x1ae
0041A6D2  0F 87 93 01 00 00         JA 0x0041a86b
0041A6D8  0F 84 5B 01 00 00         JZ 0x0041a839
0041A6DE  3D 72 01 00 00            CMP EAX,0x172
0041A6E3  0F 87 43 01 00 00         JA 0x0041a82c
0041A6E9  0F 84 64 03 00 00         JZ 0x0041aa53
0041A6EF  83 F8 14                  CMP EAX,0x14
0041A6F2  74 0E                     JZ 0x0041a702
0041A6F4  83 F8 5A                  CMP EAX,0x5a
0041A6F7  0F 84 56 03 00 00         JZ 0x0041aa53
0041A6FD  E9 82 01 00 00            JMP 0x0041a884
LAB_0041a702:
0041A702  8B 86 71 01 00 00         MOV EAX,dword ptr [ESI + 0x171]
0041A708  85 C0                     TEST EAX,EAX
0041A70A  74 06                     JZ 0x0041a712
0041A70C  50                        PUSH EAX
0041A70D  E8 FE 39 29 00            CALL 0x006ae110
LAB_0041a712:
0041A712  8B 86 75 01 00 00         MOV EAX,dword ptr [ESI + 0x175]
0041A718  85 C0                     TEST EAX,EAX
0041A71A  74 06                     JZ 0x0041a722
0041A71C  50                        PUSH EAX
0041A71D  E8 EE 39 29 00            CALL 0x006ae110
LAB_0041a722:
0041A722  8B 86 79 01 00 00         MOV EAX,dword ptr [ESI + 0x179]
0041A728  85 C0                     TEST EAX,EAX
0041A72A  74 06                     JZ 0x0041a732
0041A72C  50                        PUSH EAX
0041A72D  E8 DE 39 29 00            CALL 0x006ae110
LAB_0041a732:
0041A732  8B 86 7D 01 00 00         MOV EAX,dword ptr [ESI + 0x17d]
0041A738  85 C0                     TEST EAX,EAX
0041A73A  74 06                     JZ 0x0041a742
0041A73C  50                        PUSH EAX
0041A73D  E8 CE 39 29 00            CALL 0x006ae110
LAB_0041a742:
0041A742  8B 86 81 01 00 00         MOV EAX,dword ptr [ESI + 0x181]
0041A748  85 C0                     TEST EAX,EAX
0041A74A  74 06                     JZ 0x0041a752
0041A74C  50                        PUSH EAX
0041A74D  E8 BE 39 29 00            CALL 0x006ae110
LAB_0041a752:
0041A752  33 C9                     XOR ECX,ECX
0041A754  89 8E 71 01 00 00         MOV dword ptr [ESI + 0x171],ECX
0041A75A  89 8E 75 01 00 00         MOV dword ptr [ESI + 0x175],ECX
0041A760  89 8E 79 01 00 00         MOV dword ptr [ESI + 0x179],ECX
0041A766  89 8E 7D 01 00 00         MOV dword ptr [ESI + 0x17d],ECX
0041A76C  89 8E 81 01 00 00         MOV dword ptr [ESI + 0x181],ECX
0041A772  8B 86 5D 01 00 00         MOV EAX,dword ptr [ESI + 0x15d]
0041A778  85 C0                     TEST EAX,EAX
0041A77A  74 06                     JZ 0x0041a782
0041A77C  50                        PUSH EAX
0041A77D  E8 8E 39 29 00            CALL 0x006ae110
LAB_0041a782:
0041A782  8B 86 61 01 00 00         MOV EAX,dword ptr [ESI + 0x161]
0041A788  85 C0                     TEST EAX,EAX
0041A78A  74 06                     JZ 0x0041a792
0041A78C  50                        PUSH EAX
0041A78D  E8 7E 39 29 00            CALL 0x006ae110
LAB_0041a792:
0041A792  8B 86 65 01 00 00         MOV EAX,dword ptr [ESI + 0x165]
0041A798  85 C0                     TEST EAX,EAX
0041A79A  74 06                     JZ 0x0041a7a2
0041A79C  50                        PUSH EAX
0041A79D  E8 6E 39 29 00            CALL 0x006ae110
LAB_0041a7a2:
0041A7A2  8B 86 69 01 00 00         MOV EAX,dword ptr [ESI + 0x169]
0041A7A8  85 C0                     TEST EAX,EAX
0041A7AA  74 06                     JZ 0x0041a7b2
0041A7AC  50                        PUSH EAX
0041A7AD  E8 5E 39 29 00            CALL 0x006ae110
LAB_0041a7b2:
0041A7B2  8B 86 6D 01 00 00         MOV EAX,dword ptr [ESI + 0x16d]
0041A7B8  85 C0                     TEST EAX,EAX
0041A7BA  74 06                     JZ 0x0041a7c2
0041A7BC  50                        PUSH EAX
0041A7BD  E8 4E 39 29 00            CALL 0x006ae110
LAB_0041a7c2:
0041A7C2  33 D2                     XOR EDX,EDX
0041A7C4  8D 86 95 01 00 00         LEA EAX,[ESI + 0x195]
0041A7CA  89 96 5D 01 00 00         MOV dword ptr [ESI + 0x15d],EDX
0041A7D0  50                        PUSH EAX
0041A7D1  89 96 61 01 00 00         MOV dword ptr [ESI + 0x161],EDX
0041A7D7  89 96 65 01 00 00         MOV dword ptr [ESI + 0x165],EDX
0041A7DD  89 96 69 01 00 00         MOV dword ptr [ESI + 0x169],EDX
0041A7E3  89 96 6D 01 00 00         MOV dword ptr [ESI + 0x16d],EDX
0041A7E9  E8 72 08 29 00            CALL 0x006ab060
0041A7EE  8D 8E 99 01 00 00         LEA ECX,[ESI + 0x199]
0041A7F4  51                        PUSH ECX
0041A7F5  E8 66 08 29 00            CALL 0x006ab060
0041A7FA  8D 96 AD 01 00 00         LEA EDX,[ESI + 0x1ad]
0041A800  52                        PUSH EDX
0041A801  E8 5A 08 29 00            CALL 0x006ab060
0041A806  8D 86 B1 01 00 00         LEA EAX,[ESI + 0x1b1]
0041A80C  50                        PUSH EAX
0041A80D  E8 4E 08 29 00            CALL 0x006ab060
0041A812  8D 8E BD 01 00 00         LEA ECX,[ESI + 0x1bd]
0041A818  51                        PUSH ECX
0041A819  E8 42 08 29 00            CALL 0x006ab060
0041A81E  81 C6 C1 01 00 00         ADD ESI,0x1c1
0041A824  56                        PUSH ESI
0041A825  E8 36 08 29 00            CALL 0x006ab060
0041A82A  5E                        POP ESI
0041A82B  C3                        RET
LAB_0041a82c:
0041A82C  3D A4 01 00 00            CMP EAX,0x1a4
0041A831  0F 84 1C 02 00 00         JZ 0x0041aa53
0041A837  EB 4B                     JMP 0x0041a884
LAB_0041a839:
0041A839  8D 96 AD 01 00 00         LEA EDX,[ESI + 0x1ad]
0041A83F  52                        PUSH EDX
0041A840  E8 1B 08 29 00            CALL 0x006ab060
0041A845  8D 86 B1 01 00 00         LEA EAX,[ESI + 0x1b1]
0041A84B  50                        PUSH EAX
0041A84C  E8 0F 08 29 00            CALL 0x006ab060
0041A851  8D 8E C5 01 00 00         LEA ECX,[ESI + 0x1c5]
0041A857  51                        PUSH ECX
0041A858  E8 03 08 29 00            CALL 0x006ab060
0041A85D  81 C6 C9 01 00 00         ADD ESI,0x1c9
0041A863  56                        PUSH ESI
0041A864  E8 F7 07 29 00            CALL 0x006ab060
0041A869  5E                        POP ESI
0041A86A  C3                        RET
LAB_0041a86b:
0041A86B  2D B8 01 00 00            SUB EAX,0x1b8
0041A870  0F 84 DD 01 00 00         JZ 0x0041aa53
0041A876  2D 30 02 00 00            SUB EAX,0x230
0041A87B  74 32                     JZ 0x0041a8af
0041A87D  48                        DEC EAX
0041A87E  0F 84 CF 01 00 00         JZ 0x0041aa53
LAB_0041a884:
0041A884  68 90 4E 7A 00            PUSH 0x7a4e90
0041A889  68 CC 4C 7A 00            PUSH 0x7a4ccc
0041A88E  6A 00                     PUSH 0x0
0041A890  6A 00                     PUSH 0x0
0041A892  68 F5 05 00 00            PUSH 0x5f5
0041A897  68 0C 4E 7A 00            PUSH 0x7a4e0c
0041A89C  E8 2F 2C 29 00            CALL 0x006ad4d0
0041A8A1  83 C4 18                  ADD ESP,0x18
0041A8A4  85 C0                     TEST EAX,EAX
0041A8A6  0F 84 A7 01 00 00         JZ 0x0041aa53
0041A8AC  CC                        INT3
LAB_0041a8af:
0041A8AF  8B 86 35 01 00 00         MOV EAX,dword ptr [ESI + 0x135]
0041A8B5  85 C0                     TEST EAX,EAX
0041A8B7  74 06                     JZ 0x0041a8bf
0041A8B9  50                        PUSH EAX
0041A8BA  E8 51 38 29 00            CALL 0x006ae110
LAB_0041a8bf:
0041A8BF  8B 86 39 01 00 00         MOV EAX,dword ptr [ESI + 0x139]
0041A8C5  85 C0                     TEST EAX,EAX
0041A8C7  74 06                     JZ 0x0041a8cf
0041A8C9  50                        PUSH EAX
0041A8CA  E8 41 38 29 00            CALL 0x006ae110
LAB_0041a8cf:
0041A8CF  33 D2                     XOR EDX,EDX
0041A8D1  89 96 35 01 00 00         MOV dword ptr [ESI + 0x135],EDX
0041A8D7  89 96 39 01 00 00         MOV dword ptr [ESI + 0x139],EDX
0041A8DD  8B 86 2D 01 00 00         MOV EAX,dword ptr [ESI + 0x12d]
0041A8E3  85 C0                     TEST EAX,EAX
0041A8E5  74 06                     JZ 0x0041a8ed
0041A8E7  50                        PUSH EAX
0041A8E8  E8 23 38 29 00            CALL 0x006ae110
LAB_0041a8ed:
0041A8ED  8B 86 31 01 00 00         MOV EAX,dword ptr [ESI + 0x131]
0041A8F3  85 C0                     TEST EAX,EAX
0041A8F5  74 06                     JZ 0x0041a8fd
0041A8F7  50                        PUSH EAX
0041A8F8  E8 13 38 29 00            CALL 0x006ae110
LAB_0041a8fd:
0041A8FD  33 C0                     XOR EAX,EAX
0041A8FF  89 86 2D 01 00 00         MOV dword ptr [ESI + 0x12d],EAX
0041A905  89 86 31 01 00 00         MOV dword ptr [ESI + 0x131],EAX
0041A90B  8B 86 4D 01 00 00         MOV EAX,dword ptr [ESI + 0x14d]
0041A911  85 C0                     TEST EAX,EAX
0041A913  74 06                     JZ 0x0041a91b
0041A915  50                        PUSH EAX
0041A916  E8 F5 37 29 00            CALL 0x006ae110
LAB_0041a91b:
0041A91B  8B 86 51 01 00 00         MOV EAX,dword ptr [ESI + 0x151]
0041A921  85 C0                     TEST EAX,EAX
0041A923  74 06                     JZ 0x0041a92b
0041A925  50                        PUSH EAX
0041A926  E8 E5 37 29 00            CALL 0x006ae110
LAB_0041a92b:
0041A92B  8B 86 55 01 00 00         MOV EAX,dword ptr [ESI + 0x155]
0041A931  85 C0                     TEST EAX,EAX
0041A933  74 06                     JZ 0x0041a93b
0041A935  50                        PUSH EAX
0041A936  E8 D5 37 29 00            CALL 0x006ae110
LAB_0041a93b:
0041A93B  8B 86 59 01 00 00         MOV EAX,dword ptr [ESI + 0x159]
0041A941  85 C0                     TEST EAX,EAX
0041A943  74 06                     JZ 0x0041a94b
0041A945  50                        PUSH EAX
0041A946  E8 C5 37 29 00            CALL 0x006ae110
LAB_0041a94b:
0041A94B  33 C9                     XOR ECX,ECX
0041A94D  89 8E 4D 01 00 00         MOV dword ptr [ESI + 0x14d],ECX
0041A953  89 8E 51 01 00 00         MOV dword ptr [ESI + 0x151],ECX
0041A959  89 8E 55 01 00 00         MOV dword ptr [ESI + 0x155],ECX
0041A95F  89 8E 59 01 00 00         MOV dword ptr [ESI + 0x159],ECX
0041A965  8B 86 3D 01 00 00         MOV EAX,dword ptr [ESI + 0x13d]
0041A96B  85 C0                     TEST EAX,EAX
0041A96D  74 06                     JZ 0x0041a975
0041A96F  50                        PUSH EAX
0041A970  E8 9B 37 29 00            CALL 0x006ae110
LAB_0041a975:
0041A975  8B 86 41 01 00 00         MOV EAX,dword ptr [ESI + 0x141]
0041A97B  85 C0                     TEST EAX,EAX
0041A97D  74 06                     JZ 0x0041a985
0041A97F  50                        PUSH EAX
0041A980  E8 8B 37 29 00            CALL 0x006ae110
LAB_0041a985:
0041A985  8B 86 45 01 00 00         MOV EAX,dword ptr [ESI + 0x145]
0041A98B  85 C0                     TEST EAX,EAX
0041A98D  74 06                     JZ 0x0041a995
0041A98F  50                        PUSH EAX
0041A990  E8 7B 37 29 00            CALL 0x006ae110
LAB_0041a995:
0041A995  8B 86 49 01 00 00         MOV EAX,dword ptr [ESI + 0x149]
0041A99B  85 C0                     TEST EAX,EAX
0041A99D  74 06                     JZ 0x0041a9a5
0041A99F  50                        PUSH EAX
0041A9A0  E8 6B 37 29 00            CALL 0x006ae110
LAB_0041a9a5:
0041A9A5  33 D2                     XOR EDX,EDX
0041A9A7  8D 86 85 01 00 00         LEA EAX,[ESI + 0x185]
0041A9AD  89 96 3D 01 00 00         MOV dword ptr [ESI + 0x13d],EDX
0041A9B3  50                        PUSH EAX
0041A9B4  89 96 41 01 00 00         MOV dword ptr [ESI + 0x141],EDX
0041A9BA  89 96 45 01 00 00         MOV dword ptr [ESI + 0x145],EDX
0041A9C0  89 96 49 01 00 00         MOV dword ptr [ESI + 0x149],EDX
0041A9C6  E8 95 06 29 00            CALL 0x006ab060
0041A9CB  8D 8E 89 01 00 00         LEA ECX,[ESI + 0x189]
0041A9D1  51                        PUSH ECX
0041A9D2  E8 89 06 29 00            CALL 0x006ab060
0041A9D7  8D 96 8D 01 00 00         LEA EDX,[ESI + 0x18d]
0041A9DD  52                        PUSH EDX
0041A9DE  E8 7D 06 29 00            CALL 0x006ab060
0041A9E3  8D 86 91 01 00 00         LEA EAX,[ESI + 0x191]
0041A9E9  50                        PUSH EAX
0041A9EA  E8 71 06 29 00            CALL 0x006ab060
0041A9EF  8B 86 A1 01 00 00         MOV EAX,dword ptr [ESI + 0x1a1]
0041A9F5  85 C0                     TEST EAX,EAX
0041A9F7  74 10                     JZ 0x0041aa09
0041A9F9  50                        PUSH EAX
0041A9FA  E8 11 37 29 00            CALL 0x006ae110
0041A9FF  C7 86 A1 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a1],0x0
LAB_0041aa09:
0041AA09  8B 86 9D 01 00 00         MOV EAX,dword ptr [ESI + 0x19d]
0041AA0F  85 C0                     TEST EAX,EAX
0041AA11  74 10                     JZ 0x0041aa23
0041AA13  50                        PUSH EAX
0041AA14  E8 F7 36 29 00            CALL 0x006ae110
0041AA19  C7 86 9D 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x19d],0x0
LAB_0041aa23:
0041AA23  8D 8E A5 01 00 00         LEA ECX,[ESI + 0x1a5]
0041AA29  51                        PUSH ECX
0041AA2A  E8 31 06 29 00            CALL 0x006ab060
0041AA2F  8D 96 A9 01 00 00         LEA EDX,[ESI + 0x1a9]
0041AA35  52                        PUSH EDX
0041AA36  E8 25 06 29 00            CALL 0x006ab060
0041AA3B  8D 86 B5 01 00 00         LEA EAX,[ESI + 0x1b5]
0041AA41  50                        PUSH EAX
0041AA42  E8 19 06 29 00            CALL 0x006ab060
0041AA47  81 C6 B9 01 00 00         ADD ESI,0x1b9
0041AA4D  56                        PUSH ESI
0041AA4E  E8 0D 06 29 00            CALL 0x006ab060
LAB_0041aa53:
0041AA53  5E                        POP ESI
0041AA54  C3                        RET
