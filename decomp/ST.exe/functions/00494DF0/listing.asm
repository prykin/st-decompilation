FUN_00494df0:
00494DF0  53                        PUSH EBX
00494DF1  56                        PUSH ESI
00494DF2  8B F1                     MOV ESI,ECX
00494DF4  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00494DFA  83 F8 05                  CMP EAX,0x5
00494DFD  74 0E                     JZ 0x00494e0d
00494DFF  83 F8 11                  CMP EAX,0x11
00494E02  74 09                     JZ 0x00494e0d
00494E04  83 F8 21                  CMP EAX,0x21
00494E07  0F 85 A5 00 00 00         JNZ 0x00494eb2
LAB_00494e0d:
00494E0D  8B 86 92 07 00 00         MOV EAX,dword ptr [ESI + 0x792]
00494E13  BB 01 00 00 00            MOV EBX,0x1
00494E18  3B C3                     CMP EAX,EBX
00494E1A  75 47                     JNZ 0x00494e63
00494E1C  8B 86 8A 07 00 00         MOV EAX,dword ptr [ESI + 0x78a]
00494E22  85 C0                     TEST EAX,EAX
00494E24  75 3D                     JNZ 0x00494e63
00494E26  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494E2C  75 35                     JNZ 0x00494e63
00494E2E  89 9E 8A 07 00 00         MOV dword ptr [ESI + 0x78a],EBX
00494E34  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494E3A  85 C9                     TEST ECX,ECX
00494E3C  74 25                     JZ 0x00494e63
00494E3E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494E41  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494E47  6A FF                     PUSH -0x1
00494E49  50                        PUSH EAX
00494E4A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494E4D  52                        PUSH EDX
00494E4E  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494E52  50                        PUSH EAX
00494E53  52                        PUSH EDX
00494E54  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494E58  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494E5C  50                        PUSH EAX
00494E5D  52                        PUSH EDX
00494E5E  E8 FB D1 F6 FF            CALL 0x0040205e
LAB_00494e63:
00494E63  39 9E 96 07 00 00         CMP dword ptr [ESI + 0x796],EBX
00494E69  75 47                     JNZ 0x00494eb2
00494E6B  8B 86 8E 07 00 00         MOV EAX,dword ptr [ESI + 0x78e]
00494E71  85 C0                     TEST EAX,EAX
00494E73  75 3D                     JNZ 0x00494eb2
00494E75  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494E7B  75 35                     JNZ 0x00494eb2
00494E7D  89 9E 8E 07 00 00         MOV dword ptr [ESI + 0x78e],EBX
00494E83  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494E89  85 C9                     TEST ECX,ECX
00494E8B  74 25                     JZ 0x00494eb2
00494E8D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494E90  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494E96  6A FF                     PUSH -0x1
00494E98  50                        PUSH EAX
00494E99  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494E9C  52                        PUSH EDX
00494E9D  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494EA1  50                        PUSH EAX
00494EA2  52                        PUSH EDX
00494EA3  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494EA7  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494EAB  50                        PUSH EAX
00494EAC  52                        PUSH EDX
00494EAD  E8 96 C9 F6 FF            CALL 0x00401848
LAB_00494eb2:
00494EB2  5E                        POP ESI
00494EB3  5B                        POP EBX
00494EB4  C3                        RET
