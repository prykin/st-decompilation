FUN_00494f00:
00494F00  53                        PUSH EBX
00494F01  56                        PUSH ESI
00494F02  8B F1                     MOV ESI,ECX
00494F04  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
00494F0A  83 F8 05                  CMP EAX,0x5
00494F0D  74 0E                     JZ 0x00494f1d
00494F0F  83 F8 11                  CMP EAX,0x11
00494F12  74 09                     JZ 0x00494f1d
00494F14  83 F8 21                  CMP EAX,0x21
00494F17  0F 85 A5 00 00 00         JNZ 0x00494fc2
LAB_00494f1d:
00494F1D  8B 86 92 07 00 00         MOV EAX,dword ptr [ESI + 0x792]
00494F23  BB 01 00 00 00            MOV EBX,0x1
00494F28  3B C3                     CMP EAX,EBX
00494F2A  75 47                     JNZ 0x00494f73
00494F2C  39 9E 8A 07 00 00         CMP dword ptr [ESI + 0x78a],EBX
00494F32  75 3F                     JNZ 0x00494f73
00494F34  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494F3A  75 37                     JNZ 0x00494f73
00494F3C  C7 86 8A 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x78a],0x0
00494F46  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494F4C  85 C9                     TEST ECX,ECX
00494F4E  74 23                     JZ 0x00494f73
00494F50  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494F53  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494F59  50                        PUSH EAX
00494F5A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494F5D  52                        PUSH EDX
00494F5E  50                        PUSH EAX
00494F5F  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494F63  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494F67  52                        PUSH EDX
00494F68  50                        PUSH EAX
00494F69  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494F6D  52                        PUSH EDX
00494F6E  E8 30 C3 F6 FF            CALL 0x004012a3
LAB_00494f73:
00494F73  39 9E 96 07 00 00         CMP dword ptr [ESI + 0x796],EBX
00494F79  75 47                     JNZ 0x00494fc2
00494F7B  39 9E 8E 07 00 00         CMP dword ptr [ESI + 0x78e],EBX
00494F81  75 3F                     JNZ 0x00494fc2
00494F83  84 9E D1 01 00 00         TEST byte ptr [ESI + 0x1d1],BL
00494F89  75 37                     JNZ 0x00494fc2
00494F8B  C7 86 8E 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x78e],0x0
00494F95  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
00494F9B  85 C9                     TEST ECX,ECX
00494F9D  74 23                     JZ 0x00494fc2
00494F9F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00494FA2  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
00494FA8  50                        PUSH EAX
00494FA9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00494FAC  52                        PUSH EDX
00494FAD  50                        PUSH EAX
00494FAE  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00494FB2  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
00494FB6  52                        PUSH EDX
00494FB7  50                        PUSH EAX
00494FB8  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
00494FBC  52                        PUSH EDX
00494FBD  E8 C4 0C F7 FF            CALL 0x00405c86
LAB_00494fc2:
00494FC2  5E                        POP ESI
00494FC3  5B                        POP EBX
00494FC4  C3                        RET
