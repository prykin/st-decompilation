FUN_00615bb0:
00615BB0  55                        PUSH EBP
00615BB1  8B EC                     MOV EBP,ESP
00615BB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00615BB6  83 F8 17                  CMP EAX,0x17
00615BB9  0F 87 E5 01 00 00         JA 0x00615da4
00615BBF  33 C9                     XOR ECX,ECX
00615BC1  8A 88 C8 5D 61 00         MOV CL,byte ptr [EAX + 0x615dc8]
switchD_00615bc7::switchD:
00615BC7  FF 24 8D A8 5D 61 00      JMP dword ptr [ECX*0x4 + 0x615da8]
switchD_00615bc7::caseD_0:
00615BCE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615BD1  33 C0                     XOR EAX,EAX
00615BD3  3B C8                     CMP ECX,EAX
00615BD5  0F 85 EC 00 00 00         JNZ 0x00615cc7
00615BDB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00615BDE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00615BE1  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00615BE7  89 01                     MOV dword ptr [ECX],EAX
00615BE9  5D                        POP EBP
00615BEA  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_2:
00615BED  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615BF0  33 C0                     XOR EAX,EAX
00615BF2  3B C8                     CMP ECX,EAX
00615BF4  75 16                     JNZ 0x00615c0c
00615BF6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00615BF9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00615BFC  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00615C02  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
00615C08  5D                        POP EBP
00615C09  C2 14 00                  RET 0x14
LAB_00615c0c:
00615C0C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615C0F  66 89 01                  MOV word ptr [ECX],AX
00615C12  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615C16  66 C7 41 04 01 00         MOV word ptr [ECX + 0x4],0x1
00615C1C  66 89 41 06               MOV word ptr [ECX + 0x6],AX
00615C20  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00615C24  66 C7 41 0A FF FF         MOV word ptr [ECX + 0xa],0xffff
00615C2A  5D                        POP EBP
00615C2B  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_5:
00615C2E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615C31  33 C0                     XOR EAX,EAX
00615C33  3B C8                     CMP ECX,EAX
00615C35  75 12                     JNZ 0x00615c49
00615C37  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00615C3A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00615C3D  89 01                     MOV dword ptr [ECX],EAX
00615C3F  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00615C45  5D                        POP EBP
00615C46  C2 14 00                  RET 0x14
LAB_00615c49:
00615C49  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615C4C  66 89 01                  MOV word ptr [ECX],AX
00615C4F  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615C53  66 C7 41 04 01 00         MOV word ptr [ECX + 0x4],0x1
00615C59  66 89 41 06               MOV word ptr [ECX + 0x6],AX
00615C5D  66 C7 41 08 FF FF         MOV word ptr [ECX + 0x8],0xffff
00615C63  66 89 41 0A               MOV word ptr [ECX + 0xa],AX
00615C67  5D                        POP EBP
00615C68  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_8:
00615C6B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615C6E  33 C0                     XOR EAX,EAX
00615C70  3B C8                     CMP ECX,EAX
00615C72  75 16                     JNZ 0x00615c8a
00615C74  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00615C77  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00615C7A  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
00615C80  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
00615C86  5D                        POP EBP
00615C87  C2 14 00                  RET 0x14
LAB_00615c8a:
00615C8A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615C8D  66 89 01                  MOV word ptr [ECX],AX
00615C90  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615C94  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00615C98  66 C7 41 06 FF FF         MOV word ptr [ECX + 0x6],0xffff
00615C9E  66 C7 41 08 FF FF         MOV word ptr [ECX + 0x8],0xffff
00615CA4  66 89 41 0A               MOV word ptr [ECX + 0xa],AX
00615CA8  5D                        POP EBP
00615CA9  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_b:
00615CAC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615CAF  33 C0                     XOR EAX,EAX
00615CB1  3B C8                     CMP ECX,EAX
00615CB3  75 12                     JNZ 0x00615cc7
00615CB5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00615CB8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00615CBB  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00615CC1  89 01                     MOV dword ptr [ECX],EAX
00615CC3  5D                        POP EBP
00615CC4  C2 14 00                  RET 0x14
LAB_00615cc7:
00615CC7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615CCA  66 89 01                  MOV word ptr [ECX],AX
00615CCD  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615CD1  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00615CD5  66 C7 41 06 FF FF         MOV word ptr [ECX + 0x6],0xffff
00615CDB  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00615CDF  66 C7 41 0A 01 00         MOV word ptr [ECX + 0xa],0x1
00615CE5  5D                        POP EBP
00615CE6  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_e:
00615CE9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615CEC  33 C0                     XOR EAX,EAX
00615CEE  3B C8                     CMP ECX,EAX
00615CF0  75 16                     JNZ 0x00615d08
00615CF2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00615CF5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00615CF8  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00615CFE  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00615D04  5D                        POP EBP
00615D05  C2 14 00                  RET 0x14
LAB_00615d08:
00615D08  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615D0B  66 89 01                  MOV word ptr [ECX],AX
00615D0E  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615D12  66 C7 41 04 FF FF         MOV word ptr [ECX + 0x4],0xffff
00615D18  66 89 41 06               MOV word ptr [ECX + 0x6],AX
00615D1C  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00615D20  66 C7 41 0A 01 00         MOV word ptr [ECX + 0xa],0x1
00615D26  5D                        POP EBP
00615D27  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_11:
00615D2A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615D2D  33 C0                     XOR EAX,EAX
00615D2F  3B C8                     CMP ECX,EAX
00615D31  75 12                     JNZ 0x00615d45
00615D33  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00615D36  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00615D39  89 01                     MOV dword ptr [ECX],EAX
00615D3B  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00615D41  5D                        POP EBP
00615D42  C2 14 00                  RET 0x14
LAB_00615d45:
00615D45  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615D48  66 89 01                  MOV word ptr [ECX],AX
00615D4B  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615D4F  66 C7 41 04 FF FF         MOV word ptr [ECX + 0x4],0xffff
00615D55  66 89 41 06               MOV word ptr [ECX + 0x6],AX
00615D59  66 C7 41 08 01 00         MOV word ptr [ECX + 0x8],0x1
00615D5F  66 89 41 0A               MOV word ptr [ECX + 0xa],AX
00615D63  5D                        POP EBP
00615D64  C2 14 00                  RET 0x14
switchD_00615bc7::caseD_14:
00615D67  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00615D6A  33 C0                     XOR EAX,EAX
00615D6C  3B C8                     CMP ECX,EAX
00615D6E  75 16                     JNZ 0x00615d86
00615D70  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00615D73  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00615D76  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00615D7C  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00615D82  5D                        POP EBP
00615D83  C2 14 00                  RET 0x14
LAB_00615d86:
00615D86  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00615D89  66 89 01                  MOV word ptr [ECX],AX
00615D8C  66 89 41 02               MOV word ptr [ECX + 0x2],AX
00615D90  66 C7 41 04 01 00         MOV word ptr [ECX + 0x4],0x1
00615D96  66 89 41 06               MOV word ptr [ECX + 0x6],AX
00615D9A  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00615D9E  66 C7 41 0A 01 00         MOV word ptr [ECX + 0xa],0x1
switchD_00615bc7::default:
00615DA4  5D                        POP EBP
00615DA5  C2 14 00                  RET 0x14
