SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::FUN_004838e0:
004838E0  55                        PUSH EBP
004838E1  8B EC                     MOV EBP,ESP
004838E3  83 EC 74                  SUB ESP,0x74
004838E6  53                        PUSH EBX
004838E7  56                        PUSH ESI
004838E8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004838EB  57                        PUSH EDI
004838EC  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004838EF  0F BF 46 3A               MOVSX EAX,word ptr [ESI + 0x3a]
004838F3  0F BF 56 34               MOVSX EDX,word ptr [ESI + 0x34]
004838F7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004838FA  2B C2                     SUB EAX,EDX
004838FC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004838FF  99                        CDQ
00483900  8B F8                     MOV EDI,EAX
00483902  8B DA                     MOV EBX,EDX
00483904  0F BF 46 3C               MOVSX EAX,word ptr [ESI + 0x3c]
00483908  0F BF 56 36               MOVSX EDX,word ptr [ESI + 0x36]
0048390C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0048390F  2B C2                     SUB EAX,EDX
00483911  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00483914  53                        PUSH EBX
00483915  99                        CDQ
00483916  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00483919  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0048391C  0F BF 46 3E               MOVSX EAX,word ptr [ESI + 0x3e]
00483920  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
00483924  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00483927  2B C2                     SUB EAX,EDX
00483929  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0048392C  57                        PUSH EDI
0048392D  99                        CDQ
0048392E  8B F0                     MOV ESI,EAX
00483930  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00483933  0F BF 41 45               MOVSX EAX,word ptr [ECX + 0x45]
00483937  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0048393A  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
0048393D  99                        CDQ
0048393E  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00483941  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00483944  0F BF 41 43               MOVSX EAX,word ptr [ECX + 0x43]
00483948  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0048394B  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
0048394E  99                        CDQ
0048394F  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00483952  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00483955  0F BF 41 41               MOVSX EAX,word ptr [ECX + 0x41]
00483959  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0048395C  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
0048395F  99                        CDQ
00483960  52                        PUSH EDX
00483961  50                        PUSH EAX
00483962  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00483965  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
00483968  E8 83 AB 2A 00            CALL 0x0072e4f0
0048396D  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00483970  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00483973  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00483976  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00483979  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0048397C  50                        PUSH EAX
0048397D  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00483980  51                        PUSH ECX
00483981  52                        PUSH EDX
00483982  50                        PUSH EAX
00483983  E8 68 AB 2A 00            CALL 0x0072e4f0
00483988  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0048398B  03 C8                     ADD ECX,EAX
0048398D  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00483990  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00483993  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00483996  13 C2                     ADC EAX,EDX
00483998  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0048399B  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0048399E  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004839A1  51                        PUSH ECX
004839A2  56                        PUSH ESI
004839A3  52                        PUSH EDX
004839A4  50                        PUSH EAX
004839A5  E8 46 AB 2A 00            CALL 0x0072e4f0
004839AA  8B C8                     MOV ECX,EAX
004839AC  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004839AF  03 C1                     ADD EAX,ECX
004839B1  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004839B4  13 CA                     ADC ECX,EDX
004839B6  8B D7                     MOV EDX,EDI
004839B8  F7 D8                     NEG EAX
004839BA  83 D1 00                  ADC ECX,0x0
004839BD  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004839C0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004839C3  F7 D9                     NEG ECX
004839C5  0B D3                     OR EDX,EBX
004839C7  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
004839CA  99                        CDQ
004839CB  0F 85 E6 00 00 00         JNZ 0x00483ab7
004839D1  8B D8                     MOV EBX,EAX
004839D3  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004839D6  8B FA                     MOV EDI,EDX
004839D8  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
004839DB  0B C2                     OR EAX,EDX
004839DD  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
004839E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004839E3  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
004839E6  99                        CDQ
004839E7  75 2B                     JNZ 0x00483a14
004839E9  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004839EC  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004839EF  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
004839F2  8B D6                     MOV EDX,ESI
004839F4  0B D0                     OR EDX,EAX
004839F6  0F 84 0A 03 00 00         JZ 0x00483d06
004839FC  50                        PUSH EAX
004839FD  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00483A00  56                        PUSH ESI
00483A01  51                        PUSH ECX
00483A02  50                        PUSH EAX
00483A03  E8 38 AA 2A 00            CALL 0x0072e440
00483A08  F7 D8                     NEG EAX
00483A0A  83 D2 00                  ADC EDX,0x0
00483A0D  F7 DA                     NEG EDX
00483A0F  E9 08 02 00 00            JMP 0x00483c1c
LAB_00483a14:
00483A14  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
00483A17  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00483A1A  57                        PUSH EDI
00483A1B  56                        PUSH ESI
00483A1C  52                        PUSH EDX
00483A1D  50                        PUSH EAX
00483A1E  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00483A21  E8 CA AA 2A 00            CALL 0x0072e4f0
00483A26  57                        PUSH EDI
00483A27  56                        PUSH ESI
00483A28  52                        PUSH EDX
00483A29  50                        PUSH EAX
00483A2A  E8 C1 AA 2A 00            CALL 0x0072e4f0
00483A2F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00483A32  8B DA                     MOV EBX,EDX
00483A34  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00483A37  8B F8                     MOV EDI,EAX
00483A39  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00483A3C  51                        PUSH ECX
00483A3D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00483A40  52                        PUSH EDX
00483A41  50                        PUSH EAX
00483A42  51                        PUSH ECX
00483A43  E8 A8 AA 2A 00            CALL 0x0072e4f0
00483A48  2B F8                     SUB EDI,EAX
00483A4A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00483A4D  50                        PUSH EAX
00483A4E  56                        PUSH ESI
00483A4F  50                        PUSH EAX
00483A50  56                        PUSH ESI
00483A51  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00483A54  1B DA                     SBB EBX,EDX
00483A56  E8 95 AA 2A 00            CALL 0x0072e4f0
00483A5B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00483A5E  8B F0                     MOV ESI,EAX
00483A60  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00483A63  51                        PUSH ECX
00483A64  50                        PUSH EAX
00483A65  51                        PUSH ECX
00483A66  50                        PUSH EAX
00483A67  8B FA                     MOV EDI,EDX
00483A69  E8 82 AA 2A 00            CALL 0x0072e4f0
00483A6E  03 F0                     ADD ESI,EAX
00483A70  13 FA                     ADC EDI,EDX
00483A72  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00483A75  57                        PUSH EDI
00483A76  56                        PUSH ESI
00483A77  53                        PUSH EBX
00483A78  52                        PUSH EDX
00483A79  E8 C2 A9 2A 00            CALL 0x0072e440
00483A7E  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00483A81  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00483A84  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00483A87  2B C6                     SUB EAX,ESI
00483A89  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00483A8C  1B D1                     SBB EDX,ECX
00483A8E  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00483A91  51                        PUSH ECX
00483A92  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00483A95  51                        PUSH ECX
00483A96  52                        PUSH EDX
00483A97  50                        PUSH EAX
00483A98  E8 53 AA 2A 00            CALL 0x0072e4f0
00483A9D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00483AA0  51                        PUSH ECX
00483AA1  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00483AA4  51                        PUSH ECX
00483AA5  52                        PUSH EDX
00483AA6  50                        PUSH EAX
00483AA7  E8 94 A9 2A 00            CALL 0x0072e440
00483AAC  8B 5D B4                  MOV EBX,dword ptr [EBP + -0x4c]
00483AAF  8B 7D B8                  MOV EDI,dword ptr [EBP + -0x48]
00483AB2  E9 65 01 00 00            JMP 0x00483c1c
LAB_00483ab7:
00483AB7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00483ABA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00483ABD  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00483AC0  53                        PUSH EBX
00483AC1  99                        CDQ
00483AC2  57                        PUSH EDI
00483AC3  52                        PUSH EDX
00483AC4  50                        PUSH EAX
00483AC5  E8 26 AA 2A 00            CALL 0x0072e4f0
00483ACA  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00483ACD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00483AD0  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00483AD3  53                        PUSH EBX
00483AD4  99                        CDQ
00483AD5  57                        PUSH EDI
00483AD6  52                        PUSH EDX
00483AD7  50                        PUSH EAX
00483AD8  E8 13 AA 2A 00            CALL 0x0072e4f0
00483ADD  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00483AE0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00483AE3  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00483AE6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00483AE9  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00483AEC  52                        PUSH EDX
00483AED  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00483AF0  50                        PUSH EAX
00483AF1  51                        PUSH ECX
00483AF2  52                        PUSH EDX
00483AF3  E8 F8 A9 2A 00            CALL 0x0072e4f0
00483AF8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00483AFB  2B C1                     SUB EAX,ECX
00483AFD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00483B00  1B D1                     SBB EDX,ECX
00483B02  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00483B05  51                        PUSH ECX
00483B06  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00483B09  51                        PUSH ECX
00483B0A  52                        PUSH EDX
00483B0B  50                        PUSH EAX
00483B0C  E8 DF A9 2A 00            CALL 0x0072e4f0
00483B11  8B C8                     MOV ECX,EAX
00483B13  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00483B16  53                        PUSH EBX
00483B17  57                        PUSH EDI
00483B18  50                        PUSH EAX
00483B19  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00483B1C  50                        PUSH EAX
00483B1D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00483B20  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00483B23  E8 C8 A9 2A 00            CALL 0x0072e4f0
00483B28  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00483B2B  8B F8                     MOV EDI,EAX
00483B2D  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00483B30  8B DA                     MOV EBX,EDX
00483B32  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00483B35  2B F9                     SUB EDI,ECX
00483B37  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00483B3A  50                        PUSH EAX
00483B3B  1B DA                     SBB EBX,EDX
00483B3D  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00483B40  56                        PUSH ESI
00483B41  51                        PUSH ECX
00483B42  52                        PUSH EDX
00483B43  E8 A8 A9 2A 00            CALL 0x0072e4f0
00483B48  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00483B4B  2B C1                     SUB EAX,ECX
00483B4D  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00483B50  1B D1                     SBB EDX,ECX
00483B52  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00483B55  51                        PUSH ECX
00483B56  56                        PUSH ESI
00483B57  52                        PUSH EDX
00483B58  50                        PUSH EAX
00483B59  E8 92 A9 2A 00            CALL 0x0072e4f0
00483B5E  2B F8                     SUB EDI,EAX
00483B60  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00483B63  50                        PUSH EAX
00483B64  56                        PUSH ESI
00483B65  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00483B68  50                        PUSH EAX
00483B69  1B DA                     SBB EBX,EDX
00483B6B  56                        PUSH ESI
00483B6C  E8 7F A9 2A 00            CALL 0x0072e4f0
00483B71  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00483B74  8B F0                     MOV ESI,EAX
00483B76  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00483B79  51                        PUSH ECX
00483B7A  50                        PUSH EAX
00483B7B  51                        PUSH ECX
00483B7C  50                        PUSH EAX
00483B7D  8B FA                     MOV EDI,EDX
00483B7F  E8 6C A9 2A 00            CALL 0x0072e4f0
00483B84  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00483B87  03 F0                     ADD ESI,EAX
00483B89  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00483B8C  51                        PUSH ECX
00483B8D  50                        PUSH EAX
00483B8E  51                        PUSH ECX
00483B8F  50                        PUSH EAX
00483B90  13 FA                     ADC EDI,EDX
00483B92  E8 59 A9 2A 00            CALL 0x0072e4f0
00483B97  03 F0                     ADD ESI,EAX
00483B99  13 FA                     ADC EDI,EDX
00483B9B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00483B9E  57                        PUSH EDI
00483B9F  56                        PUSH ESI
00483BA0  53                        PUSH EBX
00483BA1  52                        PUSH EDX
00483BA2  E8 99 A8 2A 00            CALL 0x0072e440
00483BA7  8B D8                     MOV EBX,EAX
00483BA9  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00483BAC  8B FA                     MOV EDI,EDX
00483BAE  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00483BB1  F7 DB                     NEG EBX
00483BB3  83 D7 00                  ADC EDI,0x0
00483BB6  8B F3                     MOV ESI,EBX
00483BB8  F7 DF                     NEG EDI
00483BBA  2B F2                     SUB ESI,EDX
00483BBC  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00483BBF  8B C7                     MOV EAX,EDI
00483BC1  1B C1                     SBB EAX,ECX
00483BC3  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00483BC6  51                        PUSH ECX
00483BC7  52                        PUSH EDX
00483BC8  50                        PUSH EAX
00483BC9  56                        PUSH ESI
00483BCA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00483BCD  E8 1E A9 2A 00            CALL 0x0072e4f0
00483BD2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00483BD5  03 C1                     ADD EAX,ECX
00483BD7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00483BDA  13 D1                     ADC EDX,ECX
00483BDC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00483BDF  51                        PUSH ECX
00483BE0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00483BE3  51                        PUSH ECX
00483BE4  52                        PUSH EDX
00483BE5  50                        PUSH EAX
00483BE6  E8 55 A8 2A 00            CALL 0x0072e440
00483BEB  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00483BEE  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00483BF1  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00483BF4  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00483BF7  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00483BFA  52                        PUSH EDX
00483BFB  50                        PUSH EAX
00483BFC  51                        PUSH ECX
00483BFD  56                        PUSH ESI
00483BFE  E8 ED A8 2A 00            CALL 0x0072e4f0
00483C03  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00483C06  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00483C09  03 C6                     ADD EAX,ESI
00483C0B  13 D1                     ADC EDX,ECX
00483C0D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00483C10  51                        PUSH ECX
00483C11  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00483C14  51                        PUSH ECX
00483C15  52                        PUSH EDX
00483C16  50                        PUSH EAX
00483C17  E8 24 A8 2A 00            CALL 0x0072e440
LAB_00483c1c:
00483C1C  8B 75 9C                  MOV ESI,dword ptr [EBP + -0x64]
00483C1F  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00483C22  2B F0                     SUB ESI,EAX
00483C24  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00483C27  1B C2                     SBB EAX,EDX
00483C29  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00483C2C  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00483C2F  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00483C32  2B C2                     SUB EAX,EDX
00483C34  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00483C37  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00483C3A  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00483C3D  1B C1                     SBB EAX,ECX
00483C3F  0F BF 8A 37 02 00 00      MOVSX ECX,word ptr [EDX + 0x237]
00483C46  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00483C49  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00483C4C  2B C3                     SUB EAX,EBX
00483C4E  8B D8                     MOV EBX,EAX
00483C50  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
00483C53  1B C7                     SBB EAX,EDI
00483C55  8B F8                     MOV EDI,EAX
00483C57  B8 67 66 66 66            MOV EAX,0x66666667
00483C5C  C1 E1 02                  SHL ECX,0x2
00483C5F  F7 E9                     IMUL ECX
00483C61  D1 FA                     SAR EDX,0x1
00483C63  8B C2                     MOV EAX,EDX
00483C65  57                        PUSH EDI
00483C66  C1 E8 1F                  SHR EAX,0x1f
00483C69  53                        PUSH EBX
00483C6A  03 D0                     ADD EDX,EAX
00483C6C  57                        PUSH EDI
00483C6D  53                        PUSH EBX
00483C6E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00483C71  E8 7A A8 2A 00            CALL 0x0072e4f0
00483C76  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00483C79  8B D8                     MOV EBX,EAX
00483C7B  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00483C7E  51                        PUSH ECX
00483C7F  50                        PUSH EAX
00483C80  51                        PUSH ECX
00483C81  50                        PUSH EAX
00483C82  8B FA                     MOV EDI,EDX
00483C84  E8 67 A8 2A 00            CALL 0x0072e4f0
00483C89  03 D8                     ADD EBX,EAX
00483C8B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00483C8E  50                        PUSH EAX
00483C8F  56                        PUSH ESI
00483C90  50                        PUSH EAX
00483C91  56                        PUSH ESI
00483C92  13 FA                     ADC EDI,EDX
00483C94  E8 57 A8 2A 00            CALL 0x0072e4f0
00483C99  03 D8                     ADD EBX,EAX
00483C9B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00483C9E  13 FA                     ADC EDI,EDX
00483CA0  0F AF C0                  IMUL EAX,EAX
00483CA3  99                        CDQ
00483CA4  3B FA                     CMP EDI,EDX
00483CA6  7C 06                     JL 0x00483cae
00483CA8  7F 5C                     JG 0x00483d06
00483CAA  3B D8                     CMP EBX,EAX
00483CAC  77 58                     JA 0x00483d06
LAB_00483cae:
00483CAE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00483CB1  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00483CB4  0F BF 48 41               MOVSX ECX,word ptr [EAX + 0x41]
00483CB8  0F BF 70 45               MOVSX ESI,word ptr [EAX + 0x45]
00483CBC  0F BF 78 43               MOVSX EDI,word ptr [EAX + 0x43]
00483CC0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00483CC3  2B D1                     SUB EDX,ECX
00483CC5  2B C1                     SUB EAX,ECX
00483CC7  F7 EA                     IMUL EDX
00483CC9  8B C8                     MOV ECX,EAX
00483CCB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00483CCE  8B DA                     MOV EBX,EDX
00483CD0  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00483CD3  2B C7                     SUB EAX,EDI
00483CD5  2B D7                     SUB EDX,EDI
00483CD7  F7 EA                     IMUL EDX
00483CD9  03 C8                     ADD ECX,EAX
00483CDB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00483CDE  13 DA                     ADC EBX,EDX
00483CE0  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00483CE3  2B C6                     SUB EAX,ESI
00483CE5  2B D6                     SUB EDX,ESI
00483CE7  F7 EA                     IMUL EDX
00483CE9  03 C8                     ADD ECX,EAX
00483CEB  13 DA                     ADC EBX,EDX
00483CED  89 5D 90                  MOV dword ptr [EBP + -0x70],EBX
00483CF0  78 14                     JS 0x00483d06
00483CF2  7F 04                     JG 0x00483cf8
00483CF4  85 C9                     TEST ECX,ECX
00483CF6  72 0E                     JC 0x00483d06
LAB_00483cf8:
00483CF8  5F                        POP EDI
00483CF9  5E                        POP ESI
00483CFA  B8 01 00 00 00            MOV EAX,0x1
00483CFF  5B                        POP EBX
00483D00  8B E5                     MOV ESP,EBP
00483D02  5D                        POP EBP
00483D03  C2 04 00                  RET 0x4
LAB_00483d06:
00483D06  5F                        POP EDI
00483D07  5E                        POP ESI
00483D08  33 C0                     XOR EAX,EAX
00483D0A  5B                        POP EBX
00483D0B  8B E5                     MOV ESP,EBP
00483D0D  5D                        POP EBP
00483D0E  C2 04 00                  RET 0x4
