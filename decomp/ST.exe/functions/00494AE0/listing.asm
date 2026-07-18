FUN_00494ae0:
00494AE0  53                        PUSH EBX
00494AE1  56                        PUSH ESI
00494AE2  8B F1                     MOV ESI,ECX
00494AE4  57                        PUSH EDI
00494AE5  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00494AEB  83 F8 05                  CMP EAX,0x5
00494AEE  74 0E                     JZ 0x00494afe
00494AF0  83 F8 11                  CMP EAX,0x11
00494AF3  74 09                     JZ 0x00494afe
00494AF5  83 F8 21                  CMP EAX,0x21
00494AF8  0F 85 40 02 00 00         JNZ 0x00494d3e
LAB_00494afe:
00494AFE  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494B01  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00494B07  6A 3C                     PUSH 0x3c
00494B09  50                        PUSH EAX
00494B0A  E8 5C CD F6 FF            CALL 0x0040186b
00494B0F  85 C0                     TEST EAX,EAX
00494B11  BB 01 00 00 00            MOV EBX,0x1
00494B16  BF 14 00 00 00            MOV EDI,0x14
00494B1B  0F 8F A1 00 00 00         JG 0x00494bc2
00494B21  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00494B24  68 91 00 00 00            PUSH 0x91
00494B29  51                        PUSH ECX
00494B2A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00494B30  E8 36 CD F6 FF            CALL 0x0040186b
00494B35  85 C0                     TEST EAX,EAX
00494B37  0F 8F 85 00 00 00         JG 0x00494bc2
00494B3D  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00494B40  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00494B46  6A 4C                     PUSH 0x4c
00494B48  52                        PUSH EDX
00494B49  E8 1D CD F6 FF            CALL 0x0040186b
00494B4E  85 C0                     TEST EAX,EAX
00494B50  7F 70                     JG 0x00494bc2
00494B52  39 9E 92 07 00 00         CMP dword ptr [ESI + 0x792],EBX
00494B58  0F 85 C4 00 00 00         JNZ 0x00494c22
00494B5E  8B 8E 5D 04 00 00         MOV ECX,dword ptr [ESI + 0x45d]
00494B64  33 C0                     XOR EAX,EAX
00494B66  3B CF                     CMP ECX,EDI
00494B68  89 86 92 07 00 00         MOV dword ptr [ESI + 0x792],EAX
00494B6E  75 0D                     JNZ 0x00494b7d
00494B70  83 BE C0 05 00 00 03      CMP dword ptr [ESI + 0x5c0],0x3
00494B77  0F 84 A5 00 00 00         JZ 0x00494c22
LAB_00494b7d:
00494B7D  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494B83  0F 85 99 00 00 00         JNZ 0x00494c22
00494B89  89 86 8A 07 00 00         MOV dword ptr [ESI + 0x78a],EAX
00494B8F  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494B95  3B C8                     CMP ECX,EAX
00494B97  0F 84 85 00 00 00         JZ 0x00494c22
00494B9D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494BA0  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494BA6  50                        PUSH EAX
00494BA7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494BAA  52                        PUSH EDX
00494BAB  50                        PUSH EAX
00494BAC  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494BB0  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494BB4  52                        PUSH EDX
00494BB5  50                        PUSH EAX
00494BB6  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494BBA  52                        PUSH EDX
00494BBB  E8 E3 C6 F6 FF            CALL 0x004012a3
00494BC0  EB 60                     JMP 0x00494c22
LAB_00494bc2:
00494BC2  8B 86 92 07 00 00         MOV EAX,dword ptr [ESI + 0x792]
00494BC8  85 C0                     TEST EAX,EAX
00494BCA  75 56                     JNZ 0x00494c22
00494BCC  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
00494BD2  89 9E 92 07 00 00         MOV dword ptr [ESI + 0x792],EBX
00494BD8  3B C7                     CMP EAX,EDI
00494BDA  75 09                     JNZ 0x00494be5
00494BDC  83 BE C0 05 00 00 03      CMP dword ptr [ESI + 0x5c0],0x3
00494BE3  74 3D                     JZ 0x00494c22
LAB_00494be5:
00494BE5  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494BEB  75 35                     JNZ 0x00494c22
00494BED  89 9E 8A 07 00 00         MOV dword ptr [ESI + 0x78a],EBX
00494BF3  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494BF9  85 C9                     TEST ECX,ECX
00494BFB  74 25                     JZ 0x00494c22
00494BFD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494C00  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494C06  6A FF                     PUSH -0x1
00494C08  50                        PUSH EAX
00494C09  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494C0C  52                        PUSH EDX
00494C0D  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494C11  50                        PUSH EAX
00494C12  52                        PUSH EDX
00494C13  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494C17  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494C1B  50                        PUSH EAX
00494C1C  52                        PUSH EDX
00494C1D  E8 3C D4 F6 FF            CALL 0x0040205e
LAB_00494c22:
00494C22  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494C25  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00494C2B  68 9A 00 00 00            PUSH 0x9a
00494C30  50                        PUSH EAX
00494C31  E8 35 CC F6 FF            CALL 0x0040186b
00494C36  85 C0                     TEST EAX,EAX
00494C38  0F 8F A0 00 00 00         JG 0x00494cde
00494C3E  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00494C41  6A 41                     PUSH 0x41
00494C43  51                        PUSH ECX
00494C44  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00494C4A  E8 1C CC F6 FF            CALL 0x0040186b
00494C4F  85 C0                     TEST EAX,EAX
00494C51  0F 8F 87 00 00 00         JG 0x00494cde
00494C57  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00494C5A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00494C60  6A 4B                     PUSH 0x4b
00494C62  52                        PUSH EDX
00494C63  E8 03 CC F6 FF            CALL 0x0040186b
00494C68  85 C0                     TEST EAX,EAX
00494C6A  7F 72                     JG 0x00494cde
00494C6C  39 9E 96 07 00 00         CMP dword ptr [ESI + 0x796],EBX
00494C72  0F 85 C6 00 00 00         JNZ 0x00494d3e
00494C78  8B 8E 5D 04 00 00         MOV ECX,dword ptr [ESI + 0x45d]
00494C7E  33 C0                     XOR EAX,EAX
00494C80  3B CF                     CMP ECX,EDI
00494C82  89 86 96 07 00 00         MOV dword ptr [ESI + 0x796],EAX
00494C88  75 0D                     JNZ 0x00494c97
00494C8A  83 BE C0 05 00 00 03      CMP dword ptr [ESI + 0x5c0],0x3
00494C91  0F 84 A7 00 00 00         JZ 0x00494d3e
LAB_00494c97:
00494C97  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494C9D  0F 85 9B 00 00 00         JNZ 0x00494d3e
00494CA3  89 86 8E 07 00 00         MOV dword ptr [ESI + 0x78e],EAX
00494CA9  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494CAF  3B C8                     CMP ECX,EAX
00494CB1  0F 84 87 00 00 00         JZ 0x00494d3e
00494CB7  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494CBA  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494CC0  50                        PUSH EAX
00494CC1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494CC4  52                        PUSH EDX
00494CC5  50                        PUSH EAX
00494CC6  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494CCA  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494CCE  52                        PUSH EDX
00494CCF  50                        PUSH EAX
00494CD0  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494CD4  52                        PUSH EDX
00494CD5  E8 AC 0F F7 FF            CALL 0x00405c86
00494CDA  5F                        POP EDI
00494CDB  5E                        POP ESI
00494CDC  5B                        POP EBX
00494CDD  C3                        RET
LAB_00494cde:
00494CDE  8B 86 96 07 00 00         MOV EAX,dword ptr [ESI + 0x796]
00494CE4  85 C0                     TEST EAX,EAX
00494CE6  75 56                     JNZ 0x00494d3e
00494CE8  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
00494CEE  89 9E 96 07 00 00         MOV dword ptr [ESI + 0x796],EBX
00494CF4  3B C7                     CMP EAX,EDI
00494CF6  75 09                     JNZ 0x00494d01
00494CF8  83 BE C0 05 00 00 03      CMP dword ptr [ESI + 0x5c0],0x3
00494CFF  74 3D                     JZ 0x00494d3e
LAB_00494d01:
00494D01  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494D07  75 35                     JNZ 0x00494d3e
00494D09  89 9E 8E 07 00 00         MOV dword ptr [ESI + 0x78e],EBX
00494D0F  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494D15  85 C9                     TEST ECX,ECX
00494D17  74 25                     JZ 0x00494d3e
00494D19  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494D1C  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494D22  6A FF                     PUSH -0x1
00494D24  50                        PUSH EAX
00494D25  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494D28  52                        PUSH EDX
00494D29  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494D2D  50                        PUSH EAX
00494D2E  52                        PUSH EDX
00494D2F  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494D33  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494D37  50                        PUSH EAX
00494D38  52                        PUSH EDX
00494D39  E8 0A CB F6 FF            CALL 0x00401848
LAB_00494d3e:
00494D3E  5F                        POP EDI
00494D3F  5E                        POP ESI
00494D40  5B                        POP EBX
00494D41  C3                        RET
