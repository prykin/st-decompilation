FUN_00696940:
00696940  55                        PUSH EBP
00696941  8B EC                     MOV EBP,ESP
00696943  83 EC 18                  SUB ESP,0x18
00696946  53                        PUSH EBX
00696947  8B D9                     MOV EBX,ECX
00696949  56                        PUSH ESI
0069694A  57                        PUSH EDI
0069694B  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
00696951  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00696954  85 C0                     TEST EAX,EAX
00696956  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0069695D  0F 84 03 02 00 00         JZ 0x00696b66
00696963  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00696966  33 FF                     XOR EDI,EDI
00696968  85 C0                     TEST EAX,EAX
0069696A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069696D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00696970  0F 8E F7 00 00 00         JLE 0x00696a6d
LAB_00696976:
00696976  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
0069697C  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0069697F  0F 83 D9 00 00 00         JNC 0x00696a5e
00696985  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00696988  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0069698B  0F AF F7                  IMUL ESI,EDI
0069698E  03 F1                     ADD ESI,ECX
00696990  85 F6                     TEST ESI,ESI
00696992  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00696995  0F 84 C3 00 00 00         JZ 0x00696a5e
0069699B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069699E  8B 0E                     MOV ECX,dword ptr [ESI]
006969A0  3B C8                     CMP ECX,EAX
006969A2  0F 84 B6 00 00 00         JZ 0x00696a5e
006969A8  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
006969AB  85 C0                     TEST EAX,EAX
006969AD  74 11                     JZ 0x006969c0
006969AF  E8 0C 7D 09 00            CALL 0x0072e6c0
006969B4  99                        CDQ
006969B5  B9 06 00 00 00            MOV ECX,0x6
006969BA  F7 F9                     IDIV ECX
006969BC  42                        INC EDX
006969BD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006969c0:
006969C0  8B 4E 15                  MOV ECX,dword ptr [ESI + 0x15]
006969C3  33 D2                     XOR EDX,EDX
006969C5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006969C8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006969CB  85 C0                     TEST EAX,EAX
006969CD  0F 8E 8B 00 00 00         JLE 0x00696a5e
006969D3  EB 03                     JMP 0x006969d8
LAB_006969d5:
006969D5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_006969d8:
006969D8  3B D0                     CMP EDX,EAX
006969DA  73 0B                     JNC 0x006969e7
006969DC  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006969DF  0F AF C2                  IMUL EAX,EDX
006969E2  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006969E5  EB 02                     JMP 0x006969e9
LAB_006969e7:
006969E7  33 C0                     XOR EAX,EAX
LAB_006969e9:
006969E9  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
006969EC  8B B3 33 58 00 00         MOV ESI,dword ptr [EBX + 0x5833]
006969F2  8B C1                     MOV EAX,ECX
006969F4  99                        CDQ
006969F5  F7 FE                     IDIV ESI
006969F7  8B F8                     MOV EDI,EAX
006969F9  8B C1                     MOV EAX,ECX
006969FB  99                        CDQ
006969FC  F7 FE                     IDIV ESI
006969FE  8B F2                     MOV ESI,EDX
00696A00  E8 BB 7C 09 00            CALL 0x0072e6c0
00696A05  25 03 00 00 80            AND EAX,0x80000003
00696A0A  79 05                     JNS 0x00696a11
00696A0C  48                        DEC EAX
00696A0D  83 C8 FC                  OR EAX,0xfffffffc
00696A10  40                        INC EAX
LAB_00696a11:
00696A11  83 F8 01                  CMP EAX,0x1
00696A14  75 2D                     JNZ 0x00696a43
00696A16  85 F6                     TEST ESI,ESI
00696A18  74 29                     JZ 0x00696a43
00696A1A  85 FF                     TEST EDI,EDI
00696A1C  74 25                     JZ 0x00696a43
00696A1E  3B B3 33 58 00 00         CMP ESI,dword ptr [EBX + 0x5833]
00696A24  74 1D                     JZ 0x00696a43
00696A26  3B BB 37 58 00 00         CMP EDI,dword ptr [EBX + 0x5837]
00696A2C  74 15                     JZ 0x00696a43
00696A2E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00696A31  8B CB                     MOV ECX,EBX
00696A33  52                        PUSH EDX
00696A34  6A 01                     PUSH 0x1
00696A36  6A 00                     PUSH 0x0
00696A38  6A 01                     PUSH 0x1
00696A3A  6A 00                     PUSH 0x0
00696A3C  57                        PUSH EDI
00696A3D  56                        PUSH ESI
00696A3E  E8 0C B6 D6 FF            CALL 0x0040204f
LAB_00696a43:
00696A43  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00696A46  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00696A49  42                        INC EDX
00696A4A  8B 48 15                  MOV ECX,dword ptr [EAX + 0x15]
00696A4D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00696A50  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00696A53  3B D0                     CMP EDX,EAX
00696A55  0F 8C 7A FF FF FF         JL 0x006969d5
00696A5B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00696a5e:
00696A5E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00696A61  47                        INC EDI
00696A62  3B F8                     CMP EDI,EAX
00696A64  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00696A67  0F 8C 09 FF FF FF         JL 0x00696976
LAB_00696a6d:
00696A6D  33 FF                     XOR EDI,EDI
00696A6F  85 C0                     TEST EAX,EAX
00696A71  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00696A74  0F 8E EC 00 00 00         JLE 0x00696b66
LAB_00696a7a:
00696A7A  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
00696A80  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00696A83  0F 83 CE 00 00 00         JNC 0x00696b57
00696A89  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00696A8C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00696A8F  0F AF F7                  IMUL ESI,EDI
00696A92  03 F1                     ADD ESI,ECX
00696A94  85 F6                     TEST ESI,ESI
00696A96  0F 84 BB 00 00 00         JZ 0x00696b57
00696A9C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00696A9F  8B 06                     MOV EAX,dword ptr [ESI]
00696AA1  3B C1                     CMP EAX,ECX
00696AA3  0F 85 AE 00 00 00         JNZ 0x00696b57
00696AA9  8B 4E 15                  MOV ECX,dword ptr [ESI + 0x15]
00696AAC  85 C9                     TEST ECX,ECX
00696AAE  0F 84 A3 00 00 00         JZ 0x00696b57
00696AB4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00696AB7  33 D2                     XOR EDX,EDX
00696AB9  85 C0                     TEST EAX,EAX
00696ABB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00696ABE  0F 8E 93 00 00 00         JLE 0x00696b57
00696AC4  EB 06                     JMP 0x00696acc
LAB_00696ac6:
00696AC6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00696AC9  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00696acc:
00696ACC  3B D0                     CMP EDX,EAX
00696ACE  73 0B                     JNC 0x00696adb
00696AD0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00696AD3  0F AF C2                  IMUL EAX,EDX
00696AD6  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00696AD9  EB 02                     JMP 0x00696add
LAB_00696adb:
00696ADB  33 C0                     XOR EAX,EAX
LAB_00696add:
00696ADD  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
00696AE0  8B BB 33 58 00 00         MOV EDI,dword ptr [EBX + 0x5833]
00696AE6  8B C1                     MOV EAX,ECX
00696AE8  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00696AEF  99                        CDQ
00696AF0  F7 FF                     IDIV EDI
00696AF2  8B D8                     MOV EBX,EAX
00696AF4  8B C1                     MOV EAX,ECX
00696AF6  99                        CDQ
00696AF7  F7 FF                     IDIV EDI
00696AF9  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
00696AFC  85 C0                     TEST EAX,EAX
00696AFE  8B FA                     MOV EDI,EDX
00696B00  7E 6D                     JLE 0x00696b6f
00696B02  83 F8 02                  CMP EAX,0x2
00696B05  7F 68                     JG 0x00696b6f
00696B07  E8 B4 7B 09 00            CALL 0x0072e6c0
00696B0C  99                        CDQ
00696B0D  B9 03 00 00 00            MOV ECX,0x3
00696B12  F7 F9                     IDIV ECX
00696B14  85 D2                     TEST EDX,EDX
00696B16  75 57                     JNZ 0x00696b6f
00696B18  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
LAB_00696b1f:
00696B1F  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
00696B22  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00696B25  6A 01                     PUSH 0x1
00696B27  6A 01                     PUSH 0x1
00696B29  68 FF 00 00 00            PUSH 0xff
00696B2E  50                        PUSH EAX
00696B2F  51                        PUSH ECX
LAB_00696b30:
00696B30  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00696B33  43                        INC EBX
00696B34  47                        INC EDI
00696B35  53                        PUSH EBX
00696B36  57                        PUSH EDI
00696B37  E8 13 B5 D6 FF            CALL 0x0040204f
00696B3C  8B 4E 15                  MOV ECX,dword ptr [ESI + 0x15]
00696B3F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00696B42  42                        INC EDX
00696B43  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00696B46  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00696B49  3B D0                     CMP EDX,EAX
00696B4B  0F 8C 75 FF FF FF         JL 0x00696ac6
00696B51  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00696B54  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00696b57:
00696B57  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00696B5A  47                        INC EDI
00696B5B  3B F8                     CMP EDI,EAX
00696B5D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00696B60  0F 8C 14 FF FF FF         JL 0x00696a7a
LAB_00696b66:
00696B66  5F                        POP EDI
00696B67  5E                        POP ESI
00696B68  5B                        POP EBX
00696B69  8B E5                     MOV ESP,EBP
00696B6B  5D                        POP EBP
00696B6C  C2 04 00                  RET 0x4
LAB_00696b6f:
00696B6F  83 7E 05 01               CMP dword ptr [ESI + 0x5],0x1
00696B73  75 AA                     JNZ 0x00696b1f
00696B75  E8 46 7B 09 00            CALL 0x0072e6c0
00696B7A  25 07 00 00 80            AND EAX,0x80000007
00696B7F  79 05                     JNS 0x00696b86
00696B81  48                        DEC EAX
00696B82  83 C8 F8                  OR EAX,0xfffffff8
00696B85  40                        INC EAX
LAB_00696b86:
00696B86  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
00696B89  40                        INC EAX
00696B8A  50                        PUSH EAX
00696B8B  6A 01                     PUSH 0x1
00696B8D  6A 01                     PUSH 0x1
00696B8F  52                        PUSH EDX
00696B90  6A 00                     PUSH 0x0
00696B92  EB 9C                     JMP 0x00696b30
