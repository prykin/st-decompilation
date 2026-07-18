FUN_005c8a40:
005C8A40  55                        PUSH EBP
005C8A41  8B EC                     MOV EBP,ESP
005C8A43  81 EC D8 00 00 00         SUB ESP,0xd8
005C8A49  53                        PUSH EBX
005C8A4A  56                        PUSH ESI
005C8A4B  8B F1                     MOV ESI,ECX
005C8A4D  57                        PUSH EDI
005C8A4E  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
005C8A51  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005C8A54  E8 57 C7 11 00            CALL 0x006e51b0
005C8A59  33 FF                     XOR EDI,EDI
005C8A5B  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005C8A5E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C8A63  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
005C8A69  8D 8D 28 FF FF FF         LEA ECX,[EBP + 0xffffff28]
005C8A6F  57                        PUSH EDI
005C8A70  52                        PUSH EDX
005C8A71  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
005C8A77  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C8A7D  E8 6E 4D 16 00            CALL 0x0072d7f0
005C8A82  8B F0                     MOV ESI,EAX
005C8A84  83 C4 08                  ADD ESP,0x8
005C8A87  3B F7                     CMP ESI,EDI
005C8A89  0F 85 CC 23 00 00         JNZ 0x005cae5b
005C8A8F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C8A92  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
005C8A95  56                        PUSH ESI
005C8A96  8B CB                     MOV ECX,EBX
005C8A98  E8 C6 9A E3 FF            CALL 0x00402563
005C8A9D  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005C8AA0  83 CA FF                  OR EDX,0xffffffff
005C8AA3  3D 48 65 00 00            CMP EAX,0x6548
005C8AA8  0F 87 2E 0F 00 00         JA 0x005c99dc
005C8AAE  0F 84 EE 0E 00 00         JZ 0x005c99a2
005C8AB4  3D 32 63 00 00            CMP EAX,0x6332
005C8AB9  0F 87 B0 01 00 00         JA 0x005c8c6f
005C8ABF  0F 84 99 01 00 00         JZ 0x005c8c5e
005C8AC5  3D 0A 61 00 00            CMP EAX,0x610a
005C8ACA  0F 87 E8 00 00 00         JA 0x005c8bb8
005C8AD0  0F 84 BF 00 00 00         JZ 0x005c8b95
005C8AD6  83 F8 05                  CMP EAX,0x5
005C8AD9  77 56                     JA 0x005c8b31
005C8ADB  74 47                     JZ 0x005c8b24
005C8ADD  2B C7                     SUB EAX,EDI
005C8ADF  74 37                     JZ 0x005c8b18
005C8AE1  83 E8 02                  SUB EAX,0x2
005C8AE4  74 13                     JZ 0x005c8af9
005C8AE6  48                        DEC EAX
005C8AE7  0F 85 84 1E 00 00         JNZ 0x005ca971
005C8AED  8B 03                     MOV EAX,dword ptr [EBX]
005C8AEF  8B CB                     MOV ECX,EBX
005C8AF1  FF 50 14                  CALL dword ptr [EAX + 0x14]
005C8AF4  E9 78 1E 00 00            JMP 0x005ca971
LAB_005c8af9:
005C8AF9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C8AFC  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
005C8AFF  89 93 27 1E 00 00         MOV dword ptr [EBX + 0x1e27],EDX
005C8B05  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C8B08  8B 03                     MOV EAX,dword ptr [EBX]
005C8B0A  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
005C8B0D  8B CB                     MOV ECX,EBX
005C8B0F  52                        PUSH EDX
005C8B10  FF 50 10                  CALL dword ptr [EAX + 0x10]
005C8B13  E9 59 1E 00 00            JMP 0x005ca971
LAB_005c8b18:
005C8B18  8B 03                     MOV EAX,dword ptr [EBX]
005C8B1A  8B CB                     MOV ECX,EBX
005C8B1C  FF 50 0C                  CALL dword ptr [EAX + 0xc]
005C8B1F  E9 4D 1E 00 00            JMP 0x005ca971
LAB_005c8b24:
005C8B24  57                        PUSH EDI
005C8B25  8B CB                     MOV ECX,EBX
005C8B27  E8 A9 BE E3 FF            CALL 0x004049d5
005C8B2C  E9 40 1E 00 00            JMP 0x005ca971
LAB_005c8b31:
005C8B31  2D 05 61 00 00            SUB EAX,0x6105
005C8B36  74 35                     JZ 0x005c8b6d
005C8B38  83 E8 04                  SUB EAX,0x4
005C8B3B  0F 85 30 1E 00 00         JNZ 0x005ca971
switchD_005c8bd0::caseD_611f:
005C8B41  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005C8B48  C7 43 49 00 00 00 00      MOV dword ptr [EBX + 0x49],0x0
005C8B4F  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005C8B52  89 4B 4D                  MOV dword ptr [EBX + 0x4d],ECX
005C8B55  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005C8B58  89 53 51                  MOV dword ptr [EBX + 0x51],EDX
005C8B5B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8B5E  8B CB                     MOV ECX,EBX
005C8B60  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
005C8B63  E8 50 C2 E3 FF            CALL 0x00404db8
005C8B68  E9 04 1E 00 00            JMP 0x005ca971
LAB_005c8b6d:
005C8B6D  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005C8B74  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005C8B77  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005C8B7A  89 4B 4D                  MOV dword ptr [EBX + 0x4d],ECX
005C8B7D  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005C8B80  89 53 51                  MOV dword ptr [EBX + 0x51],EDX
005C8B83  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8B86  8B CB                     MOV ECX,EBX
005C8B88  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
005C8B8B  E8 28 C2 E3 FF            CALL 0x00404db8
005C8B90  E9 DC 1D 00 00            JMP 0x005ca971
LAB_005c8b95:
005C8B95  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005C8B9C  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005C8B9F  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005C8BA2  89 4B 4D                  MOV dword ptr [EBX + 0x4d],ECX
005C8BA5  8B CB                     MOV ECX,EBX
005C8BA7  C7 43 51 06 00 00 00      MOV dword ptr [EBX + 0x51],0x6
005C8BAE  E8 05 C2 E3 FF            CALL 0x00404db8
005C8BB3  E9 B9 1D 00 00            JMP 0x005ca971
LAB_005c8bb8:
005C8BB8  05 E1 9E FF FF            ADD EAX,0xffff9ee1
005C8BBD  3D E4 00 00 00            CMP EAX,0xe4
005C8BC2  0F 87 A9 1D 00 00         JA 0x005ca971
005C8BC8  33 D2                     XOR EDX,EDX
005C8BCA  8A 90 C0 AE 5C 00         MOV DL,byte ptr [EAX + 0x5caec0]
switchD_005c8bd0::switchD:
005C8BD0  FF 24 95 A8 AE 5C 00      JMP dword ptr [EDX*0x4 + 0x5caea8]
switchD_005c8bd0::caseD_6200:
005C8BD7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8BDA  8B CB                     MOV ECX,EBX
005C8BDC  89 83 88 1F 00 00         MOV dword ptr [EBX + 0x1f88],EAX
005C8BE2  8B 13                     MOV EDX,dword ptr [EBX]
005C8BE4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005C8BE7  E9 85 1D 00 00            JMP 0x005ca971
switchD_005c8bd0::caseD_6201:
005C8BEC  6A 00                     PUSH 0x0
005C8BEE  8D 83 6B 1C 00 00         LEA EAX,[EBX + 0x1c6b]
005C8BF4  56                        PUSH ESI
005C8BF5  50                        PUSH EAX
005C8BF6  8B CB                     MOV ECX,EBX
005C8BF8  E8 D7 A5 E3 FF            CALL 0x004031d4
005C8BFD  E9 6F 1D 00 00            JMP 0x005ca971
switchD_005c8bd0::caseD_6202:
005C8C02  6A 00                     PUSH 0x0
005C8C04  8D 8B FC 1C 00 00         LEA ECX,[EBX + 0x1cfc]
005C8C0A  56                        PUSH ESI
005C8C0B  51                        PUSH ECX
005C8C0C  8B CB                     MOV ECX,EBX
005C8C0E  E8 C1 A5 E3 FF            CALL 0x004031d4
005C8C13  E9 59 1D 00 00            JMP 0x005ca971
switchD_005c8bd0::caseD_6203:
005C8C18  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C8C1B  33 C0                     XOR EAX,EAX
005C8C1D  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005C8C21  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005C8C24  03 C8                     ADD ECX,EAX
005C8C26  89 8B AD 1D 00 00         MOV dword ptr [EBX + 0x1dad],ECX
005C8C2C  8B 83 91 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d91]
005C8C32  83 F8 FF                  CMP EAX,-0x1
005C8C35  0F 84 36 1D 00 00         JZ 0x005ca971
005C8C3B  8B D1                     MOV EDX,ECX
005C8C3D  8B 8B A9 1D 00 00         MOV ECX,dword ptr [EBX + 0x1da9]
005C8C43  52                        PUSH EDX
005C8C44  8B 93 95 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d95]
005C8C4A  51                        PUSH ECX
005C8C4B  52                        PUSH EDX
005C8C4C  50                        PUSH EAX
005C8C4D  8B 83 D5 1D 00 00         MOV EAX,dword ptr [EBX + 0x1dd5]
005C8C53  50                        PUSH EAX
005C8C54  E8 D7 AA 0E 00            CALL 0x006b3730
005C8C59  E9 13 1D 00 00            JMP 0x005ca971
LAB_005c8c5e:
005C8C5E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C8C64  56                        PUSH ESI
005C8C65  E8 08 C1 E3 FF            CALL 0x00404d72
005C8C6A  E9 02 1D 00 00            JMP 0x005ca971
LAB_005c8c6f:
005C8C6F  3D 03 65 00 00            CMP EAX,0x6503
005C8C74  0F 87 52 03 00 00         JA 0x005c8fcc
005C8C7A  0F 84 88 02 00 00         JZ 0x005c8f08
005C8C80  3D 35 63 00 00            CMP EAX,0x6335
005C8C85  0F 87 9B 00 00 00         JA 0x005c8d26
005C8C8B  74 45                     JZ 0x005c8cd2
005C8C8D  2D 33 63 00 00            SUB EAX,0x6333
005C8C92  74 23                     JZ 0x005c8cb7
005C8C94  48                        DEC EAX
005C8C95  0F 85 D6 1C 00 00         JNZ 0x005ca971
005C8C9B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C8CA1  6A 00                     PUSH 0x0
005C8CA3  81 C1 1E 04 00 00         ADD ECX,0x41e
005C8CA9  56                        PUSH ESI
005C8CAA  51                        PUSH ECX
005C8CAB  8B CB                     MOV ECX,EBX
005C8CAD  E8 22 A5 E3 FF            CALL 0x004031d4
005C8CB2  E9 BA 1C 00 00            JMP 0x005ca971
LAB_005c8cb7:
005C8CB7  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C8CBD  57                        PUSH EDI
005C8CBE  81 C2 8D 03 00 00         ADD EDX,0x38d
005C8CC4  56                        PUSH ESI
005C8CC5  52                        PUSH EDX
005C8CC6  8B CB                     MOV ECX,EBX
005C8CC8  E8 07 A5 E3 FF            CALL 0x004031d4
005C8CCD  E9 9F 1C 00 00            JMP 0x005ca971
LAB_005c8cd2:
005C8CD2  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8CD5  33 C9                     XOR ECX,ECX
005C8CD7  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
005C8CDB  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005C8CDE  03 C1                     ADD EAX,ECX
005C8CE0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C8CE6  89 81 CF 04 00 00         MOV dword ptr [ECX + 0x4cf],EAX
005C8CEC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C8CF1  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005C8CF7  3B CA                     CMP ECX,EDX
005C8CF9  0F 84 72 1C 00 00         JZ 0x005ca971
005C8CFF  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005C8D05  52                        PUSH EDX
005C8D06  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005C8D0C  52                        PUSH EDX
005C8D0D  8B 90 B7 04 00 00         MOV EDX,dword ptr [EAX + 0x4b7]
005C8D13  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005C8D19  52                        PUSH EDX
005C8D1A  51                        PUSH ECX
005C8D1B  50                        PUSH EAX
005C8D1C  E8 0F AA 0E 00            CALL 0x006b3730
005C8D21  E9 4B 1C 00 00            JMP 0x005ca971
LAB_005c8d26:
005C8D26  2D FF 64 00 00            SUB EAX,0x64ff
005C8D2B  0F 84 8E 00 00 00         JZ 0x005c8dbf
005C8D31  48                        DEC EAX
005C8D32  0F 85 39 1C 00 00         JNZ 0x005ca971
005C8D38  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005C8D3B  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C8D41  6A 00                     PUSH 0x0
005C8D43  6A 00                     PUSH 0x0
005C8D45  6A 00                     PUSH 0x0
005C8D47  6A 00                     PUSH 0x0
005C8D49  6A 00                     PUSH 0x0
005C8D4B  51                        PUSH ECX
005C8D4C  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005C8D4F  E8 3C 7D 14 00            CALL 0x00710a90
005C8D54  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C8D5A  33 C0                     XOR EAX,EAX
005C8D5C  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005C8D60  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
005C8D63  73 0B                     JNC 0x005c8d70
005C8D65  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005C8D68  0F AF C8                  IMUL ECX,EAX
005C8D6B  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
005C8D6E  EB 02                     JMP 0x005c8d72
LAB_005c8d70:
005C8D70  33 C9                     XOR ECX,ECX
LAB_005c8d72:
005C8D72  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005C8D76  66 48                     DEC AX
005C8D78  66 F7 D8                  NEG AX
005C8D7B  1B C0                     SBB EAX,EAX
005C8D7D  83 C0 03                  ADD EAX,0x3
005C8D80  50                        PUSH EAX
005C8D81  6A FF                     PUSH -0x1
005C8D83  6A FF                     PUSH -0x1
005C8D85  51                        PUSH ECX
005C8D86  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C8D8C  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005C8D8F  E8 2C 8C 14 00            CALL 0x007119c0
005C8D94  66 83 7E 16 01            CMP word ptr [ESI + 0x16],0x1
005C8D99  0F 85 D2 1B 00 00         JNZ 0x005ca971
005C8D9F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8DA2  6A 0D                     PUSH 0xd
005C8DA4  6A 0F                     PUSH 0xf
005C8DA6  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C8DA9  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005C8DAC  52                        PUSH EDX
005C8DAD  51                        PUSH ECX
005C8DAE  6A 00                     PUSH 0x0
005C8DB0  6A 00                     PUSH 0x0
005C8DB2  6A 00                     PUSH 0x0
005C8DB4  50                        PUSH EAX
005C8DB5  E8 26 D1 0E 00            CALL 0x006b5ee0
005C8DBA  E9 B2 1B 00 00            JMP 0x005ca971
LAB_005c8dbf:
005C8DBF  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8DC2  BF 05 00 00 00            MOV EDI,0x5
005C8DC7  3B C7                     CMP EAX,EDI
005C8DC9  0F 87 07 01 00 00         JA 0x005c8ed6
switchD_005c8dcf::switchD:
005C8DCF  FF 24 85 A8 AF 5C 00      JMP dword ptr [EAX*0x4 + 0x5cafa8]
switchD_005c8dcf::caseD_0:
005C8DD6  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8DD9  3B C2                     CMP EAX,EDX
005C8DDB  0F 84 F5 00 00 00         JZ 0x005c8ed6
005C8DE1  88 83 57 1F 00 00         MOV byte ptr [EBX + 0x1f57],AL
005C8DE7  25 FF 00 00 00            AND EAX,0xff
005C8DEC  83 E8 00                  SUB EAX,0x0
005C8DEF  74 4A                     JZ 0x005c8e3b
005C8DF1  48                        DEC EAX
005C8DF2  0F 85 D4 00 00 00         JNZ 0x005c8ecc
005C8DF8  80 BB 5C 1F 00 00 05      CMP byte ptr [EBX + 0x1f5c],0x5
005C8DFF  0F 86 C7 00 00 00         JBE 0x005c8ecc
005C8E05  8B 83 64 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f64]
005C8E0B  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C8E0E  52                        PUSH EDX
005C8E0F  50                        PUSH EAX
005C8E10  6A 02                     PUSH 0x2
005C8E12  8B CB                     MOV ECX,EBX
005C8E14  C6 83 5C 1F 00 00 04      MOV byte ptr [EBX + 0x1f5c],0x4
005C8E1B  89 7B 2D                  MOV dword ptr [EBX + 0x2d],EDI
005C8E1E  E8 5D D2 11 00            CALL 0x006e6080
005C8E23  8B 8B 80 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f80]
005C8E29  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C8E2F  51                        PUSH ECX
005C8E30  52                        PUSH EDX
005C8E31  E8 9A A7 0E 00            CALL 0x006b35d0
005C8E36  E9 91 00 00 00            JMP 0x005c8ecc
LAB_005c8e3b:
005C8E3B  80 BB 5C 1F 00 00 03      CMP byte ptr [EBX + 0x1f5c],0x3
005C8E42  0F 86 84 00 00 00         JBE 0x005c8ecc
005C8E48  8B 8B 64 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f64]
005C8E4E  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005C8E51  50                        PUSH EAX
005C8E52  51                        PUSH ECX
005C8E53  6A 02                     PUSH 0x2
005C8E55  8B CB                     MOV ECX,EBX
005C8E57  C6 83 5C 1F 00 00 03      MOV byte ptr [EBX + 0x1f5c],0x3
005C8E5E  89 7B 2D                  MOV dword ptr [EBX + 0x2d],EDI
005C8E61  E8 1A D2 11 00            CALL 0x006e6080
005C8E66  8B 93 80 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f80]
005C8E6C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C8E71  52                        PUSH EDX
005C8E72  50                        PUSH EAX
005C8E73  E8 58 A7 0E 00            CALL 0x006b35d0
005C8E78  EB 52                     JMP 0x005c8ecc
switchD_005c8dcf::caseD_1:
005C8E7A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8E7D  3B C2                     CMP EAX,EDX
005C8E7F  74 55                     JZ 0x005c8ed6
005C8E81  8A C8                     MOV CL,AL
005C8E83  80 C1 02                  ADD CL,0x2
005C8E86  88 8B 5C 1F 00 00         MOV byte ptr [EBX + 0x1f5c],CL
005C8E8C  EB 3E                     JMP 0x005c8ecc
switchD_005c8dcf::caseD_2:
005C8E8E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8E91  3B C2                     CMP EAX,EDX
005C8E93  74 41                     JZ 0x005c8ed6
005C8E95  89 83 58 1F 00 00         MOV dword ptr [EBX + 0x1f58],EAX
005C8E9B  EB 2F                     JMP 0x005c8ecc
switchD_005c8dcf::caseD_3:
005C8E9D  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8EA0  3B C2                     CMP EAX,EDX
005C8EA2  74 32                     JZ 0x005c8ed6
005C8EA4  8A D0                     MOV DL,AL
005C8EA6  88 93 5F 1F 00 00         MOV byte ptr [EBX + 0x1f5f],DL
005C8EAC  EB 1E                     JMP 0x005c8ecc
switchD_005c8dcf::caseD_4:
005C8EAE  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8EB1  3B C2                     CMP EAX,EDX
005C8EB3  74 21                     JZ 0x005c8ed6
005C8EB5  88 83 5D 1F 00 00         MOV byte ptr [EBX + 0x1f5d],AL
005C8EBB  EB 0F                     JMP 0x005c8ecc
switchD_005c8dcf::caseD_5:
005C8EBD  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C8EC0  3B C2                     CMP EAX,EDX
005C8EC2  74 12                     JZ 0x005c8ed6
005C8EC4  8A C8                     MOV CL,AL
005C8EC6  88 8B 5E 1F 00 00         MOV byte ptr [EBX + 0x1f5e],CL
LAB_005c8ecc:
005C8ECC  C7 83 47 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f47],0x0
switchD_005c8dcf::default:
005C8ED6  89 7B 2D                  MOV dword ptr [EBX + 0x2d],EDI
005C8ED9  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8EDC  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C8EDF  8B 8C 83 60 1F 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1f60]
005C8EE6  52                        PUSH EDX
005C8EE7  51                        PUSH ECX
005C8EE8  6A 02                     PUSH 0x2
005C8EEA  8B CB                     MOV ECX,EBX
005C8EEC  E8 8F D1 11 00            CALL 0x006e6080
005C8EF1  8B 93 80 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f80]
005C8EF7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C8EFC  52                        PUSH EDX
005C8EFD  50                        PUSH EAX
005C8EFE  E8 CD A6 0E 00            CALL 0x006b35d0
005C8F03  E9 69 1A 00 00            JMP 0x005ca971
LAB_005c8f08:
005C8F08  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C8F0E  33 C9                     XOR ECX,ECX
005C8F10  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
005C8F14  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
005C8F17  73 0B                     JNC 0x005c8f24
005C8F19  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005C8F1C  0F AF C1                  IMUL EAX,ECX
005C8F1F  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005C8F22  EB 02                     JMP 0x005c8f26
LAB_005c8f24:
005C8F24  33 C0                     XOR EAX,EAX
LAB_005c8f26:
005C8F26  8A 80 04 01 00 00         MOV AL,byte ptr [EAX + 0x104]
005C8F2C  3C FF                     CMP AL,0xff
005C8F2E  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005C8F31  74 6E                     JZ 0x005c8fa1
005C8F33  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005C8F36  25 FF 00 00 00            AND EAX,0xff
005C8F3B  83 F8 07                  CMP EAX,0x7
005C8F3E  77 3F                     JA 0x005c8f7f
switchD_005c8f40::switchD:
005C8F40  FF 24 85 C0 AF 5C 00      JMP dword ptr [EAX*0x4 + 0x5cafc0]
switchD_005c8f40::caseD_0:
005C8F47  B9 FC 00 00 00            MOV ECX,0xfc
005C8F4C  EB 36                     JMP 0x005c8f84
switchD_005c8f40::caseD_1:
005C8F4E  B9 FA 00 00 00            MOV ECX,0xfa
005C8F53  EB 2F                     JMP 0x005c8f84
switchD_005c8f40::caseD_2:
005C8F55  B9 FB 00 00 00            MOV ECX,0xfb
005C8F5A  EB 28                     JMP 0x005c8f84
switchD_005c8f40::caseD_3:
005C8F5C  B9 F9 00 00 00            MOV ECX,0xf9
005C8F61  EB 21                     JMP 0x005c8f84
switchD_005c8f40::caseD_4:
005C8F63  B9 FD 00 00 00            MOV ECX,0xfd
005C8F68  EB 1A                     JMP 0x005c8f84
switchD_005c8f40::caseD_5:
005C8F6A  B9 FE 00 00 00            MOV ECX,0xfe
005C8F6F  EB 13                     JMP 0x005c8f84
switchD_005c8f40::caseD_6:
005C8F71  B9 F3 00 00 00            MOV ECX,0xf3
005C8F76  EB 0C                     JMP 0x005c8f84
switchD_005c8f40::caseD_7:
005C8F78  B9 07 00 00 00            MOV ECX,0x7
005C8F7D  EB 05                     JMP 0x005c8f84
switchD_005c8f40::default:
005C8F7F  B9 FF 00 00 00            MOV ECX,0xff
LAB_005c8f84:
005C8F84  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8F87  51                        PUSH ECX
005C8F88  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C8F8B  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C8F8E  83 E9 04                  SUB ECX,0x4
005C8F91  83 EA 04                  SUB EDX,0x4
005C8F94  51                        PUSH ECX
005C8F95  52                        PUSH EDX
005C8F96  6A 02                     PUSH 0x2
005C8F98  6A 02                     PUSH 0x2
005C8F9A  57                        PUSH EDI
005C8F9B  50                        PUSH EAX
005C8F9C  E8 CF B1 0E 00            CALL 0x006b4170
LAB_005c8fa1:
005C8FA1  66 83 7E 16 01            CMP word ptr [ESI + 0x16],0x1
005C8FA6  0F 85 C5 19 00 00         JNZ 0x005ca971
005C8FAC  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C8FAF  6A 0D                     PUSH 0xd
005C8FB1  6A 0F                     PUSH 0xf
005C8FB3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C8FB6  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C8FB9  51                        PUSH ECX
005C8FBA  52                        PUSH EDX
005C8FBB  6A 00                     PUSH 0x0
005C8FBD  6A 00                     PUSH 0x0
005C8FBF  6A 00                     PUSH 0x0
005C8FC1  50                        PUSH EAX
005C8FC2  E8 19 CF 0E 00            CALL 0x006b5ee0
005C8FC7  E9 A5 19 00 00            JMP 0x005ca971
LAB_005c8fcc:
005C8FCC  05 FA 9A FF FF            ADD EAX,0xffff9afa
005C8FD1  83 F8 41                  CMP EAX,0x41
005C8FD4  0F 87 97 19 00 00         JA 0x005ca971
005C8FDA  33 C9                     XOR ECX,ECX
005C8FDC  8A 88 F8 AF 5C 00         MOV CL,byte ptr [EAX + 0x5caff8]
switchD_005c8fe2::switchD:
005C8FE2  FF 24 8D E0 AF 5C 00      JMP dword ptr [ECX*0x4 + 0x5cafe0]
switchD_005c8fe2::caseD_6506:
005C8FE9  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C8FEF  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C8FF2  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005C8FF5  0F 83 76 19 00 00         JNC 0x005ca971
005C8FFB  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C8FFE  83 FA 08                  CMP EDX,0x8
005C9001  0F 87 6A 19 00 00         JA 0x005ca971
switchD_005c9007::switchD:
005C9007  FF 24 95 3C B0 5C 00      JMP dword ptr [EDX*0x4 + 0x5cb03c]
switchD_005c9007::caseD_0:
005C900E  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C9014  3C 06                     CMP AL,0x6
005C9016  74 0E                     JZ 0x005c9026
005C9018  3C 01                     CMP AL,0x1
005C901A  74 0A                     JZ 0x005c9026
005C901C  8B 15 02 C5 80 00         MOV EDX,dword ptr [0x0080c502]
005C9022  3C 02                     CMP AL,0x2
005C9024  75 06                     JNZ 0x005c902c
LAB_005c9026:
005C9026  8B 15 06 C5 80 00         MOV EDX,dword ptr [0x0080c506]
LAB_005c902c:
005C902C  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
005C902F  73 3B                     JNC 0x005c906c
005C9031  3C 06                     CMP AL,0x6
005C9033  74 0E                     JZ 0x005c9043
005C9035  3C 01                     CMP AL,0x1
005C9037  74 0A                     JZ 0x005c9043
005C9039  8B 3D 02 C5 80 00         MOV EDI,dword ptr [0x0080c502]
005C903F  3C 02                     CMP AL,0x2
005C9041  75 06                     JNZ 0x005c9049
LAB_005c9043:
005C9043  8B 3D 06 C5 80 00         MOV EDI,dword ptr [0x0080c506]
LAB_005c9049:
005C9049  3C 06                     CMP AL,0x6
005C904B  74 0D                     JZ 0x005c905a
005C904D  3C 01                     CMP AL,0x1
005C904F  74 09                     JZ 0x005c905a
005C9051  3C 02                     CMP AL,0x2
005C9053  A1 02 C5 80 00            MOV EAX,[0x0080c502]
005C9058  75 05                     JNZ 0x005c905f
LAB_005c905a:
005C905A  A1 06 C5 80 00            MOV EAX,[0x0080c506]
LAB_005c905f:
005C905F  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C9062  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
005C9065  0F AF D1                  IMUL EDX,ECX
005C9068  03 D0                     ADD EDX,EAX
005C906A  EB 02                     JMP 0x005c906e
LAB_005c906c:
005C906C  33 D2                     XOR EDX,EDX
LAB_005c906e:
005C906E  85 D2                     TEST EDX,EDX
005C9070  74 56                     JZ 0x005c90c8
005C9072  89 8B 5F 1C 00 00         MOV dword ptr [EBX + 0x1c5f],ECX
005C9078  8B 82 90 00 00 00         MOV EAX,dword ptr [EDX + 0x90]
005C907E  A3 5C 99 80 00            MOV [0x0080995c],EAX
005C9083  8D 7A 4C                  LEA EDI,[EDX + 0x4c]
005C9086  83 C9 FF                  OR ECX,0xffffffff
005C9089  33 C0                     XOR EAX,EAX
005C908B  F2 AE                     SCASB.REPNE ES:EDI
005C908D  F7 D1                     NOT ECX
005C908F  2B F9                     SUB EDI,ECX
005C9091  83 C2 70                  ADD EDX,0x70
005C9094  8B C1                     MOV EAX,ECX
005C9096  8B F7                     MOV ESI,EDI
005C9098  BF 60 99 80 00            MOV EDI,0x809960
005C909D  C1 E9 02                  SHR ECX,0x2
005C90A0  F3 A5                     MOVSD.REP ES:EDI,ESI
005C90A2  8B C8                     MOV ECX,EAX
005C90A4  83 E1 03                  AND ECX,0x3
005C90A7  F3 A4                     MOVSB.REP ES:EDI,ESI
005C90A9  8B 8B 63 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c63]
005C90AF  51                        PUSH ECX
005C90B0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C90B6  52                        PUSH EDX
005C90B7  8B 93 43 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f43]
005C90BD  52                        PUSH EDX
005C90BE  E8 30 9B E3 FF            CALL 0x00402bf3
005C90C3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C90C6  EB 3D                     JMP 0x005c9105
LAB_005c90c8:
005C90C8  C7 83 5F 1C 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1c5f],0x0
005C90D2  B9 08 00 00 00            MOV ECX,0x8
005C90D7  33 C0                     XOR EAX,EAX
005C90D9  BF 60 99 80 00            MOV EDI,0x809960
005C90DE  C7 05 5C 99 80 00 01 00 00 00  MOV dword ptr [0x0080995c],0x1
005C90E8  F3 AB                     STOSD.REP ES:EDI
005C90EA  8B 83 63 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c63]
005C90F0  8B 8B 43 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f43]
005C90F6  50                        PUSH EAX
005C90F7  6A 00                     PUSH 0x0
005C90F9  51                        PUSH ECX
005C90FA  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C9100  E8 EE 9A E3 FF            CALL 0x00402bf3
LAB_005c9105:
005C9105  8B 83 25 21 00 00         MOV EAX,dword ptr [EBX + 0x2125]
005C910B  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C910E  52                        PUSH EDX
005C910F  50                        PUSH EAX
005C9110  6A 02                     PUSH 0x2
005C9112  8B CB                     MOV ECX,EBX
005C9114  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C911B  E8 60 CF 11 00            CALL 0x006e6080
005C9120  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C9125  84 C0                     TEST AL,AL
005C9127  0F 84 81 00 00 00         JZ 0x005c91ae
005C912D  A1 64 17 81 00            MOV EAX,[0x00811764]
005C9132  85 C0                     TEST EAX,EAX
005C9134  74 78                     JZ 0x005c91ae
005C9136  83 C0 18                  ADD EAX,0x18
005C9139  8D 8B 5F 1A 00 00         LEA ECX,[EBX + 0x1a5f]
005C913F  50                        PUSH EAX
005C9140  51                        PUSH ECX
005C9141  E8 1A D0 0E 00            CALL 0x006b6160
005C9146  C6 83 7F 1A 00 00 01      MOV byte ptr [EBX + 0x1a7f],0x1
005C914D  8A 15 C6 87 80 00         MOV DL,byte ptr [0x008087c6]
005C9153  88 93 80 1A 00 00         MOV byte ptr [EBX + 0x1a80],DL
005C9159  66 A1 C2 87 80 00         MOV AX,[0x008087c2]
005C915F  D1 E8                     SHR EAX,0x1
005C9161  88 83 81 1A 00 00         MOV byte ptr [EBX + 0x1a81],AL
005C9167  8B 0D 5C 99 80 00         MOV ECX,dword ptr [0x0080995c]
005C916D  51                        PUSH ECX
005C916E  8D 55 A0                  LEA EDX,[EBP + -0x60]
005C9171  68 84 C5 7C 00            PUSH 0x7cc584
005C9176  52                        PUSH EDX
005C9177  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C917D  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
005C9180  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005C9183  8D 83 82 1A 00 00         LEA EAX,[EBX + 0x1a82]
005C9189  68 D5 01 00 00            PUSH 0x1d5
005C918E  68 C3 C3 80 00            PUSH 0x80c3c3
005C9193  89 08                     MOV dword ptr [EAX],ECX
005C9195  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005C9198  8D 83 8A 1A 00 00         LEA EAX,[EBX + 0x1a8a]
005C919E  50                        PUSH EAX
005C919F  E8 9C 51 16 00            CALL 0x0072e340
005C91A4  83 C4 18                  ADD ESP,0x18
005C91A7  C6 83 5E 1C 00 00 00      MOV byte ptr [EBX + 0x1c5e],0x0
LAB_005c91ae:
005C91AE  8B 13                     MOV EDX,dword ptr [EBX]
005C91B0  8B CB                     MOV ECX,EBX
005C91B2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005C91B5  E9 B7 17 00 00            JMP 0x005ca971
switchD_005c9007::caseD_3:
005C91BA  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C91BD  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005C91C0  0F AF D1                  IMUL EDX,ECX
005C91C3  8A 8C 02 04 01 00 00      MOV CL,byte ptr [EDX + EAX*0x1 + 0x104]
005C91CA  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C91CD  88 0D 91 8A 80 00         MOV byte ptr [0x00808a91],CL
005C91D3  8B 83 31 21 00 00         MOV EAX,dword ptr [EBX + 0x2131]
005C91D9  52                        PUSH EDX
005C91DA  50                        PUSH EAX
005C91DB  6A 02                     PUSH 0x2
005C91DD  8B CB                     MOV ECX,EBX
005C91DF  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C91E6  E8 95 CE 11 00            CALL 0x006e6080
005C91EB  E9 81 17 00 00            JMP 0x005ca971
switchD_005c9007::caseD_4:
005C91F0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C91F3  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005C91F6  0F AF D1                  IMUL EDX,ECX
005C91F9  8A 8C 02 04 01 00 00      MOV CL,byte ptr [EDX + EAX*0x1 + 0x104]
005C9200  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C9203  88 0D 90 8A 80 00         MOV byte ptr [0x00808a90],CL
005C9209  8B 83 35 21 00 00         MOV EAX,dword ptr [EBX + 0x2135]
005C920F  52                        PUSH EDX
005C9210  50                        PUSH EAX
005C9211  6A 02                     PUSH 0x2
005C9213  8B CB                     MOV ECX,EBX
005C9215  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C921C  E8 5F CE 11 00            CALL 0x006e6080
005C9221  E9 4B 17 00 00            JMP 0x005ca971
switchD_005c9007::caseD_5:
005C9226  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C9229  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005C922C  0F AF D1                  IMUL EDX,ECX
005C922F  8D 7B 1D                  LEA EDI,[EBX + 0x1d]
005C9232  8A 8C 02 04 01 00 00      MOV CL,byte ptr [EDX + EAX*0x1 + 0x104]
005C9239  57                        PUSH EDI
005C923A  88 0D 92 8A 80 00         MOV byte ptr [0x00808a92],CL
005C9240  8B 93 39 21 00 00         MOV EDX,dword ptr [EBX + 0x2139]
005C9246  52                        PUSH EDX
005C9247  6A 02                     PUSH 0x2
005C9249  8B CB                     MOV ECX,EBX
005C924B  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9252  E8 29 CE 11 00            CALL 0x006e6080
005C9257  A0 92 8A 80 00            MOV AL,[0x00808a92]
005C925C  8A 0D 93 8A 80 00         MOV CL,byte ptr [0x00808a93]
005C9262  3A C1                     CMP AL,CL
005C9264  0F 86 07 17 00 00         JBE 0x005ca971
005C926A  A2 93 8A 80 00            MOV [0x00808a93],AL
005C926F  8B 83 3D 21 00 00         MOV EAX,dword ptr [EBX + 0x213d]
005C9275  57                        PUSH EDI
005C9276  50                        PUSH EAX
005C9277  6A 02                     PUSH 0x2
005C9279  8B CB                     MOV ECX,EBX
005C927B  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9282  E8 F9 CD 11 00            CALL 0x006e6080
005C9287  E9 E5 16 00 00            JMP 0x005ca971
switchD_005c9007::caseD_6:
005C928C  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C928F  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005C9292  0F AF D1                  IMUL EDX,ECX
005C9295  8D 7B 1D                  LEA EDI,[EBX + 0x1d]
005C9298  8A 8C 02 04 01 00 00      MOV CL,byte ptr [EDX + EAX*0x1 + 0x104]
005C929F  57                        PUSH EDI
005C92A0  88 0D 93 8A 80 00         MOV byte ptr [0x00808a93],CL
005C92A6  8B 93 3D 21 00 00         MOV EDX,dword ptr [EBX + 0x213d]
005C92AC  52                        PUSH EDX
005C92AD  6A 02                     PUSH 0x2
005C92AF  8B CB                     MOV ECX,EBX
005C92B1  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C92B8  E8 C3 CD 11 00            CALL 0x006e6080
005C92BD  A0 93 8A 80 00            MOV AL,[0x00808a93]
005C92C2  8A 0D 92 8A 80 00         MOV CL,byte ptr [0x00808a92]
005C92C8  3A C8                     CMP CL,AL
005C92CA  0F 86 A1 16 00 00         JBE 0x005ca971
005C92D0  A2 92 8A 80 00            MOV [0x00808a92],AL
005C92D5  8B 83 39 21 00 00         MOV EAX,dword ptr [EBX + 0x2139]
005C92DB  57                        PUSH EDI
005C92DC  50                        PUSH EAX
005C92DD  6A 02                     PUSH 0x2
005C92DF  8B CB                     MOV ECX,EBX
005C92E1  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C92E8  E8 93 CD 11 00            CALL 0x006e6080
005C92ED  E9 7F 16 00 00            JMP 0x005ca971
switchD_005c9007::caseD_7:
005C92F2  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C92F5  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005C92F8  0F AF D1                  IMUL EDX,ECX
005C92FB  8B 8C 02 04 01 00 00      MOV ECX,dword ptr [EDX + EAX*0x1 + 0x104]
005C9302  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C9305  89 0D 97 8A 80 00         MOV dword ptr [0x00808a97],ECX
005C930B  8B 83 41 21 00 00         MOV EAX,dword ptr [EBX + 0x2141]
005C9311  52                        PUSH EDX
005C9312  50                        PUSH EAX
005C9313  6A 02                     PUSH 0x2
005C9315  8B CB                     MOV ECX,EBX
005C9317  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C931E  E8 5D CD 11 00            CALL 0x006e6080
005C9323  E9 49 16 00 00            JMP 0x005ca971
switchD_005c9007::caseD_8:
005C9328  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005C932B  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005C932E  0F AF D1                  IMUL EDX,ECX
005C9331  8A 8C 02 04 01 00 00      MOV CL,byte ptr [EDX + EAX*0x1 + 0x104]
005C9338  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C933B  88 0D 9B 8A 80 00         MOV byte ptr [0x00808a9b],CL
005C9341  8B 83 45 21 00 00         MOV EAX,dword ptr [EBX + 0x2145]
005C9347  52                        PUSH EDX
005C9348  50                        PUSH EAX
005C9349  6A 02                     PUSH 0x2
005C934B  8B CB                     MOV ECX,EBX
005C934D  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9354  E8 27 CD 11 00            CALL 0x006e6080
005C9359  E9 13 16 00 00            JMP 0x005ca971
switchD_005c8fe2::caseD_653f:
005C935E  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9362  0F 85 09 16 00 00         JNZ 0x005ca971
005C9368  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C936E  3C 06                     CMP AL,0x6
005C9370  74 0E                     JZ 0x005c9380
005C9372  3C 01                     CMP AL,0x1
005C9374  74 0A                     JZ 0x005c9380
005C9376  8B 15 02 C5 80 00         MOV EDX,dword ptr [0x0080c502]
005C937C  3C 02                     CMP AL,0x2
005C937E  75 06                     JNZ 0x005c9386
LAB_005c9380:
005C9380  8B 15 06 C5 80 00         MOV EDX,dword ptr [0x0080c506]
LAB_005c9386:
005C9386  33 C9                     XOR ECX,ECX
005C9388  C7 83 71 21 00 00 06 65 00 00  MOV dword ptr [EBX + 0x2171],0x6506
005C9392  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005C9398  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005C93A2  89 8B A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ECX
005C93A8  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C93AE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005C93B1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C93B4  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
005C93B7  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C93BA  3B C8                     CMP ECX,EAX
005C93BC  73 5C                     JNC 0x005c941a
LAB_005c93be:
005C93BE  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
005C93C1  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
005C93C4  0F AF F9                  IMUL EDI,ECX
005C93C7  03 F8                     ADD EDI,EAX
005C93C9  85 FF                     TEST EDI,EDI
005C93CB  74 42                     JZ 0x005c940f
005C93CD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005C93D0  33 C0                     XOR EAX,EAX
005C93D2  89 8B 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],ECX
005C93D8  83 C9 FF                  OR ECX,0xffffffff
005C93DB  F2 AE                     SCASB.REPNE ES:EDI
005C93DD  F7 D1                     NOT ECX
005C93DF  2B F9                     SUB EDI,ECX
005C93E1  8D 93 33 1E 00 00         LEA EDX,[EBX + 0x1e33]
005C93E7  8B C1                     MOV EAX,ECX
005C93E9  8B F7                     MOV ESI,EDI
005C93EB  8B FA                     MOV EDI,EDX
005C93ED  52                        PUSH EDX
005C93EE  C1 E9 02                  SHR ECX,0x2
005C93F1  F3 A5                     MOVSD.REP ES:EDI,ESI
005C93F3  8B C8                     MOV ECX,EAX
005C93F5  83 E1 03                  AND ECX,0x3
005C93F8  F3 A4                     MOVSB.REP ES:EDI,ESI
005C93FA  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C9400  51                        PUSH ECX
005C9401  E8 BA 4D 0E 00            CALL 0x006ae1c0
005C9406  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005C9409  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C940C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_005c940f:
005C940F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C9412  41                        INC ECX
005C9413  3B C8                     CMP ECX,EAX
005C9415  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C9418  72 A4                     JC 0x005c93be
LAB_005c941a:
005C941A  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C9420  8B 8B 5F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c5f]
005C9426  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C9429  89 83 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EAX
005C942F  89 8B A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ECX
005C9435  C7 83 C5 21 00 00 C5 01 00 00  MOV dword ptr [EBX + 0x21c5],0x1c5
005C943F  C7 83 CD 21 00 00 54 01 00 00  MOV dword ptr [EBX + 0x21cd],0x154
005C9449  C7 83 C9 21 00 00 4E 01 00 00  MOV dword ptr [EBX + 0x21c9],0x14e
005C9453  E9 97 0B 00 00            JMP 0x005c9fef
switchD_005c8fe2::caseD_6542:
005C9458  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C945C  0F 85 0F 15 00 00         JNZ 0x005ca971
005C9462  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005C9465  C7 83 71 21 00 00 06 65 00 00  MOV dword ptr [EBX + 0x2171],0x6506
005C946F  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
005C9472  81 EA 3F 65 00 00         SUB EDX,0x653f
005C9478  89 93 79 21 00 00         MOV dword ptr [EBX + 0x2179],EDX
005C947E  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005C9488  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C948E  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
005C9495  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C949B  51                        PUSH ECX
005C949C  68 4E 23 00 00            PUSH 0x234e
005C94A1  E8 9A 6C 0E 00            CALL 0x006b0140
005C94A6  8B F8                     MOV EDI,EAX
005C94A8  83 C9 FF                  OR ECX,0xffffffff
005C94AB  33 C0                     XOR EAX,EAX
005C94AD  F2 AE                     SCASB.REPNE ES:EDI
005C94AF  F7 D1                     NOT ECX
005C94B1  2B F9                     SUB EDI,ECX
005C94B3  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C94B9  8B D1                     MOV EDX,ECX
005C94BB  8B F7                     MOV ESI,EDI
005C94BD  8B F8                     MOV EDI,EAX
005C94BF  50                        PUSH EAX
005C94C0  C1 E9 02                  SHR ECX,0x2
005C94C3  F3 A5                     MOVSD.REP ES:EDI,ESI
005C94C5  8B CA                     MOV ECX,EDX
005C94C7  83 E1 03                  AND ECX,0x3
005C94CA  F3 A4                     MOVSB.REP ES:EDI,ESI
005C94CC  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005C94D6  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C94DC  50                        PUSH EAX
005C94DD  E8 DE 4C 0E 00            CALL 0x006ae1c0
005C94E2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C94E8  51                        PUSH ECX
005C94E9  68 4C 23 00 00            PUSH 0x234c
005C94EE  E8 4D 6C 0E 00            CALL 0x006b0140
005C94F3  8B F8                     MOV EDI,EAX
005C94F5  83 C9 FF                  OR ECX,0xffffffff
005C94F8  33 C0                     XOR EAX,EAX
005C94FA  F2 AE                     SCASB.REPNE ES:EDI
005C94FC  F7 D1                     NOT ECX
005C94FE  2B F9                     SUB EDI,ECX
005C9500  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9506  8B D1                     MOV EDX,ECX
005C9508  8B F7                     MOV ESI,EDI
005C950A  8B F8                     MOV EDI,EAX
005C950C  50                        PUSH EAX
005C950D  C1 E9 02                  SHR ECX,0x2
005C9510  F3 A5                     MOVSD.REP ES:EDI,ESI
005C9512  8B CA                     MOV ECX,EDX
005C9514  83 E1 03                  AND ECX,0x3
005C9517  F3 A4                     MOVSB.REP ES:EDI,ESI
005C9519  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005C9523  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9529  50                        PUSH EAX
005C952A  E8 91 4C 0E 00            CALL 0x006ae1c0
005C952F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C9535  51                        PUSH ECX
005C9536  68 4F 23 00 00            PUSH 0x234f
005C953B  E8 00 6C 0E 00            CALL 0x006b0140
005C9540  8B F8                     MOV EDI,EAX
005C9542  83 C9 FF                  OR ECX,0xffffffff
005C9545  33 C0                     XOR EAX,EAX
005C9547  F2 AE                     SCASB.REPNE ES:EDI
005C9549  F7 D1                     NOT ECX
005C954B  2B F9                     SUB EDI,ECX
005C954D  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9553  8B D1                     MOV EDX,ECX
005C9555  8B F7                     MOV ESI,EDI
005C9557  8B F8                     MOV EDI,EAX
005C9559  50                        PUSH EAX
005C955A  C1 E9 02                  SHR ECX,0x2
005C955D  F3 A5                     MOVSD.REP ES:EDI,ESI
005C955F  8B CA                     MOV ECX,EDX
005C9561  83 E1 03                  AND ECX,0x3
005C9564  F3 A4                     MOVSB.REP ES:EDI,ESI
005C9566  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005C9570  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9576  50                        PUSH EAX
005C9577  E8 44 4C 0E 00            CALL 0x006ae1c0
005C957C  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C9582  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005C9585  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005C958B  8B 83 79 21 00 00         MOV EAX,dword ptr [EBX + 0x2179]
005C9591  83 C0 FD                  ADD EAX,-0x3
005C9594  83 F8 03                  CMP EAX,0x3
005C9597  77 41                     JA 0x005c95da
switchD_005c9599::switchD:
005C9599  FF 24 85 60 B0 5C 00      JMP dword ptr [EAX*0x4 + 0x5cb060]
switchD_005c9599::caseD_3:
005C95A0  33 C0                     XOR EAX,EAX
005C95A2  A0 91 8A 80 00            MOV AL,[0x00808a91]
005C95A7  EB 2B                     JMP 0x005c95d4
switchD_005c9599::caseD_4:
005C95A9  8B 0D 90 8A 80 00         MOV ECX,dword ptr [0x00808a90]
005C95AF  81 E1 FF 00 00 00         AND ECX,0xff
005C95B5  89 8B A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ECX
005C95BB  EB 1D                     JMP 0x005c95da
switchD_005c9599::caseD_5:
005C95BD  33 D2                     XOR EDX,EDX
005C95BF  8A 15 92 8A 80 00         MOV DL,byte ptr [0x00808a92]
005C95C5  89 93 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EDX
005C95CB  EB 0D                     JMP 0x005c95da
switchD_005c9599::caseD_6:
005C95CD  33 C0                     XOR EAX,EAX
005C95CF  A0 93 8A 80 00            MOV AL,[0x00808a93]
LAB_005c95d4:
005C95D4  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
switchD_005c9599::default:
005C95DA  8B 83 79 21 00 00         MOV EAX,dword ptr [EBX + 0x2179]
005C95E0  83 C0 FD                  ADD EAX,-0x3
005C95E3  83 F8 03                  CMP EAX,0x3
005C95E6  77 1D                     JA 0x005c9605
switchD_005c95e8::switchD:
005C95E8  FF 24 85 70 B0 5C 00      JMP dword ptr [EAX*0x4 + 0x5cb070]
switchD_005c95e8::caseD_3:
005C95EF  C7 83 C5 21 00 00 C5 01 00 00  MOV dword ptr [EBX + 0x21c5],0x1c5
005C95F9  EB 0A                     JMP 0x005c9605
switchD_005c95e8::caseD_4:
005C95FB  C7 83 C5 21 00 00 BF 02 00 00  MOV dword ptr [EBX + 0x21c5],0x2bf
switchD_005c95e8::default:
005C9605  C7 83 CD 21 00 00 5A 00 00 00  MOV dword ptr [EBX + 0x21cd],0x5a
005C960F  8B 83 79 21 00 00         MOV EAX,dword ptr [EBX + 0x2179]
005C9615  83 C0 FD                  ADD EAX,-0x3
005C9618  83 F8 03                  CMP EAX,0x3
005C961B  77 1D                     JA 0x005c963a
switchD_005c961d::switchD:
005C961D  FF 24 85 80 B0 5C 00      JMP dword ptr [EAX*0x4 + 0x5cb080]
switchD_005c961d::caseD_3:
005C9624  C7 83 C9 21 00 00 64 01 00 00  MOV dword ptr [EBX + 0x21c9],0x164
005C962E  EB 0A                     JMP 0x005c963a
switchD_005c961d::caseD_5:
005C9630  C7 83 C9 21 00 00 7A 01 00 00  MOV dword ptr [EBX + 0x21c9],0x17a
switchD_005c961d::default:
005C963A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C9640  8B 71 34                  MOV ESI,dword ptr [ECX + 0x34]
005C9643  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005C9649  85 C0                     TEST EAX,EAX
005C964B  74 09                     JZ 0x005c9656
LAB_005c964d:
005C964D  56                        PUSH ESI
005C964E  E8 3D 71 14 00            CALL 0x00710790
005C9653  83 C4 04                  ADD ESP,0x4
LAB_005c9656:
005C9656  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
005C965C  6A 00                     PUSH 0x0
005C965E  89 93 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EDX
005C9664  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C9667  8D 93 61 21 00 00         LEA EDX,[EBX + 0x2161]
005C966D  8B 01                     MOV EAX,dword ptr [ECX]
005C966F  52                        PUSH EDX
005C9670  6A 00                     PUSH 0x0
005C9672  6A 00                     PUSH 0x0
005C9674  68 EF 00 01 00            PUSH 0x100ef
005C9679  FF 50 08                  CALL dword ptr [EAX + 0x8]
005C967C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C967F  E9 ED 12 00 00            JMP 0x005ca971
switchD_005c8fe2::caseD_6546:
005C9684  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9688  0F 85 E3 12 00 00         JNZ 0x005ca971
005C968E  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
005C9694  C7 83 71 21 00 00 06 65 00 00  MOV dword ptr [EBX + 0x2171],0x6506
005C969E  C7 83 79 21 00 00 07 00 00 00  MOV dword ptr [EBX + 0x2179],0x7
005C96A8  33 C0                     XOR EAX,EAX
005C96AA  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005C96B4  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005C96BA  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C96C0  8D B3 33 1E 00 00         LEA ESI,[EBX + 0x1e33]
005C96C6  6A 64                     PUSH 0x64
005C96C8  68 90 18 7C 00            PUSH 0x7c1890
005C96CD  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005C96D0  56                        PUSH ESI
005C96D1  C7 83 37 1F 00 00 64 00 00 00  MOV dword ptr [EBX + 0x1f37],0x64
005C96DB  FF D7                     CALL EDI
005C96DD  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C96E3  83 C4 0C                  ADD ESP,0xc
005C96E6  56                        PUSH ESI
005C96E7  52                        PUSH EDX
005C96E8  E8 D3 4A 0E 00            CALL 0x006ae1c0
005C96ED  68 96 00 00 00            PUSH 0x96
005C96F2  68 90 18 7C 00            PUSH 0x7c1890
005C96F7  56                        PUSH ESI
005C96F8  C7 83 37 1F 00 00 96 00 00 00  MOV dword ptr [EBX + 0x1f37],0x96
005C9702  FF D7                     CALL EDI
005C9704  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C970A  83 C4 0C                  ADD ESP,0xc
005C970D  56                        PUSH ESI
005C970E  50                        PUSH EAX
005C970F  E8 AC 4A 0E 00            CALL 0x006ae1c0
005C9714  68 C8 00 00 00            PUSH 0xc8
005C9719  68 90 18 7C 00            PUSH 0x7c1890
005C971E  56                        PUSH ESI
005C971F  C7 83 37 1F 00 00 C8 00 00 00  MOV dword ptr [EBX + 0x1f37],0xc8
005C9729  FF D7                     CALL EDI
005C972B  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C9731  83 C4 0C                  ADD ESP,0xc
005C9734  56                        PUSH ESI
005C9735  51                        PUSH ECX
005C9736  E8 85 4A 0E 00            CALL 0x006ae1c0
005C973B  C7 83 37 1F 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1f37],0xffffffff
005C9745  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C974B  52                        PUSH EDX
005C974C  68 55 1F 00 00            PUSH 0x1f55
005C9751  E8 EA 69 0E 00            CALL 0x006b0140
005C9756  8B F8                     MOV EDI,EAX
005C9758  83 C9 FF                  OR ECX,0xffffffff
005C975B  33 C0                     XOR EAX,EAX
005C975D  F2 AE                     SCASB.REPNE ES:EDI
005C975F  F7 D1                     NOT ECX
005C9761  2B F9                     SUB EDI,ECX
005C9763  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9769  8B D1                     MOV EDX,ECX
005C976B  8B F7                     MOV ESI,EDI
005C976D  8B F8                     MOV EDI,EAX
005C976F  50                        PUSH EAX
005C9770  C1 E9 02                  SHR ECX,0x2
005C9773  F3 A5                     MOVSD.REP ES:EDI,ESI
005C9775  8B CA                     MOV ECX,EDX
005C9777  83 E1 03                  AND ECX,0x3
005C977A  F3 A4                     MOVSB.REP ES:EDI,ESI
005C977C  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9782  50                        PUSH EAX
005C9783  E8 38 4A 0E 00            CALL 0x006ae1c0
005C9788  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C978E  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005C9791  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005C9797  A1 97 8A 80 00            MOV EAX,[0x00808a97]
005C979C  3D 96 00 00 00            CMP EAX,0x96
005C97A1  74 24                     JZ 0x005c97c7
005C97A3  3D C8 00 00 00            CMP EAX,0xc8
005C97A8  74 11                     JZ 0x005c97bb
005C97AA  83 F8 FF                  CMP EAX,-0x1
005C97AD  75 22                     JNZ 0x005c97d1
005C97AF  C7 83 A1 21 00 00 03 00 00 00  MOV dword ptr [EBX + 0x21a1],0x3
005C97B9  EB 16                     JMP 0x005c97d1
LAB_005c97bb:
005C97BB  C7 83 A1 21 00 00 02 00 00 00  MOV dword ptr [EBX + 0x21a1],0x2
005C97C5  EB 0A                     JMP 0x005c97d1
LAB_005c97c7:
005C97C7  C7 83 A1 21 00 00 01 00 00 00  MOV dword ptr [EBX + 0x21a1],0x1
LAB_005c97d1:
005C97D1  C7 83 C5 21 00 00 C5 01 00 00  MOV dword ptr [EBX + 0x21c5],0x1c5
005C97DB  C7 83 CD 21 00 00 5A 00 00 00  MOV dword ptr [EBX + 0x21cd],0x5a
005C97E5  C7 83 C9 21 00 00 90 01 00 00  MOV dword ptr [EBX + 0x21c9],0x190
005C97EF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C97F4  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
005C97F7  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005C97FD  85 C0                     TEST EAX,EAX
005C97FF  74 09                     JZ 0x005c980a
005C9801  56                        PUSH ESI
005C9802  E8 89 6F 14 00            CALL 0x00710790
005C9807  83 C4 04                  ADD ESP,0x4
LAB_005c980a:
005C980A  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
005C9810  8D 83 61 21 00 00         LEA EAX,[EBX + 0x2161]
005C9816  89 8B A5 21 00 00         MOV dword ptr [EBX + 0x21a5],ECX
005C981C  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C981F  6A 00                     PUSH 0x0
005C9821  50                        PUSH EAX
005C9822  8B 11                     MOV EDX,dword ptr [ECX]
005C9824  6A 00                     PUSH 0x0
005C9826  6A 00                     PUSH 0x0
005C9828  68 EF 00 01 00            PUSH 0x100ef
005C982D  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C9830  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005C9833  E9 39 11 00 00            JMP 0x005ca971
switchD_005c8fe2::caseD_6547:
005C9838  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C983C  0F 85 2F 11 00 00         JNZ 0x005ca971
005C9842  C7 83 71 21 00 00 06 65 00 00  MOV dword ptr [EBX + 0x2171],0x6506
005C984C  C7 83 79 21 00 00 08 00 00 00  MOV dword ptr [EBX + 0x2179],0x8
005C9856  33 C0                     XOR EAX,EAX
005C9858  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005C9862  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005C9868  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C986E  6A 01                     PUSH 0x1
005C9870  8D BB 33 1E 00 00         LEA EDI,[EBX + 0x1e33]
005C9876  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005C9879  89 83 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],EAX
005C987F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C9885  52                        PUSH EDX
005C9886  68 57 1F 00 00            PUSH 0x1f57
005C988B  E8 B0 68 0E 00            CALL 0x006b0140
005C9890  50                        PUSH EAX
005C9891  68 B8 D0 7C 00            PUSH 0x7cd0b8
005C9896  57                        PUSH EDI
005C9897  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C989D  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C98A3  83 C4 10                  ADD ESP,0x10
005C98A6  57                        PUSH EDI
005C98A7  50                        PUSH EAX
005C98A8  E8 13 49 0E 00            CALL 0x006ae1c0
005C98AD  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005C98B7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C98BD  6A 02                     PUSH 0x2
005C98BF  51                        PUSH ECX
005C98C0  68 57 1F 00 00            PUSH 0x1f57
005C98C5  E8 76 68 0E 00            CALL 0x006b0140
005C98CA  50                        PUSH EAX
005C98CB  68 B8 D0 7C 00            PUSH 0x7cd0b8
005C98D0  57                        PUSH EDI
005C98D1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C98D7  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C98DD  83 C4 10                  ADD ESP,0x10
005C98E0  57                        PUSH EDI
005C98E1  52                        PUSH EDX
005C98E2  E8 D9 48 0E 00            CALL 0x006ae1c0
005C98E7  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005C98F1  A1 18 76 80 00            MOV EAX,[0x00807618]
005C98F6  6A 03                     PUSH 0x3
005C98F8  50                        PUSH EAX
005C98F9  68 57 1F 00 00            PUSH 0x1f57
005C98FE  E8 3D 68 0E 00            CALL 0x006b0140
005C9903  50                        PUSH EAX
005C9904  68 B8 D0 7C 00            PUSH 0x7cd0b8
005C9909  57                        PUSH EDI
005C990A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C9910  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C9916  83 C4 10                  ADD ESP,0x10
005C9919  57                        PUSH EDI
005C991A  51                        PUSH ECX
005C991B  E8 A0 48 0E 00            CALL 0x006ae1c0
005C9920  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C9926  33 C9                     XOR ECX,ECX
005C9928  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C992B  89 83 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EAX
005C9931  8A 0D 9B 8A 80 00         MOV CL,byte ptr [0x00808a9b]
005C9937  89 8B A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ECX
005C993D  C7 83 C5 21 00 00 BF 02 00 00  MOV dword ptr [EBX + 0x21c5],0x2bf
005C9947  C7 83 CD 21 00 00 5A 00 00 00  MOV dword ptr [EBX + 0x21cd],0x5a
005C9951  C7 83 C9 21 00 00 90 01 00 00  MOV dword ptr [EBX + 0x21c9],0x190
005C995B  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C9961  8B 7A 34                  MOV EDI,dword ptr [EDX + 0x34]
005C9964  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005C996A  85 C0                     TEST EAX,EAX
005C996C  74 09                     JZ 0x005c9977
LAB_005c996e:
005C996E  57                        PUSH EDI
005C996F  E8 1C 6E 14 00            CALL 0x00710790
005C9974  83 C4 04                  ADD ESP,0x4
LAB_005c9977:
005C9977  8B 87 8A 00 00 00         MOV EAX,dword ptr [EDI + 0x8a]
005C997D  6A 00                     PUSH 0x0
005C997F  89 83 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EAX
005C9985  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C9988  8D 83 61 21 00 00         LEA EAX,[EBX + 0x2161]
005C998E  8B 11                     MOV EDX,dword ptr [ECX]
005C9990  50                        PUSH EAX
005C9991  6A 00                     PUSH 0x0
005C9993  6A 00                     PUSH 0x0
005C9995  68 EF 00 01 00            PUSH 0x100ef
005C999A  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C999D  E9 CF 0F 00 00            JMP 0x005ca971
LAB_005c99a2:
005C99A2  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C99A6  0F 85 C5 0F 00 00         JNZ 0x005ca971
005C99AC  A0 95 8A 80 00            MOV AL,[0x00808a95]
005C99B1  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C99B4  84 C0                     TEST AL,AL
005C99B6  0F 94 C1                  SETZ CL
005C99B9  88 0D 95 8A 80 00         MOV byte ptr [0x00808a95],CL
005C99BF  8B 83 49 21 00 00         MOV EAX,dword ptr [EBX + 0x2149]
005C99C5  52                        PUSH EDX
005C99C6  50                        PUSH EAX
005C99C7  6A 02                     PUSH 0x2
005C99C9  8B CB                     MOV ECX,EBX
005C99CB  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C99D2  E8 A9 C6 11 00            CALL 0x006e6080
005C99D7  E9 95 0F 00 00            JMP 0x005ca971
LAB_005c99dc:
005C99DC  3D FF 68 00 00            CMP EAX,0x68ff
005C99E1  0F 87 BF 02 00 00         JA 0x005c9ca6
005C99E7  0F 84 2B 01 00 00         JZ 0x005c9b18
005C99ED  05 B7 9A FF FF            ADD EAX,0xffff9ab7
005C99F2  83 F8 04                  CMP EAX,0x4
005C99F5  0F 87 76 0F 00 00         JA 0x005ca971
switchD_005c99fb::switchD:
005C99FB  FF 24 85 90 B0 5C 00      JMP dword ptr [EAX*0x4 + 0x5cb090]
switchD_005c99fb::caseD_6549:
005C9A02  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9A06  0F 85 65 0F 00 00         JNZ 0x005ca971
005C9A0C  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005C9A11  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C9A14  84 C0                     TEST AL,AL
005C9A16  0F 94 C1                  SETZ CL
005C9A19  88 0D 8F 8A 80 00         MOV byte ptr [0x00808a8f],CL
005C9A1F  8B 83 4D 21 00 00         MOV EAX,dword ptr [EBX + 0x214d]
005C9A25  52                        PUSH EDX
005C9A26  50                        PUSH EAX
005C9A27  6A 02                     PUSH 0x2
005C9A29  8B CB                     MOV ECX,EBX
005C9A2B  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9A32  E8 49 C6 11 00            CALL 0x006e6080
005C9A37  8B 13                     MOV EDX,dword ptr [EBX]
005C9A39  8B CB                     MOV ECX,EBX
005C9A3B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005C9A3E  E9 2E 0F 00 00            JMP 0x005ca971
switchD_005c99fb::caseD_654a:
005C9A43  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9A47  0F 85 24 0F 00 00         JNZ 0x005ca971
005C9A4D  A0 94 8A 80 00            MOV AL,[0x00808a94]
005C9A52  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005C9A55  84 C0                     TEST AL,AL
005C9A57  0F 94 C0                  SETZ AL
005C9A5A  A2 94 8A 80 00            MOV [0x00808a94],AL
005C9A5F  8B 93 51 21 00 00         MOV EDX,dword ptr [EBX + 0x2151]
005C9A65  51                        PUSH ECX
005C9A66  52                        PUSH EDX
005C9A67  6A 02                     PUSH 0x2
005C9A69  8B CB                     MOV ECX,EBX
005C9A6B  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9A72  E8 09 C6 11 00            CALL 0x006e6080
005C9A77  E9 F5 0E 00 00            JMP 0x005ca971
switchD_005c99fb::caseD_654b:
005C9A7C  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9A80  0F 85 EB 0E 00 00         JNZ 0x005ca971
005C9A86  A0 A9 8A 80 00            MOV AL,[0x00808aa9]
005C9A8B  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005C9A8E  84 C0                     TEST AL,AL
005C9A90  0F 94 C0                  SETZ AL
005C9A93  A2 A9 8A 80 00            MOV [0x00808aa9],AL
005C9A98  8B 93 55 21 00 00         MOV EDX,dword ptr [EBX + 0x2155]
005C9A9E  51                        PUSH ECX
005C9A9F  52                        PUSH EDX
005C9AA0  6A 02                     PUSH 0x2
005C9AA2  8B CB                     MOV ECX,EBX
005C9AA4  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9AAB  E8 D0 C5 11 00            CALL 0x006e6080
005C9AB0  E9 BC 0E 00 00            JMP 0x005ca971
switchD_005c99fb::caseD_654c:
005C9AB5  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9AB9  0F 85 B2 0E 00 00         JNZ 0x005ca971
005C9ABF  A0 AA 8A 80 00            MOV AL,[0x00808aaa]
005C9AC4  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005C9AC7  84 C0                     TEST AL,AL
005C9AC9  0F 94 C0                  SETZ AL
005C9ACC  A2 AA 8A 80 00            MOV [0x00808aaa],AL
005C9AD1  8B 93 59 21 00 00         MOV EDX,dword ptr [EBX + 0x2159]
005C9AD7  51                        PUSH ECX
005C9AD8  52                        PUSH EDX
005C9AD9  6A 02                     PUSH 0x2
005C9ADB  8B CB                     MOV ECX,EBX
005C9ADD  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005C9AE4  E8 97 C5 11 00            CALL 0x006e6080
005C9AE9  E9 83 0E 00 00            JMP 0x005ca971
switchD_005c99fb::caseD_654d:
005C9AEE  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9AF2  0F 85 79 0E 00 00         JNZ 0x005ca971
005C9AF8  A0 4B 73 80 00            MOV AL,[0x0080734b]
005C9AFD  8B CB                     MOV ECX,EBX
005C9AFF  84 C0                     TEST AL,AL
005C9B01  0F 94 C0                  SETZ AL
005C9B04  A2 4B 73 80 00            MOV [0x0080734b],AL
005C9B09  A2 A8 8A 80 00            MOV [0x00808aa8],AL
005C9B0E  E8 87 8F E3 FF            CALL 0x00402a9a
005C9B13  E9 59 0E 00 00            JMP 0x005ca971
LAB_005c9b18:
005C9B18  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9B1C  0F 85 4F 0E 00 00         JNZ 0x005ca971
005C9B22  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005C9B25  C7 83 71 21 00 00 FF 64 00 00  MOV dword ptr [EBX + 0x2171],0x64ff
005C9B2F  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
005C9B32  81 E9 FF 68 00 00         SUB ECX,0x68ff
005C9B38  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005C9B3E  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005C9B48  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C9B4E  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005C9B55  A1 18 76 80 00            MOV EAX,[0x00807618]
005C9B5A  50                        PUSH EAX
005C9B5B  68 4B 23 00 00            PUSH 0x234b
005C9B60  E8 DB 65 0E 00            CALL 0x006b0140
005C9B65  8B F8                     MOV EDI,EAX
005C9B67  83 C9 FF                  OR ECX,0xffffffff
005C9B6A  33 C0                     XOR EAX,EAX
005C9B6C  F2 AE                     SCASB.REPNE ES:EDI
005C9B6E  F7 D1                     NOT ECX
005C9B70  2B F9                     SUB EDI,ECX
005C9B72  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9B78  8B D1                     MOV EDX,ECX
005C9B7A  8B F7                     MOV ESI,EDI
005C9B7C  8B F8                     MOV EDI,EAX
005C9B7E  50                        PUSH EAX
005C9B7F  C1 E9 02                  SHR ECX,0x2
005C9B82  F3 A5                     MOVSD.REP ES:EDI,ESI
005C9B84  8B CA                     MOV ECX,EDX
005C9B86  83 E1 03                  AND ECX,0x3
005C9B89  F3 A4                     MOVSB.REP ES:EDI,ESI
005C9B8B  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005C9B95  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9B9B  50                        PUSH EAX
005C9B9C  E8 1F 46 0E 00            CALL 0x006ae1c0
005C9BA1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005C9BA7  51                        PUSH ECX
005C9BA8  68 4C 23 00 00            PUSH 0x234c
005C9BAD  E8 8E 65 0E 00            CALL 0x006b0140
005C9BB2  8B F8                     MOV EDI,EAX
005C9BB4  83 C9 FF                  OR ECX,0xffffffff
005C9BB7  33 C0                     XOR EAX,EAX
005C9BB9  F2 AE                     SCASB.REPNE ES:EDI
005C9BBB  F7 D1                     NOT ECX
005C9BBD  2B F9                     SUB EDI,ECX
005C9BBF  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9BC5  8B D1                     MOV EDX,ECX
005C9BC7  8B F7                     MOV ESI,EDI
005C9BC9  8B F8                     MOV EDI,EAX
005C9BCB  50                        PUSH EAX
005C9BCC  C1 E9 02                  SHR ECX,0x2
005C9BCF  F3 A5                     MOVSD.REP ES:EDI,ESI
005C9BD1  8B CA                     MOV ECX,EDX
005C9BD3  83 E1 03                  AND ECX,0x3
005C9BD6  F3 A4                     MOVSB.REP ES:EDI,ESI
005C9BD8  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005C9BE2  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9BE8  50                        PUSH EAX
005C9BE9  E8 D2 45 0E 00            CALL 0x006ae1c0
005C9BEE  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005C9BF4  81 E1 00 00 FF FF         AND ECX,0xffff0000
005C9BFA  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005C9C00  74 4D                     JZ 0x005c9c4f
005C9C02  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C9C08  52                        PUSH EDX
005C9C09  68 4D 23 00 00            PUSH 0x234d
005C9C0E  E8 2D 65 0E 00            CALL 0x006b0140
005C9C13  8B F8                     MOV EDI,EAX
005C9C15  83 C9 FF                  OR ECX,0xffffffff
005C9C18  33 C0                     XOR EAX,EAX
005C9C1A  F2 AE                     SCASB.REPNE ES:EDI
005C9C1C  F7 D1                     NOT ECX
005C9C1E  2B F9                     SUB EDI,ECX
005C9C20  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9C26  8B D1                     MOV EDX,ECX
005C9C28  8B F7                     MOV ESI,EDI
005C9C2A  8B F8                     MOV EDI,EAX
005C9C2C  50                        PUSH EAX
005C9C2D  C1 E9 02                  SHR ECX,0x2
005C9C30  F3 A5                     MOVSD.REP ES:EDI,ESI
005C9C32  8B CA                     MOV ECX,EDX
005C9C34  83 E1 03                  AND ECX,0x3
005C9C37  F3 A4                     MOVSB.REP ES:EDI,ESI
005C9C39  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005C9C43  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9C49  50                        PUSH EAX
005C9C4A  E8 71 45 0E 00            CALL 0x006ae1c0
LAB_005c9c4f:
005C9C4F  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C9C55  33 C0                     XOR EAX,EAX
005C9C57  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005C9C5A  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005C9C60  8A 83 57 1F 00 00         MOV AL,byte ptr [EBX + 0x1f57]
005C9C66  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005C9C6C  C7 83 C5 21 00 00 1A 00 00 00  MOV dword ptr [EBX + 0x21c5],0x1a
005C9C76  C7 83 CD 21 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x21cd],0xe0
005C9C80  C7 83 C9 21 00 00 BA 00 00 00  MOV dword ptr [EBX + 0x21c9],0xba
LAB_005c9c8a:
005C9C8A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C9C90  8B 71 34                  MOV ESI,dword ptr [ECX + 0x34]
005C9C93  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005C9C99  85 C0                     TEST EAX,EAX
005C9C9B  0F 84 B5 F9 FF FF         JZ 0x005c9656
005C9CA1  E9 A7 F9 FF FF            JMP 0x005c964d
LAB_005c9ca6:
005C9CA6  8D B8 00 97 FF FF         LEA EDI,[EAX + 0xffff9700]
005C9CAC  81 FF 85 00 00 00         CMP EDI,0x85
005C9CB2  0F 87 B9 0C 00 00         JA 0x005ca971
005C9CB8  33 C9                     XOR ECX,ECX
005C9CBA  8A 8F EC B0 5C 00         MOV CL,byte ptr [EDI + 0x5cb0ec]
switchD_005c9cc0::switchD:
005C9CC0  FF 24 8D A4 B0 5C 00      JMP dword ptr [ECX*0x4 + 0x5cb0a4]
switchD_005c9cc0::caseD_6940:
005C9CC7  8B 13                     MOV EDX,dword ptr [EBX]
005C9CC9  8B CB                     MOV ECX,EBX
005C9CCB  FF 52 24                  CALL dword ptr [EDX + 0x24]
005C9CCE  E9 9E 0C 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_693f:
005C9CD3  8B 03                     MOV EAX,dword ptr [EBX]
005C9CD5  8B CB                     MOV ECX,EBX
005C9CD7  FF 50 20                  CALL dword ptr [EAX + 0x20]
005C9CDA  E9 92 0C 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_6943:
005C9CDF  6A 00                     PUSH 0x0
005C9CE1  6A 00                     PUSH 0x0
005C9CE3  68 42 69 00 00            PUSH 0x6942
005C9CE8  8B CB                     MOV ECX,EBX
005C9CEA  E8 D1 99 E3 FF            CALL 0x004036c0
005C9CEF  80 3D 68 17 81 00 01      CMP byte ptr [0x00811768],0x1
005C9CF6  75 07                     JNZ 0x005c9cff
005C9CF8  C6 05 68 17 81 00 02      MOV byte ptr [0x00811768],0x2
LAB_005c9cff:
005C9CFF  8D 93 E1 21 00 00         LEA EDX,[EBX + 0x21e1]
005C9D05  B9 01 01 01 01            MOV ECX,0x1010101
005C9D0A  89 0A                     MOV dword ptr [EDX],ECX
005C9D0C  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
005C9D10  88 4A 06                  MOV byte ptr [EDX + 0x6],CL
005C9D13  8B 03                     MOV EAX,dword ptr [EBX]
005C9D15  8B CB                     MOV ECX,EBX
005C9D17  FF 50 08                  CALL dword ptr [EAX + 0x8]
005C9D1A  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005C9D20  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005C9D26  E9 4A 01 00 00            JMP 0x005c9e75
switchD_005c9cc0::caseD_6942:
005C9D2B  33 C0                     XOR EAX,EAX
005C9D2D  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005C9D34  89 43 49                  MOV dword ptr [EBX + 0x49],EAX
005C9D37  C7 43 4D 02 61 00 00      MOV dword ptr [EBX + 0x4d],0x6102
005C9D3E  8B CB                     MOV ECX,EBX
005C9D40  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005C9D43  E8 70 B0 E3 FF            CALL 0x00404db8
005C9D48  E9 24 0C 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_6947:
005C9D4D  8B 83 27 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e27]
005C9D53  33 D2                     XOR EDX,EDX
005C9D55  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005C9D5B  8B CB                     MOV ECX,EBX
005C9D5D  52                        PUSH EDX
005C9D5E  50                        PUSH EAX
005C9D5F  68 1F 61 00 00            PUSH 0x611f
005C9D64  E8 57 99 E3 FF            CALL 0x004036c0
005C9D69  8B 13                     MOV EDX,dword ptr [EBX]
005C9D6B  8B CB                     MOV ECX,EBX
005C9D6D  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C9D70  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005C9D76  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005C9D7C  85 C9                     TEST ECX,ECX
005C9D7E  0F 84 ED 0B 00 00         JZ 0x005ca971
005C9D84  33 C9                     XOR ECX,ECX
005C9D86  8D 55 AC                  LEA EDX,[EBP + -0x54]
005C9D89  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
005C9D8C  52                        PUSH EDX
005C9D8D  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
005C9D90  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005C9D93  88 4D B8                  MOV byte ptr [EBP + -0x48],CL
005C9D96  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005C9D9C  E8 FA 7C E3 FF            CALL 0x00401a9b
005C9DA1  E9 CB 0B 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_694d:
005C9DA6  6A 00                     PUSH 0x0
005C9DA8  6A 01                     PUSH 0x1
005C9DAA  68 05 61 00 00            PUSH 0x6105
005C9DAF  8B CB                     MOV ECX,EBX
005C9DB1  E8 0A 99 E3 FF            CALL 0x004036c0
005C9DB6  8D 8B E1 21 00 00         LEA ECX,[EBX + 0x21e1]
005C9DBC  B8 01 01 01 01            MOV EAX,0x1010101
005C9DC1  89 01                     MOV dword ptr [ECX],EAX
005C9DC3  66 89 41 04               MOV word ptr [ECX + 0x4],AX
005C9DC7  88 41 06                  MOV byte ptr [ECX + 0x6],AL
005C9DCA  C6 83 E7 21 00 00 00      MOV byte ptr [EBX + 0x21e7],0x0
005C9DD1  E9 8C 00 00 00            JMP 0x005c9e62
switchD_005c9cc0::caseD_694f:
005C9DD6  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005C9DDC  33 C9                     XOR ECX,ECX
005C9DDE  80 FA 0E                  CMP DL,0xe
005C9DE1  0F 94 C1                  SETZ CL
005C9DE4  51                        PUSH ECX
005C9DE5  6A 01                     PUSH 0x1
005C9DE7  68 09 61 00 00            PUSH 0x6109
005C9DEC  8B CB                     MOV ECX,EBX
005C9DEE  E8 CD 98 E3 FF            CALL 0x004036c0
005C9DF3  C6 83 E6 21 00 00 00      MOV byte ptr [EBX + 0x21e6],0x0
005C9DFA  C6 83 E4 21 00 00 00      MOV byte ptr [EBX + 0x21e4],0x0
005C9E01  8B 13                     MOV EDX,dword ptr [EBX]
005C9E03  8B CB                     MOV ECX,EBX
005C9E05  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C9E08  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005C9E0E  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005C9E14  85 C9                     TEST ECX,ECX
005C9E16  0F 84 55 0B 00 00         JZ 0x005ca971
005C9E1C  33 C9                     XOR ECX,ECX
005C9E1E  8D 55 BC                  LEA EDX,[EBP + -0x44]
005C9E21  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
005C9E24  52                        PUSH EDX
005C9E25  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005C9E28  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
005C9E2B  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
005C9E2E  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005C9E34  E8 62 7C E3 FF            CALL 0x00401a9b
005C9E39  E9 33 0B 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_6951:
005C9E3E  6A 00                     PUSH 0x0
005C9E40  6A 00                     PUSH 0x0
005C9E42  68 0A 61 00 00            PUSH 0x610a
005C9E47  8B CB                     MOV ECX,EBX
005C9E49  E8 72 98 E3 FF            CALL 0x004036c0
005C9E4E  8D 8B E1 21 00 00         LEA ECX,[EBX + 0x21e1]
005C9E54  B8 01 01 01 01            MOV EAX,0x1010101
005C9E59  89 01                     MOV dword ptr [ECX],EAX
005C9E5B  66 89 41 04               MOV word ptr [ECX + 0x4],AX
005C9E5F  88 41 06                  MOV byte ptr [ECX + 0x6],AL
LAB_005c9e62:
005C9E62  8B 13                     MOV EDX,dword ptr [EBX]
005C9E64  8B CB                     MOV ECX,EBX
005C9E66  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C9E69  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005C9E6F  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
LAB_005c9e75:
005C9E75  85 C9                     TEST ECX,ECX
005C9E77  0F 84 F4 0A 00 00         JZ 0x005ca971
005C9E7D  6A 01                     PUSH 0x1
005C9E7F  6A 00                     PUSH 0x0
005C9E81  6A 01                     PUSH 0x1
005C9E83  E8 1D 81 E3 FF            CALL 0x00401fa5
005C9E88  E9 E4 0A 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_6948:
005C9E8D  8A 8B 26 1E 00 00         MOV CL,byte ptr [EBX + 0x1e26]
005C9E93  33 C0                     XOR EAX,EAX
005C9E95  88 0D A0 87 80 00         MOV byte ptr [0x008087a0],CL
005C9E9B  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C9EA1  48                        DEC EAX
005C9EA2  83 F8 14                  CMP EAX,0x14
005C9EA5  77 1F                     JA 0x005c9ec6
005C9EA7  33 D2                     XOR EDX,EDX
005C9EA9  8A 90 7C B1 5C 00         MOV DL,byte ptr [EAX + 0x5cb17c]
switchD_005c9eaf::switchD:
005C9EAF  FF 24 95 74 B1 5C 00      JMP dword ptr [EDX*0x4 + 0x5cb174]
switchD_005c9eaf::caseD_1:
005C9EB6  C6 05 83 87 80 00 02      MOV byte ptr [0x00808783],0x2
005C9EBD  EB 07                     JMP 0x005c9ec6
switchD_005c9eaf::caseD_4:
005C9EBF  C6 05 83 87 80 00 03      MOV byte ptr [0x00808783],0x3
switchD_005c9eaf::default:
005C9EC6  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005C9ECD  8B CB                     MOV ECX,EBX
005C9ECF  C7 43 4D FF 60 00 00      MOV dword ptr [EBX + 0x4d],0x60ff
005C9ED6  E8 DD AE E3 FF            CALL 0x00404db8
005C9EDB  E9 91 0A 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_6900:
005C9EE0  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005C9EE4  0F 85 87 0A 00 00         JNZ 0x005ca971
005C9EEA  C7 83 71 21 00 00 FF 64 00 00  MOV dword ptr [EBX + 0x2171],0x64ff
005C9EF4  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005C9EF7  81 E9 FF 68 00 00         SUB ECX,0x68ff
005C9EFD  B8 03 00 00 00            MOV EAX,0x3
005C9F02  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005C9F08  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005C9F12  8B 15 D1 7D 80 00         MOV EDX,dword ptr [0x00807dd1]
005C9F18  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C9F1B  81 E2 00 00 FF FF         AND EDX,0xffff0000
005C9F21  81 FA 00 00 DD D0         CMP EDX,0xd0dd0000
005C9F27  74 26                     JZ 0x005c9f4f
005C9F29  33 C0                     XOR EAX,EAX
005C9F2B  8A 83 57 1F 00 00         MOV AL,byte ptr [EBX + 0x1f57]
005C9F31  83 E8 00                  SUB EAX,0x0
005C9F34  74 11                     JZ 0x005c9f47
005C9F36  48                        DEC EAX
005C9F37  74 07                     JZ 0x005c9f40
005C9F39  B8 07 00 00 00            MOV EAX,0x7
005C9F3E  EB 0C                     JMP 0x005c9f4c
LAB_005c9f40:
005C9F40  B8 04 00 00 00            MOV EAX,0x4
005C9F45  EB 05                     JMP 0x005c9f4c
LAB_005c9f47:
005C9F47  B8 02 00 00 00            MOV EAX,0x2
LAB_005c9f4c:
005C9F4C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005c9f4f:
005C9F4F  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005C9F55  85 C0                     TEST EAX,EAX
005C9F57  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
005C9F5E  7E 51                     JLE 0x005c9fb1
005C9F60  BF 02 00 00 00            MOV EDI,0x2
LAB_005c9f65:
005C9F65  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005C9F6B  52                        PUSH EDX
005C9F6C  68 54 23 00 00            PUSH 0x2354
005C9F71  E8 CA 61 0E 00            CALL 0x006b0140
005C9F76  50                        PUSH EAX
005C9F77  57                        PUSH EDI
005C9F78  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9F7E  68 64 28 7C 00            PUSH 0x7c2864
005C9F83  50                        PUSH EAX
005C9F84  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C9F8A  83 C4 10                  ADD ESP,0x10
005C9F8D  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005C9F93  89 BB 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],EDI
005C9F99  50                        PUSH EAX
005C9F9A  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005C9FA0  50                        PUSH EAX
005C9FA1  E8 1A 42 0E 00            CALL 0x006ae1c0
005C9FA6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C9FA9  47                        INC EDI
005C9FAA  8D 4F FE                  LEA ECX,[EDI + -0x2]
005C9FAD  3B C8                     CMP ECX,EAX
005C9FAF  7C B4                     JL 0x005c9f65
LAB_005c9fb1:
005C9FB1  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005C9FB7  33 C9                     XOR ECX,ECX
005C9FB9  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005C9FBC  89 83 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EAX
005C9FC2  8A 8B 5C 1F 00 00         MOV CL,byte ptr [EBX + 0x1f5c]
005C9FC8  83 E9 02                  SUB ECX,0x2
005C9FCB  89 8B A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ECX
005C9FD1  C7 83 C5 21 00 00 1A 00 00 00  MOV dword ptr [EBX + 0x21c5],0x1a
005C9FDB  C7 83 CD 21 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x21cd],0xe0
005C9FE5  C7 83 C9 21 00 00 E2 00 00 00  MOV dword ptr [EBX + 0x21c9],0xe2
LAB_005c9fef:
005C9FEF  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C9FF5  8B 7A 34                  MOV EDI,dword ptr [EDX + 0x34]
005C9FF8  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005C9FFE  85 C0                     TEST EAX,EAX
005CA000  0F 84 71 F9 FF FF         JZ 0x005c9977
005CA006  E9 63 F9 FF FF            JMP 0x005c996e
switchD_005c9cc0::caseD_6901:
005CA00B  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CA00F  0F 85 5C 09 00 00         JNZ 0x005ca971
005CA015  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005CA01B  81 E1 00 00 FF FF         AND ECX,0xffff0000
005CA021  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005CA027  75 07                     JNZ 0x005ca030
005CA029  B8 01 00 00 00            MOV EAX,0x1
005CA02E  EB 09                     JMP 0x005ca039
LAB_005ca030:
005CA030  8B 93 7C 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f7c]
005CA036  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
LAB_005ca039:
005CA039  C7 83 71 21 00 00 FF 64 00 00  MOV dword ptr [EBX + 0x2171],0x64ff
005CA043  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005CA046  81 E9 FF 68 00 00         SUB ECX,0x68ff
005CA04C  33 D2                     XOR EDX,EDX
005CA04E  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005CA054  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005CA05E  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005CA064  3B C2                     CMP EAX,EDX
005CA066  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005CA069  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005CA06C  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
005CA06F  76 6D                     JBE 0x005ca0de
005CA071  EB 03                     JMP 0x005ca076
LAB_005ca073:
005CA073  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005ca076:
005CA076  8B 8B 7C 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f7c]
005CA07C  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005CA07F  73 0B                     JNC 0x005ca08c
005CA081  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CA084  0F AF C2                  IMUL EAX,EDX
005CA087  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005CA08A  EB 02                     JMP 0x005ca08e
LAB_005ca08c:
005CA08C  33 C0                     XOR EAX,EAX
LAB_005ca08e:
005CA08E  8D B8 04 01 00 00         LEA EDI,[EAX + 0x104]
005CA094  83 C9 FF                  OR ECX,0xffffffff
005CA097  33 C0                     XOR EAX,EAX
005CA099  F2 AE                     SCASB.REPNE ES:EDI
005CA09B  F7 D1                     NOT ECX
005CA09D  2B F9                     SUB EDI,ECX
005CA09F  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA0A5  8B D1                     MOV EDX,ECX
005CA0A7  8B F7                     MOV ESI,EDI
005CA0A9  8B F8                     MOV EDI,EAX
005CA0AB  50                        PUSH EAX
005CA0AC  C1 E9 02                  SHR ECX,0x2
005CA0AF  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA0B1  8B CA                     MOV ECX,EDX
005CA0B3  83 E1 03                  AND ECX,0x3
005CA0B6  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA0B8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005CA0BB  89 8B 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],ECX
005CA0C1  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005CA0C7  52                        PUSH EDX
005CA0C8  E8 F3 40 0E 00            CALL 0x006ae1c0
005CA0CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005CA0D0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005CA0D3  40                        INC EAX
005CA0D4  3B C1                     CMP EAX,ECX
005CA0D6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005CA0D9  72 98                     JC 0x005ca073
005CA0DB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005ca0de:
005CA0DE  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA0E4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005CA0E7  89 8B A9 21 00 00         MOV dword ptr [EBX + 0x21a9],ECX
005CA0ED  8B 93 58 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f58]
005CA0F3  89 93 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EDX
005CA0F9  C7 83 C5 21 00 00 1A 00 00 00  MOV dword ptr [EBX + 0x21c5],0x1a
005CA103  C7 83 CD 21 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x21cd],0xe0
005CA10D  C7 83 C9 21 00 00 0A 01 00 00  MOV dword ptr [EBX + 0x21c9],0x10a
005CA117  A1 D1 7D 80 00            MOV EAX,[0x00807dd1]
005CA11C  25 00 00 FF FF            AND EAX,0xffff0000
005CA121  3D 00 00 DD D0            CMP EAX,0xd0dd0000
005CA126  75 0A                     JNZ 0x005ca132
005CA128  C7 83 C9 21 00 00 18 01 00 00  MOV dword ptr [EBX + 0x21c9],0x118
LAB_005ca132:
005CA132  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CA138  8B 79 34                  MOV EDI,dword ptr [ECX + 0x34]
005CA13B  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005CA141  85 C0                     TEST EAX,EAX
005CA143  74 09                     JZ 0x005ca14e
005CA145  57                        PUSH EDI
005CA146  E8 45 66 14 00            CALL 0x00710790
005CA14B  83 C4 04                  ADD ESP,0x4
LAB_005ca14e:
005CA14E  8B 97 8A 00 00 00         MOV EDX,dword ptr [EDI + 0x8a]
005CA154  6A 00                     PUSH 0x0
005CA156  89 93 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EDX
005CA15C  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005CA15F  8D 93 61 21 00 00         LEA EDX,[EBX + 0x2161]
005CA165  8B 01                     MOV EAX,dword ptr [ECX]
005CA167  52                        PUSH EDX
005CA168  6A 00                     PUSH 0x0
005CA16A  6A 00                     PUSH 0x0
005CA16C  68 EF 00 01 00            PUSH 0x100ef
005CA171  FF 50 08                  CALL dword ptr [EAX + 0x8]
005CA174  E9 F8 07 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_6902:
005CA179  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CA17D  0F 85 EE 07 00 00         JNZ 0x005ca971
005CA183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CA186  C7 83 71 21 00 00 FF 64 00 00  MOV dword ptr [EBX + 0x2171],0x64ff
005CA190  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
005CA193  81 E9 FF 68 00 00         SUB ECX,0x68ff
005CA199  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005CA19F  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005CA1A9  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005CA1AF  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005CA1B6  A1 18 76 80 00            MOV EAX,[0x00807618]
005CA1BB  50                        PUSH EAX
005CA1BC  68 55 23 00 00            PUSH 0x2355
005CA1C1  E8 7A 5F 0E 00            CALL 0x006b0140
005CA1C6  8B F8                     MOV EDI,EAX
005CA1C8  83 C9 FF                  OR ECX,0xffffffff
005CA1CB  33 C0                     XOR EAX,EAX
005CA1CD  F2 AE                     SCASB.REPNE ES:EDI
005CA1CF  F7 D1                     NOT ECX
005CA1D1  2B F9                     SUB EDI,ECX
005CA1D3  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA1D9  8B D1                     MOV EDX,ECX
005CA1DB  8B F7                     MOV ESI,EDI
005CA1DD  8B F8                     MOV EDI,EAX
005CA1DF  50                        PUSH EAX
005CA1E0  C1 E9 02                  SHR ECX,0x2
005CA1E3  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA1E5  8B CA                     MOV ECX,EDX
005CA1E7  83 E1 03                  AND ECX,0x3
005CA1EA  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA1EC  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005CA1F6  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA1FC  50                        PUSH EAX
005CA1FD  E8 BE 3F 0E 00            CALL 0x006ae1c0
005CA202  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA208  51                        PUSH ECX
005CA209  68 4C 23 00 00            PUSH 0x234c
005CA20E  E8 2D 5F 0E 00            CALL 0x006b0140
005CA213  8B F8                     MOV EDI,EAX
005CA215  83 C9 FF                  OR ECX,0xffffffff
005CA218  33 C0                     XOR EAX,EAX
005CA21A  F2 AE                     SCASB.REPNE ES:EDI
005CA21C  F7 D1                     NOT ECX
005CA21E  2B F9                     SUB EDI,ECX
005CA220  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA226  8B D1                     MOV EDX,ECX
005CA228  8B F7                     MOV ESI,EDI
005CA22A  8B F8                     MOV EDI,EAX
005CA22C  50                        PUSH EAX
005CA22D  C1 E9 02                  SHR ECX,0x2
005CA230  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA232  8B CA                     MOV ECX,EDX
005CA234  83 E1 03                  AND ECX,0x3
005CA237  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA239  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005CA243  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA249  50                        PUSH EAX
005CA24A  E8 71 3F 0E 00            CALL 0x006ae1c0
005CA24F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA255  51                        PUSH ECX
005CA256  68 56 23 00 00            PUSH 0x2356
005CA25B  E8 E0 5E 0E 00            CALL 0x006b0140
005CA260  8B F8                     MOV EDI,EAX
005CA262  83 C9 FF                  OR ECX,0xffffffff
005CA265  33 C0                     XOR EAX,EAX
005CA267  F2 AE                     SCASB.REPNE ES:EDI
005CA269  F7 D1                     NOT ECX
005CA26B  2B F9                     SUB EDI,ECX
005CA26D  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA273  8B D1                     MOV EDX,ECX
005CA275  8B F7                     MOV ESI,EDI
005CA277  8B F8                     MOV EDI,EAX
005CA279  50                        PUSH EAX
005CA27A  C1 E9 02                  SHR ECX,0x2
005CA27D  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA27F  8B CA                     MOV ECX,EDX
005CA281  83 E1 03                  AND ECX,0x3
005CA284  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA286  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005CA290  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA296  50                        PUSH EAX
005CA297  E8 24 3F 0E 00            CALL 0x006ae1c0
005CA29C  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005CA2A2  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005CA2A5  33 C0                     XOR EAX,EAX
005CA2A7  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005CA2AD  8A 83 5F 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5f]
005CA2B3  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005CA2B9  C7 83 C5 21 00 00 1A 00 00 00  MOV dword ptr [EBX + 0x21c5],0x1a
005CA2C3  C7 83 CD 21 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x21cd],0xe0
005CA2CD  C7 83 C9 21 00 00 32 01 00 00  MOV dword ptr [EBX + 0x21c9],0x132
005CA2D7  E9 AE F9 FF FF            JMP 0x005c9c8a
switchD_005c9cc0::caseD_6903:
005CA2DC  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CA2E0  0F 85 8B 06 00 00         JNZ 0x005ca971
005CA2E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CA2E9  C7 83 71 21 00 00 FF 64 00 00  MOV dword ptr [EBX + 0x2171],0x64ff
005CA2F3  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
005CA2F6  81 E9 FF 68 00 00         SUB ECX,0x68ff
005CA2FC  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005CA302  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005CA30C  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005CA312  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005CA319  A1 18 76 80 00            MOV EAX,[0x00807618]
005CA31E  50                        PUSH EAX
005CA31F  68 4E 23 00 00            PUSH 0x234e
005CA324  E8 17 5E 0E 00            CALL 0x006b0140
005CA329  8B F8                     MOV EDI,EAX
005CA32B  83 C9 FF                  OR ECX,0xffffffff
005CA32E  33 C0                     XOR EAX,EAX
005CA330  F2 AE                     SCASB.REPNE ES:EDI
005CA332  F7 D1                     NOT ECX
005CA334  2B F9                     SUB EDI,ECX
005CA336  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA33C  8B D1                     MOV EDX,ECX
005CA33E  8B F7                     MOV ESI,EDI
005CA340  8B F8                     MOV EDI,EAX
005CA342  50                        PUSH EAX
005CA343  C1 E9 02                  SHR ECX,0x2
005CA346  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA348  8B CA                     MOV ECX,EDX
005CA34A  83 E1 03                  AND ECX,0x3
005CA34D  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA34F  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005CA359  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA35F  50                        PUSH EAX
005CA360  E8 5B 3E 0E 00            CALL 0x006ae1c0
005CA365  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA36B  51                        PUSH ECX
005CA36C  68 4C 23 00 00            PUSH 0x234c
005CA371  E8 CA 5D 0E 00            CALL 0x006b0140
005CA376  8B F8                     MOV EDI,EAX
005CA378  83 C9 FF                  OR ECX,0xffffffff
005CA37B  33 C0                     XOR EAX,EAX
005CA37D  F2 AE                     SCASB.REPNE ES:EDI
005CA37F  F7 D1                     NOT ECX
005CA381  2B F9                     SUB EDI,ECX
005CA383  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA389  8B D1                     MOV EDX,ECX
005CA38B  8B F7                     MOV ESI,EDI
005CA38D  8B F8                     MOV EDI,EAX
005CA38F  50                        PUSH EAX
005CA390  C1 E9 02                  SHR ECX,0x2
005CA393  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA395  8B CA                     MOV ECX,EDX
005CA397  83 E1 03                  AND ECX,0x3
005CA39A  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA39C  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005CA3A6  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA3AC  50                        PUSH EAX
005CA3AD  E8 0E 3E 0E 00            CALL 0x006ae1c0
005CA3B2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA3B8  51                        PUSH ECX
005CA3B9  68 4F 23 00 00            PUSH 0x234f
005CA3BE  E8 7D 5D 0E 00            CALL 0x006b0140
005CA3C3  8B F8                     MOV EDI,EAX
005CA3C5  83 C9 FF                  OR ECX,0xffffffff
005CA3C8  33 C0                     XOR EAX,EAX
005CA3CA  F2 AE                     SCASB.REPNE ES:EDI
005CA3CC  F7 D1                     NOT ECX
005CA3CE  2B F9                     SUB EDI,ECX
005CA3D0  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA3D6  8B D1                     MOV EDX,ECX
005CA3D8  8B F7                     MOV ESI,EDI
005CA3DA  8B F8                     MOV EDI,EAX
005CA3DC  50                        PUSH EAX
005CA3DD  C1 E9 02                  SHR ECX,0x2
005CA3E0  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA3E2  8B CA                     MOV ECX,EDX
005CA3E4  83 E1 03                  AND ECX,0x3
005CA3E7  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA3E9  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005CA3F3  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA3F9  50                        PUSH EAX
005CA3FA  E8 C1 3D 0E 00            CALL 0x006ae1c0
005CA3FF  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005CA405  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005CA408  33 C0                     XOR EAX,EAX
005CA40A  8A 83 5D 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5d]
005CA410  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005CA416  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005CA41C  C7 83 C5 21 00 00 1A 00 00 00  MOV dword ptr [EBX + 0x21c5],0x1a
005CA426  C7 83 CD 21 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x21cd],0xe0
005CA430  C7 83 C9 21 00 00 5A 01 00 00  MOV dword ptr [EBX + 0x21c9],0x15a
005CA43A  E9 4B F8 FF FF            JMP 0x005c9c8a
switchD_005c9cc0::caseD_6904:
005CA43F  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CA443  0F 85 28 05 00 00         JNZ 0x005ca971
005CA449  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CA44C  C7 83 71 21 00 00 FF 64 00 00  MOV dword ptr [EBX + 0x2171],0x64ff
005CA456  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
005CA459  81 E9 FF 68 00 00         SUB ECX,0x68ff
005CA45F  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005CA465  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005CA46F  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005CA475  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005CA47C  A1 18 76 80 00            MOV EAX,[0x00807618]
005CA481  50                        PUSH EAX
005CA482  68 4E 23 00 00            PUSH 0x234e
005CA487  E8 B4 5C 0E 00            CALL 0x006b0140
005CA48C  8B F8                     MOV EDI,EAX
005CA48E  83 C9 FF                  OR ECX,0xffffffff
005CA491  33 C0                     XOR EAX,EAX
005CA493  F2 AE                     SCASB.REPNE ES:EDI
005CA495  F7 D1                     NOT ECX
005CA497  2B F9                     SUB EDI,ECX
005CA499  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA49F  8B D1                     MOV EDX,ECX
005CA4A1  8B F7                     MOV ESI,EDI
005CA4A3  8B F8                     MOV EDI,EAX
005CA4A5  50                        PUSH EAX
005CA4A6  C1 E9 02                  SHR ECX,0x2
005CA4A9  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA4AB  8B CA                     MOV ECX,EDX
005CA4AD  83 E1 03                  AND ECX,0x3
005CA4B0  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA4B2  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005CA4BC  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA4C2  50                        PUSH EAX
005CA4C3  E8 F8 3C 0E 00            CALL 0x006ae1c0
005CA4C8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA4CE  51                        PUSH ECX
005CA4CF  68 4C 23 00 00            PUSH 0x234c
005CA4D4  E8 67 5C 0E 00            CALL 0x006b0140
005CA4D9  8B F8                     MOV EDI,EAX
005CA4DB  83 C9 FF                  OR ECX,0xffffffff
005CA4DE  33 C0                     XOR EAX,EAX
005CA4E0  F2 AE                     SCASB.REPNE ES:EDI
005CA4E2  F7 D1                     NOT ECX
005CA4E4  2B F9                     SUB EDI,ECX
005CA4E6  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA4EC  8B D1                     MOV EDX,ECX
005CA4EE  8B F7                     MOV ESI,EDI
005CA4F0  8B F8                     MOV EDI,EAX
005CA4F2  50                        PUSH EAX
005CA4F3  C1 E9 02                  SHR ECX,0x2
005CA4F6  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA4F8  8B CA                     MOV ECX,EDX
005CA4FA  83 E1 03                  AND ECX,0x3
005CA4FD  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA4FF  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005CA509  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA50F  50                        PUSH EAX
005CA510  E8 AB 3C 0E 00            CALL 0x006ae1c0
005CA515  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA51B  51                        PUSH ECX
005CA51C  68 4F 23 00 00            PUSH 0x234f
005CA521  E8 1A 5C 0E 00            CALL 0x006b0140
005CA526  8B F8                     MOV EDI,EAX
005CA528  83 C9 FF                  OR ECX,0xffffffff
005CA52B  33 C0                     XOR EAX,EAX
005CA52D  F2 AE                     SCASB.REPNE ES:EDI
005CA52F  F7 D1                     NOT ECX
005CA531  2B F9                     SUB EDI,ECX
005CA533  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005CA539  8B D1                     MOV EDX,ECX
005CA53B  8B F7                     MOV ESI,EDI
005CA53D  8B F8                     MOV EDI,EAX
005CA53F  50                        PUSH EAX
005CA540  C1 E9 02                  SHR ECX,0x2
005CA543  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA545  8B CA                     MOV ECX,EDX
005CA547  83 E1 03                  AND ECX,0x3
005CA54A  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA54C  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005CA556  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005CA55C  50                        PUSH EAX
005CA55D  E8 5E 3C 0E 00            CALL 0x006ae1c0
005CA562  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005CA568  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005CA56B  33 C0                     XOR EAX,EAX
005CA56D  8A 83 5E 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5e]
005CA573  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005CA579  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005CA57F  C7 83 C5 21 00 00 1A 00 00 00  MOV dword ptr [EBX + 0x21c5],0x1a
005CA589  C7 83 CD 21 00 00 E0 00 00 00  MOV dword ptr [EBX + 0x21cd],0xe0
005CA593  C7 83 C9 21 00 00 82 01 00 00  MOV dword ptr [EBX + 0x21c9],0x182
005CA59D  E9 E8 F6 FF FF            JMP 0x005c9c8a
switchD_005c9cc0::caseD_6905:
005CA5A2  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005CA5A6  0F 85 C5 03 00 00         JNZ 0x005ca971
005CA5AC  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005CA5B2  8B CB                     MOV ECX,EBX
005CA5B4  89 83 53 1F 00 00         MOV dword ptr [EBX + 0x1f53],EAX
005CA5BA  E8 13 7F E3 FF            CALL 0x004024d2
005CA5BF  E9 AD 03 00 00            JMP 0x005ca971
switchD_005c9cc0::caseD_697f:
005CA5C4  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005CA5C7  05 81 96 FF FF            ADD EAX,0xffff9681
005CA5CC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CA5CF  8B 8B 2B 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2b]
005CA5D5  83 F8 04                  CMP EAX,0x4
005CA5D8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005CA5DB  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
005CA5DE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005CA5E1  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
005CA5E4  0F 87 F6 00 00 00         JA 0x005ca6e0
switchD_005ca5ea::switchD:
005CA5EA  FF 24 85 94 B1 5C 00      JMP dword ptr [EAX*0x4 + 0x5cb194]
switchD_005ca5ea::caseD_697f:
005CA5F1  33 C0                     XOR EAX,EAX
005CA5F3  8A 83 57 1F 00 00         MOV AL,byte ptr [EBX + 0x1f57]
005CA5F9  83 E8 00                  SUB EAX,0x0
005CA5FC  74 25                     JZ 0x005ca623
005CA5FE  48                        DEC EAX
005CA5FF  74 11                     JZ 0x005ca612
005CA601  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CA607  52                        PUSH EDX
005CA608  68 4D 23 00 00            PUSH 0x234d
005CA60D  E9 FC 00 00 00            JMP 0x005ca70e
LAB_005ca612:
005CA612  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA618  51                        PUSH ECX
LAB_005ca619:
005CA619  68 4C 23 00 00            PUSH 0x234c
005CA61E  E9 EB 00 00 00            JMP 0x005ca70e
LAB_005ca623:
005CA623  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA629  51                        PUSH ECX
005CA62A  68 4B 23 00 00            PUSH 0x234b
005CA62F  E9 DA 00 00 00            JMP 0x005ca70e
switchD_005ca5ea::caseD_6980:
005CA634  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA63A  51                        PUSH ECX
005CA63B  68 54 23 00 00            PUSH 0x2354
005CA640  E8 FB 5A 0E 00            CALL 0x006b0140
005CA645  33 D2                     XOR EDX,EDX
005CA647  50                        PUSH EAX
005CA648  8A 93 5C 1F 00 00         MOV DL,byte ptr [EBX + 0x1f5c]
005CA64E  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
005CA654  52                        PUSH EDX
005CA655  68 64 28 7C 00            PUSH 0x7c2864
005CA65A  50                        PUSH EAX
005CA65B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005CA661  83 C4 10                  ADD ESP,0x10
005CA664  E9 D2 00 00 00            JMP 0x005ca73b
switchD_005ca5ea::caseD_6981:
005CA669  8B 8B 7C 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f7c]
005CA66F  8B 93 58 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f58]
005CA675  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005CA678  73 1C                     JNC 0x005ca696
005CA67A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CA67D  0F AF C2                  IMUL EAX,EDX
005CA680  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005CA683  03 C2                     ADD EAX,EDX
005CA685  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
005CA68B  8D B8 04 01 00 00         LEA EDI,[EAX + 0x104]
005CA691  E9 85 00 00 00            JMP 0x005ca71b
LAB_005ca696:
005CA696  33 C0                     XOR EAX,EAX
005CA698  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
005CA69E  8D B8 04 01 00 00         LEA EDI,[EAX + 0x104]
005CA6A4  EB 75                     JMP 0x005ca71b
switchD_005ca5ea::caseD_6982:
005CA6A6  33 C0                     XOR EAX,EAX
005CA6A8  8A 83 5F 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5f]
005CA6AE  83 E8 00                  SUB EAX,0x0
005CA6B1  74 15                     JZ 0x005ca6c8
005CA6B3  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA6B9  48                        DEC EAX
005CA6BA  51                        PUSH ECX
005CA6BB  0F 84 58 FF FF FF         JZ 0x005ca619
005CA6C1  68 56 23 00 00            PUSH 0x2356
005CA6C6  EB 46                     JMP 0x005ca70e
LAB_005ca6c8:
005CA6C8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA6CE  51                        PUSH ECX
005CA6CF  68 55 23 00 00            PUSH 0x2355
005CA6D4  EB 38                     JMP 0x005ca70e
switchD_005ca5ea::caseD_6983:
005CA6D6  33 C0                     XOR EAX,EAX
005CA6D8  8A 83 5D 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5d]
005CA6DE  EB 08                     JMP 0x005ca6e8
switchD_005ca5ea::default:
005CA6E0  33 C0                     XOR EAX,EAX
005CA6E2  8A 83 5E 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5e]
LAB_005ca6e8:
005CA6E8  83 E8 00                  SUB EAX,0x0
005CA6EB  74 15                     JZ 0x005ca702
005CA6ED  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA6F3  48                        DEC EAX
005CA6F4  51                        PUSH ECX
005CA6F5  0F 84 1E FF FF FF         JZ 0x005ca619
005CA6FB  68 4F 23 00 00            PUSH 0x234f
005CA700  EB 0C                     JMP 0x005ca70e
LAB_005ca702:
005CA702  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CA708  51                        PUSH ECX
005CA709  68 4E 23 00 00            PUSH 0x234e
LAB_005ca70e:
005CA70E  E8 2D 5A 0E 00            CALL 0x006b0140
005CA713  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
005CA719  8B F8                     MOV EDI,EAX
LAB_005ca71b:
005CA71B  83 C9 FF                  OR ECX,0xffffffff
005CA71E  33 C0                     XOR EAX,EAX
005CA720  F2 AE                     SCASB.REPNE ES:EDI
005CA722  F7 D1                     NOT ECX
005CA724  2B F9                     SUB EDI,ECX
005CA726  8B C1                     MOV EAX,ECX
005CA728  8B F7                     MOV ESI,EDI
005CA72A  8B FA                     MOV EDI,EDX
005CA72C  C1 E9 02                  SHR ECX,0x2
005CA72F  F3 A5                     MOVSD.REP ES:EDI,ESI
005CA731  8B C8                     MOV ECX,EAX
005CA733  83 E1 03                  AND ECX,0x3
005CA736  F3 A4                     MOVSB.REP ES:EDI,ESI
005CA738  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005ca73b:
005CA73B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005CA73E  6A 67                     PUSH 0x67
005CA740  8B 0F                     MOV ECX,dword ptr [EDI]
005CA742  83 E9 0A                  SUB ECX,0xa
005CA745  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005CA748  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005CA74B  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005CA74E  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005CA751  66 8B 56 14               MOV DX,word ptr [ESI + 0x14]
005CA755  2D B4 00 00 00            SUB EAX,0xb4
005CA75A  66 F7 DA                  NEG DX
005CA75D  1B D2                     SBB EDX,EDX
005CA75F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005CA762  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CA765  83 E2 FC                  AND EDX,0xfffffffc
005CA768  83 C2 23                  ADD EDX,0x23
005CA76B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005CA76E  8B 8B 67 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c67]
005CA774  52                        PUSH EDX
005CA775  8D 45 D4                  LEA EAX,[EBP + -0x2c]
005CA778  6A 02                     PUSH 0x2
005CA77A  50                        PUSH EAX
005CA77B  51                        PUSH ECX
005CA77C  8B CB                     MOV ECX,EBX
005CA77E  E8 DC A4 E3 FF            CALL 0x00404c5f
005CA783  8B 93 2B 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2b]
005CA789  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005CA78C  52                        PUSH EDX
005CA78D  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
005CA790  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
005CA793  2B C2                     SUB EAX,EDX
005CA795  99                        CDQ
005CA796  2B C2                     SUB EAX,EDX
005CA798  6A 06                     PUSH 0x6
005CA79A  D1 F8                     SAR EAX,0x1
005CA79C  03 C1                     ADD EAX,ECX
005CA79E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005CA7A1  50                        PUSH EAX
005CA7A2  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005CA7A5  2B C1                     SUB EAX,ECX
005CA7A7  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005CA7AA  8D 54 08 F8               LEA EDX,[EAX + ECX*0x1 + -0x8]
005CA7AE  8B 83 67 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c67]
005CA7B4  52                        PUSH EDX
005CA7B5  50                        PUSH EAX
005CA7B6  E8 6E 8A E3 FF            CALL 0x00403229
005CA7BB  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005CA7BE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CA7C1  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CA7C4  83 C4 14                  ADD ESP,0x14
005CA7C7  2B D0                     SUB EDX,EAX
005CA7C9  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005CA7CC  51                        PUSH ECX
005CA7CD  8B 0F                     MOV ECX,dword ptr [EDI]
005CA7CF  83 EA 08                  SUB EDX,0x8
005CA7D2  2D B4 00 00 00            SUB EAX,0xb4
005CA7D7  52                        PUSH EDX
005CA7D8  8B 93 67 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c67]
005CA7DE  50                        PUSH EAX
005CA7DF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CA7E4  83 E9 0A                  SUB ECX,0xa
005CA7E7  51                        PUSH ECX
005CA7E8  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005CA7EB  6A 00                     PUSH 0x0
005CA7ED  52                        PUSH EDX
005CA7EE  E8 9D 62 14 00            CALL 0x00710a90
005CA7F3  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005CA7F7  66 3D 01 00               CMP AX,0x1
005CA7FB  75 07                     JNZ 0x005ca804
005CA7FD  B8 02 00 00 00            MOV EAX,0x2
005CA802  EB 09                     JMP 0x005ca80d
LAB_005ca804:
005CA804  66 F7 D8                  NEG AX
005CA807  1B C0                     SBB EAX,EAX
005CA809  83 E0 02                  AND EAX,0x2
005CA80C  40                        INC EAX
LAB_005ca80d:
005CA80D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CA813  50                        PUSH EAX
005CA814  6A FF                     PUSH -0x1
005CA816  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
005CA81C  6A FF                     PUSH -0x1
005CA81E  51                        PUSH ECX
005CA81F  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005CA822  E8 99 71 14 00            CALL 0x007119c0
005CA827  8B 83 80 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f80]
005CA82D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CA833  50                        PUSH EAX
005CA834  51                        PUSH ECX
005CA835  E8 96 8D 0E 00            CALL 0x006b35d0
005CA83A  66 83 7E 14 03            CMP word ptr [ESI + 0x14],0x3
005CA83F  0F 85 2C 01 00 00         JNZ 0x005ca971
005CA845  E9 1A 01 00 00            JMP 0x005ca964
switchD_005c9cc0::caseD_6985:
005CA84A  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005CA84D  6A 67                     PUSH 0x67
005CA84F  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CA852  8B C1                     MOV EAX,ECX
005CA854  99                        CDQ
005CA855  2B C2                     SUB EAX,EDX
005CA857  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005CA85A  D1 F8                     SAR EAX,0x1
005CA85C  50                        PUSH EAX
005CA85D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005CA860  51                        PUSH ECX
005CA861  8B 0F                     MOV ECX,dword ptr [EDI]
005CA863  2D B4 00 00 00            SUB EAX,0xb4
005CA868  52                        PUSH EDX
005CA869  8B 93 67 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c67]
005CA86F  83 E9 0A                  SUB ECX,0xa
005CA872  50                        PUSH EAX
005CA873  51                        PUSH ECX
005CA874  6A 00                     PUSH 0x0
005CA876  52                        PUSH EDX
005CA877  E8 94 CD 0F 00            CALL 0x006c7610
005CA87C  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005CA880  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CA883  66 F7 D8                  NEG AX
005CA886  1A C0                     SBB AL,AL
005CA888  24 FC                     AND AL,0xfc
005CA88A  04 23                     ADD AL,0x23
005CA88C  50                        PUSH EAX
005CA88D  8B C1                     MOV EAX,ECX
005CA88F  99                        CDQ
005CA890  2B C2                     SUB EAX,EDX
005CA892  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
005CA895  D1 F8                     SAR EAX,0x1
005CA897  83 E8 02                  SUB EAX,0x2
005CA89A  83 C1 FC                  ADD ECX,-0x4
005CA89D  50                        PUSH EAX
005CA89E  8B 07                     MOV EAX,dword ptr [EDI]
005CA8A0  51                        PUSH ECX
005CA8A1  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
005CA8A4  83 E9 04                  SUB ECX,0x4
005CA8A7  81 EA B2 00 00 00         SUB EDX,0xb2
005CA8AD  51                        PUSH ECX
005CA8AE  8B 8B 67 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c67]
005CA8B4  83 E8 08                  SUB EAX,0x8
005CA8B7  52                        PUSH EDX
005CA8B8  50                        PUSH EAX
005CA8B9  6A 00                     PUSH 0x0
005CA8BB  51                        PUSH ECX
005CA8BC  E8 AF CC 0F 00            CALL 0x006c7570
005CA8C1  66 8B 56 14               MOV DX,word ptr [ESI + 0x14]
005CA8C5  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CA8C8  66 F7 DA                  NEG DX
005CA8CB  1A D2                     SBB DL,DL
005CA8CD  8B C1                     MOV EAX,ECX
005CA8CF  80 E2 FC                  AND DL,0xfc
005CA8D2  80 C2 23                  ADD DL,0x23
005CA8D5  52                        PUSH EDX
005CA8D6  99                        CDQ
005CA8D7  2B C2                     SUB EAX,EDX
005CA8D9  8B 17                     MOV EDX,dword ptr [EDI]
005CA8DB  D1 F8                     SAR EAX,0x1
005CA8DD  50                        PUSH EAX
005CA8DE  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005CA8E1  51                        PUSH ECX
005CA8E2  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
005CA8E5  81 E9 B4 00 00 00         SUB ECX,0xb4
005CA8EB  50                        PUSH EAX
005CA8EC  8B 83 67 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c67]
005CA8F2  83 EA 0A                  SUB EDX,0xa
005CA8F5  51                        PUSH ECX
005CA8F6  52                        PUSH EDX
005CA8F7  6A 00                     PUSH 0x0
005CA8F9  50                        PUSH EAX
005CA8FA  E8 71 CC 0F 00            CALL 0x006c7570
005CA8FF  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CA902  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005CA905  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
005CA908  51                        PUSH ECX
005CA909  2D B4 00 00 00            SUB EAX,0xb4
005CA90E  52                        PUSH EDX
005CA90F  50                        PUSH EAX
005CA910  8B 0F                     MOV ECX,dword ptr [EDI]
005CA912  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CA917  8B 93 67 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c67]
005CA91D  83 E9 0A                  SUB ECX,0xa
005CA920  51                        PUSH ECX
005CA921  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005CA924  6A 00                     PUSH 0x0
005CA926  52                        PUSH EDX
005CA927  E8 64 61 14 00            CALL 0x00710a90
005CA92C  33 C9                     XOR ECX,ECX
005CA92E  66 83 7E 14 01            CMP word ptr [ESI + 0x14],0x1
005CA933  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CA939  0F 95 C1                  SETNZ CL
005CA93C  83 C1 05                  ADD ECX,0x5
005CA93F  51                        PUSH ECX
005CA940  6A FF                     PUSH -0x1
005CA942  6A FF                     PUSH -0x1
005CA944  52                        PUSH EDX
005CA945  68 4A 23 00 00            PUSH 0x234a
005CA94A  E8 F1 57 0E 00            CALL 0x006b0140
005CA94F  50                        PUSH EAX
005CA950  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CA955  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005CA958  E8 63 70 14 00            CALL 0x007119c0
005CA95D  66 83 7E 14 03            CMP word ptr [ESI + 0x14],0x3
005CA962  75 0D                     JNZ 0x005ca971
LAB_005ca964:
005CA964  6A FF                     PUSH -0x1
005CA966  6A 01                     PUSH 0x1
005CA968  6A 09                     PUSH 0x9
005CA96A  8B CB                     MOV ECX,EBX
005CA96C  E8 80 A2 E3 FF            CALL 0x00404bf1
switchD_005c8bd0::caseD_6120:
005CA971  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005CA974  3D 7F 65 00 00            CMP EAX,0x657f
005CA979  0F 82 BF 04 00 00         JC 0x005cae3e
005CA97F  3D 8D 65 00 00            CMP EAX,0x658d
005CA984  0F 83 B4 04 00 00         JNC 0x005cae3e
005CA98A  8D B8 81 9A FF FF         LEA EDI,[EAX + 0xffff9a81]
005CA990  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005CA993  8B C8                     MOV ECX,EAX
005CA995  6A 67                     PUSH 0x67
005CA997  8B 11                     MOV EDX,dword ptr [ECX]
005CA999  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005CA99C  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005CA99F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005CA9A2  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005CA9A5  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005CA9A8  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005CA9AB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005CA9AE  8B 10                     MOV EDX,dword ptr [EAX]
005CA9B0  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
005CA9B4  81 EA 12 01 00 00         SUB EDX,0x112
005CA9BA  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005CA9BD  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005CA9C0  2D 49 01 00 00            SUB EAX,0x149
005CA9C5  8D 55 E8                  LEA EDX,[EBP + -0x18]
005CA9C8  66 F7 D9                  NEG CX
005CA9CB  1B C9                     SBB ECX,ECX
005CA9CD  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005CA9D0  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005CA9D6  83 E1 FC                  AND ECX,0xfffffffc
005CA9D9  83 C1 23                  ADD ECX,0x23
005CA9DC  51                        PUSH ECX
005CA9DD  6A 02                     PUSH 0x2
005CA9DF  52                        PUSH EDX
005CA9E0  50                        PUSH EAX
005CA9E1  8B CB                     MOV ECX,EBX
005CA9E3  E8 77 A2 E3 FF            CALL 0x00404c5f
005CA9E8  83 FF 0D                  CMP EDI,0xd
005CA9EB  0F 87 26 04 00 00         JA 0x005cae17
switchD_005ca9f1::switchD:
005CA9F1  FF 24 BD A8 B1 5C 00      JMP dword ptr [EDI*0x4 + 0x5cb1a8]
switchD_005ca9f1::caseD_657f:
005CA9F8  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005CA9FE  8B 35 06 C5 80 00         MOV ESI,dword ptr [0x0080c506]
005CAA04  8B 3D 02 C5 80 00         MOV EDI,dword ptr [0x0080c502]
005CAA0A  3C 06                     CMP AL,0x6
005CAA0C  74 0A                     JZ 0x005caa18
005CAA0E  3C 01                     CMP AL,0x1
005CAA10  74 06                     JZ 0x005caa18
005CAA12  3C 02                     CMP AL,0x2
005CAA14  8B CF                     MOV ECX,EDI
005CAA16  75 02                     JNZ 0x005caa1a
LAB_005caa18:
005CAA18  8B CE                     MOV ECX,ESI
LAB_005caa1a:
005CAA1A  8B 93 5F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c5f]
005CAA20  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005CAA23  73 2B                     JNC 0x005caa50
005CAA25  3C 06                     CMP AL,0x6
005CAA27  74 0A                     JZ 0x005caa33
005CAA29  3C 01                     CMP AL,0x1
005CAA2B  74 06                     JZ 0x005caa33
005CAA2D  3C 02                     CMP AL,0x2
005CAA2F  8B CF                     MOV ECX,EDI
005CAA31  75 02                     JNZ 0x005caa35
LAB_005caa33:
005CAA33  8B CE                     MOV ECX,ESI
LAB_005caa35:
005CAA35  3C 06                     CMP AL,0x6
005CAA37  74 0A                     JZ 0x005caa43
005CAA39  3C 01                     CMP AL,0x1
005CAA3B  74 06                     JZ 0x005caa43
005CAA3D  3C 02                     CMP AL,0x2
005CAA3F  8B C7                     MOV EAX,EDI
005CAA41  75 02                     JNZ 0x005caa45
LAB_005caa43:
005CAA43  8B C6                     MOV EAX,ESI
LAB_005caa45:
005CAA45  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005CAA48  0F AF C2                  IMUL EAX,EDX
005CAA4B  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005CAA4E  EB 02                     JMP 0x005caa52
LAB_005caa50:
005CAA50  33 C0                     XOR EAX,EAX
LAB_005caa52:
005CAA52  85 C0                     TEST EAX,EAX
005CAA54  75 05                     JNZ 0x005caa5b
005CAA56  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_005caa5b:
005CAA5B  8B F8                     MOV EDI,EAX
005CAA5D  83 C9 FF                  OR ECX,0xffffffff
005CAA60  33 C0                     XOR EAX,EAX
005CAA62  F2 AE                     SCASB.REPNE ES:EDI
005CAA64  F7 D1                     NOT ECX
005CAA66  2B F9                     SUB EDI,ECX
005CAA68  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CAA6B  8B D1                     MOV EDX,ECX
005CAA6D  8B F7                     MOV ESI,EDI
005CAA6F  BF 3A F3 80 00            MOV EDI,0x80f33a
005CAA74  50                        PUSH EAX
005CAA75  C1 E9 02                  SHR ECX,0x2
005CAA78  F3 A5                     MOVSD.REP ES:EDI,ESI
005CAA7A  8B CA                     MOV ECX,EDX
005CAA7C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CAA7F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005CAA82  83 E1 03                  AND ECX,0x3
005CAA85  F3 A4                     MOVSB.REP ES:EDI,ESI
005CAA87  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005CAA8A  51                        PUSH ECX
005CAA8B  8B 8B 1E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1e]
005CAA91  52                        PUSH EDX
005CAA92  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CAA98  50                        PUSH EAX
005CAA99  6A 00                     PUSH 0x0
005CAA9B  51                        PUSH ECX
005CAA9C  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005CAA9F  E8 EC 5F 14 00            CALL 0x00710a90
005CAAA4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CAAA7  66 8B 40 14               MOV AX,word ptr [EAX + 0x14]
005CAAAB  66 3D 01 00               CMP AX,0x1
005CAAAF  75 07                     JNZ 0x005caab8
005CAAB1  B8 02 00 00 00            MOV EAX,0x2
005CAAB6  EB 09                     JMP 0x005caac1
LAB_005caab8:
005CAAB8  66 F7 D8                  NEG AX
005CAABB  1B C0                     SBB EAX,EAX
005CAABD  83 E0 02                  AND EAX,0x2
005CAAC0  40                        INC EAX
LAB_005caac1:
005CAAC1  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CAAC7  50                        PUSH EAX
005CAAC8  6A FF                     PUSH -0x1
005CAACA  6A FF                     PUSH -0x1
005CAACC  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005CAACF  68 3A F3 80 00            PUSH 0x80f33a
005CAAD4  E8 E7 6E 14 00            CALL 0x007119c0
005CAAD9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005CAADC  E9 36 03 00 00            JMP 0x005cae17
switchD_005ca9f1::caseD_6582:
005CAAE1  8D 47 FD                  LEA EAX,[EDI + -0x3]
005CAAE4  83 F8 03                  CMP EAX,0x3
005CAAE7  77 60                     JA 0x005cab49
switchD_005caae9::switchD:
005CAAE9  FF 24 85 E0 B1 5C 00      JMP dword ptr [EAX*0x4 + 0x5cb1e0]
switchD_005caae9::caseD_6582:
005CAAF0  A0 91 8A 80 00            MOV AL,[0x00808a91]
005CAAF5  84 C0                     TEST AL,AL
005CAAF7  75 3F                     JNZ 0x005cab38
005CAAF9  C7 45 E4 4E 23 00 00      MOV dword ptr [EBP + -0x1c],0x234e
005CAB00  EB 47                     JMP 0x005cab49
switchD_005caae9::caseD_6583:
005CAB02  A0 90 8A 80 00            MOV AL,[0x00808a90]
005CAB07  84 C0                     TEST AL,AL
005CAB09  75 2D                     JNZ 0x005cab38
005CAB0B  C7 45 E4 4E 23 00 00      MOV dword ptr [EBP + -0x1c],0x234e
005CAB12  EB 35                     JMP 0x005cab49
switchD_005caae9::caseD_6584:
005CAB14  A0 92 8A 80 00            MOV AL,[0x00808a92]
005CAB19  84 C0                     TEST AL,AL
005CAB1B  75 1B                     JNZ 0x005cab38
005CAB1D  C7 45 E4 4E 23 00 00      MOV dword ptr [EBP + -0x1c],0x234e
005CAB24  EB 23                     JMP 0x005cab49
switchD_005caae9::caseD_6585:
005CAB26  A0 93 8A 80 00            MOV AL,[0x00808a93]
005CAB2B  84 C0                     TEST AL,AL
005CAB2D  75 09                     JNZ 0x005cab38
005CAB2F  C7 45 E4 4E 23 00 00      MOV dword ptr [EBP + -0x1c],0x234e
005CAB36  EB 11                     JMP 0x005cab49
LAB_005cab38:
005CAB38  FE C8                     DEC AL
005CAB3A  F6 D8                     NEG AL
005CAB3C  1B C0                     SBB EAX,EAX
005CAB3E  83 E0 03                  AND EAX,0x3
005CAB41  05 4C 23 00 00            ADD EAX,0x234c
005CAB46  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
switchD_005caae9::default:
005CAB49  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005CAB4C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005CAB4F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005CAB52  52                        PUSH EDX
005CAB53  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005CAB56  50                        PUSH EAX
005CAB57  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005CAB5D  51                        PUSH ECX
005CAB5E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CAB64  52                        PUSH EDX
005CAB65  6A 00                     PUSH 0x0
005CAB67  50                        PUSH EAX
005CAB68  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005CAB6B  E8 20 5F 14 00            CALL 0x00710a90
005CAB70  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005CAB74  66 3D 01 00               CMP AX,0x1
005CAB78  75 07                     JNZ 0x005cab81
005CAB7A  B8 02 00 00 00            MOV EAX,0x2
005CAB7F  EB 09                     JMP 0x005cab8a
LAB_005cab81:
005CAB81  66 F7 D8                  NEG AX
005CAB84  1B C0                     SBB EAX,EAX
005CAB86  83 E0 02                  AND EAX,0x2
005CAB89  40                        INC EAX
LAB_005cab8a:
005CAB8A  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CAB90  50                        PUSH EAX
005CAB91  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005CAB94  6A FF                     PUSH -0x1
005CAB96  6A FF                     PUSH -0x1
005CAB98  52                        PUSH EDX
005CAB99  50                        PUSH EAX
005CAB9A  E8 A1 55 0E 00            CALL 0x006b0140
005CAB9F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CABA5  50                        PUSH EAX
005CABA6  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005CABA9  E8 12 6E 14 00            CALL 0x007119c0
005CABAE  E9 64 02 00 00            JMP 0x005cae17
switchD_005ca9f1::caseD_6586:
005CABB3  A1 97 8A 80 00            MOV EAX,[0x00808a97]
005CABB8  83 F8 FF                  CMP EAX,-0x1
005CABBB  74 16                     JZ 0x005cabd3
005CABBD  50                        PUSH EAX
005CABBE  68 90 18 7C 00            PUSH 0x7c1890
005CABC3  68 3A F3 80 00            PUSH 0x80f33a
005CABC8  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005CABCE  83 C4 0C                  ADD ESP,0xc
005CABD1  EB 36                     JMP 0x005cac09
LAB_005cabd3:
005CABD3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CABD9  52                        PUSH EDX
005CABDA  68 55 1F 00 00            PUSH 0x1f55
005CABDF  E8 5C 55 0E 00            CALL 0x006b0140
005CABE4  8B F8                     MOV EDI,EAX
005CABE6  83 C9 FF                  OR ECX,0xffffffff
005CABE9  33 C0                     XOR EAX,EAX
005CABEB  F2 AE                     SCASB.REPNE ES:EDI
005CABED  F7 D1                     NOT ECX
005CABEF  2B F9                     SUB EDI,ECX
005CABF1  8B C1                     MOV EAX,ECX
005CABF3  8B F7                     MOV ESI,EDI
005CABF5  BF 3A F3 80 00            MOV EDI,0x80f33a
005CABFA  C1 E9 02                  SHR ECX,0x2
005CABFD  F3 A5                     MOVSD.REP ES:EDI,ESI
005CABFF  8B C8                     MOV ECX,EAX
005CAC01  83 E1 03                  AND ECX,0x3
005CAC04  F3 A4                     MOVSB.REP ES:EDI,ESI
005CAC06  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005cac09:
005CAC09  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005CAC0C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005CAC0F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005CAC12  51                        PUSH ECX
005CAC13  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005CAC16  52                        PUSH EDX
005CAC17  8B 93 1E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e1e]
005CAC1D  50                        PUSH EAX
005CAC1E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CAC23  51                        PUSH ECX
005CAC24  6A 00                     PUSH 0x0
005CAC26  52                        PUSH EDX
005CAC27  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005CAC2A  E8 61 5E 14 00            CALL 0x00710a90
005CAC2F  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005CAC33  66 3D 01 00               CMP AX,0x1
005CAC37  75 07                     JNZ 0x005cac40
005CAC39  B8 02 00 00 00            MOV EAX,0x2
005CAC3E  EB 09                     JMP 0x005cac49
LAB_005cac40:
005CAC40  66 F7 D8                  NEG AX
005CAC43  1B C0                     SBB EAX,EAX
005CAC45  83 E0 02                  AND EAX,0x2
005CAC48  40                        INC EAX
LAB_005cac49:
005CAC49  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CAC4F  50                        PUSH EAX
005CAC50  6A FF                     PUSH -0x1
005CAC52  6A FF                     PUSH -0x1
005CAC54  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005CAC57  68 3A F3 80 00            PUSH 0x80f33a
005CAC5C  E8 5F 6D 14 00            CALL 0x007119c0
005CAC61  E9 B1 01 00 00            JMP 0x005cae17
switchD_005ca9f1::caseD_6587:
005CAC66  A0 9B 8A 80 00            MOV AL,[0x00808a9b]
005CAC6B  3C FF                     CMP AL,0xff
005CAC6D  75 27                     JNZ 0x005cac96
005CAC6F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CAC75  52                        PUSH EDX
005CAC76  68 59 1F 00 00            PUSH 0x1f59
005CAC7B  E8 C0 54 0E 00            CALL 0x006b0140
005CAC80  50                        PUSH EAX
005CAC81  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CAC86  68 3A F3 80 00            PUSH 0x80f33a
005CAC8B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005CAC91  83 C4 0C                  ADD ESP,0xc
005CAC94  EB 2B                     JMP 0x005cacc1
LAB_005cac96:
005CAC96  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CAC9C  33 C9                     XOR ECX,ECX
005CAC9E  8A C8                     MOV CL,AL
005CACA0  41                        INC ECX
005CACA1  51                        PUSH ECX
005CACA2  52                        PUSH EDX
005CACA3  68 57 1F 00 00            PUSH 0x1f57
005CACA8  E8 93 54 0E 00            CALL 0x006b0140
005CACAD  50                        PUSH EAX
005CACAE  68 B8 D0 7C 00            PUSH 0x7cd0b8
005CACB3  68 3A F3 80 00            PUSH 0x80f33a
005CACB8  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005CACBE  83 C4 10                  ADD ESP,0x10
LAB_005cacc1:
005CACC1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CACC4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005CACC7  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CACCA  50                        PUSH EAX
005CACCB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005CACCE  51                        PUSH ECX
005CACCF  8B 8B 1E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1e]
005CACD5  52                        PUSH EDX
005CACD6  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005CACDC  50                        PUSH EAX
005CACDD  6A 00                     PUSH 0x0
005CACDF  51                        PUSH ECX
005CACE0  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005CACE3  E8 A8 5D 14 00            CALL 0x00710a90
005CACE8  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005CACEC  66 3D 01 00               CMP AX,0x1
005CACF0  75 07                     JNZ 0x005cacf9
005CACF2  B8 02 00 00 00            MOV EAX,0x2
005CACF7  EB 09                     JMP 0x005cad02
LAB_005cacf9:
005CACF9  66 F7 D8                  NEG AX
005CACFC  1B C0                     SBB EAX,EAX
005CACFE  83 E0 02                  AND EAX,0x2
005CAD01  40                        INC EAX
LAB_005cad02:
005CAD02  50                        PUSH EAX
005CAD03  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CAD08  6A FF                     PUSH -0x1
005CAD0A  6A FF                     PUSH -0x1
005CAD0C  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005CAD0F  68 3A F3 80 00            PUSH 0x80f33a
005CAD14  E8 A7 6C 14 00            CALL 0x007119c0
005CAD19  E9 F9 00 00 00            JMP 0x005cae17
switchD_005ca9f1::caseD_6588:
005CAD1E  A0 95 8A 80 00            MOV AL,[0x00808a95]
005CAD23  EB 63                     JMP 0x005cad88
switchD_005ca9f1::caseD_6589:
005CAD25  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005CAD2A  84 C0                     TEST AL,AL
005CAD2C  0F 84 E5 00 00 00         JZ 0x005cae17
005CAD32  E9 9E 00 00 00            JMP 0x005cadd5
switchD_005ca9f1::caseD_658a:
005CAD37  A0 94 8A 80 00            MOV AL,[0x00808a94]
005CAD3C  84 C0                     TEST AL,AL
005CAD3E  0F 84 D3 00 00 00         JZ 0x005cae17
005CAD44  8B 83 4F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f4f]
005CAD4A  6A 00                     PUSH 0x0
005CAD4C  50                        PUSH EAX
005CAD4D  E8 4E 06 14 00            CALL 0x0070b3a0
005CAD52  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005CAD55  50                        PUSH EAX
005CAD56  6A 06                     PUSH 0x6
005CAD58  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
005CAD5B  8D 41 F0                  LEA EAX,[ECX + -0x10]
005CAD5E  99                        CDQ
005CAD5F  2B C2                     SUB EAX,EDX
005CAD61  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CAD64  D1 F8                     SAR EAX,0x1
005CAD66  03 C2                     ADD EAX,EDX
005CAD68  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005CAD6B  50                        PUSH EAX
005CAD6C  8D 42 EF                  LEA EAX,[EDX + -0x11]
005CAD6F  99                        CDQ
005CAD70  2B C2                     SUB EAX,EDX
005CAD72  D1 F8                     SAR EAX,0x1
005CAD74  03 C7                     ADD EAX,EDI
005CAD76  50                        PUSH EAX
005CAD77  8B 83 1E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e1e]
005CAD7D  50                        PUSH EAX
005CAD7E  E9 8C 00 00 00            JMP 0x005cae0f
switchD_005ca9f1::caseD_658b:
005CAD83  A0 A9 8A 80 00            MOV AL,[0x00808aa9]
LAB_005cad88:
005CAD88  84 C0                     TEST AL,AL
005CAD8A  0F 84 87 00 00 00         JZ 0x005cae17
005CAD90  8B 8B 4F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f4f]
005CAD96  6A 00                     PUSH 0x0
005CAD98  51                        PUSH ECX
005CAD99  E8 02 06 14 00            CALL 0x0070b3a0
005CAD9E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005CADA1  50                        PUSH EAX
005CADA2  6A 06                     PUSH 0x6
005CADA4  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005CADA7  8D 42 F0                  LEA EAX,[EDX + -0x10]
005CADAA  99                        CDQ
005CADAB  2B C2                     SUB EAX,EDX
005CADAD  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CADB0  D1 F8                     SAR EAX,0x1
005CADB2  03 C2                     ADD EAX,EDX
005CADB4  50                        PUSH EAX
005CADB5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005CADB8  83 C0 EF                  ADD EAX,-0x11
005CADBB  99                        CDQ
005CADBC  2B C2                     SUB EAX,EDX
005CADBE  D1 F8                     SAR EAX,0x1
005CADC0  03 C1                     ADD EAX,ECX
005CADC2  8B 8B 1E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1e]
005CADC8  50                        PUSH EAX
005CADC9  51                        PUSH ECX
005CADCA  EB 43                     JMP 0x005cae0f
switchD_005ca9f1::caseD_658c:
005CADCC  A0 AA 8A 80 00            MOV AL,[0x00808aaa]
005CADD1  84 C0                     TEST AL,AL
005CADD3  74 42                     JZ 0x005cae17
LAB_005cadd5:
005CADD5  8B 93 4F 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f4f]
005CADDB  6A 00                     PUSH 0x0
005CADDD  52                        PUSH EDX
005CADDE  E8 BD 05 14 00            CALL 0x0070b3a0
005CADE3  50                        PUSH EAX
005CADE4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005CADE7  83 C0 F0                  ADD EAX,-0x10
005CADEA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005CADED  99                        CDQ
005CADEE  2B C2                     SUB EAX,EDX
005CADF0  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005CADF3  D1 F8                     SAR EAX,0x1
005CADF5  03 C2                     ADD EAX,EDX
005CADF7  6A 06                     PUSH 0x6
005CADF9  50                        PUSH EAX
005CADFA  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
005CADFD  8D 41 EF                  LEA EAX,[ECX + -0x11]
005CAE00  99                        CDQ
005CAE01  2B C2                     SUB EAX,EDX
005CAE03  8B 93 1E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e1e]
005CAE09  D1 F8                     SAR EAX,0x1
005CAE0B  03 C7                     ADD EAX,EDI
005CAE0D  50                        PUSH EAX
005CAE0E  52                        PUSH EDX
LAB_005cae0f:
005CAE0F  E8 15 84 E3 FF            CALL 0x00403229
005CAE14  83 C4 1C                  ADD ESP,0x1c
switchD_005ca9f1::caseD_6580:
005CAE17  8B 83 22 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e22]
005CAE1D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005CAE23  50                        PUSH EAX
005CAE24  51                        PUSH ECX
005CAE25  E8 A6 87 0E 00            CALL 0x006b35d0
005CAE2A  66 83 7E 14 03            CMP word ptr [ESI + 0x14],0x3
005CAE2F  75 0D                     JNZ 0x005cae3e
005CAE31  6A FF                     PUSH -0x1
005CAE33  6A 01                     PUSH 0x1
005CAE35  6A 09                     PUSH 0x9
005CAE37  8B CB                     MOV ECX,EBX
005CAE39  E8 B3 9D E3 FF            CALL 0x00404bf1
LAB_005cae3e:
005CAE3E  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
005CAE44  56                        PUSH ESI
005CAE45  8B CB                     MOV ECX,EBX
005CAE47  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CAE4D  E8 2E 64 E3 FF            CALL 0x00401280
005CAE52  5F                        POP EDI
005CAE53  5E                        POP ESI
005CAE54  5B                        POP EBX
005CAE55  8B E5                     MOV ESP,EBP
005CAE57  5D                        POP EBP
005CAE58  C2 04 00                  RET 0x4
LAB_005cae5b:
005CAE5B  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
005CAE61  68 3C D2 7C 00            PUSH 0x7cd23c
005CAE66  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CAE6B  56                        PUSH ESI
005CAE6C  57                        PUSH EDI
005CAE6D  68 58 07 00 00            PUSH 0x758
005CAE72  68 E8 D0 7C 00            PUSH 0x7cd0e8
005CAE77  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CAE7C  E8 4F 26 0E 00            CALL 0x006ad4d0
005CAE81  83 C4 18                  ADD ESP,0x18
005CAE84  85 C0                     TEST EAX,EAX
005CAE86  74 01                     JZ 0x005cae89
005CAE88  CC                        INT3
LAB_005cae89:
005CAE89  68 58 07 00 00            PUSH 0x758
005CAE8E  68 E8 D0 7C 00            PUSH 0x7cd0e8
005CAE93  57                        PUSH EDI
005CAE94  56                        PUSH ESI
005CAE95  E8 A6 AF 0D 00            CALL 0x006a5e40
005CAE9A  5F                        POP EDI
005CAE9B  5E                        POP ESI
005CAE9C  B8 FF FF 00 00            MOV EAX,0xffff
005CAEA1  5B                        POP EBX
005CAEA2  8B E5                     MOV ESP,EBP
005CAEA4  5D                        POP EBP
005CAEA5  C2 04 00                  RET 0x4
