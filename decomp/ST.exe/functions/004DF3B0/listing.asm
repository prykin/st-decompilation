FUN_004df3b0:
004DF3B0  53                        PUSH EBX
004DF3B1  56                        PUSH ESI
004DF3B2  8B F1                     MOV ESI,ECX
004DF3B4  33 DB                     XOR EBX,EBX
004DF3B6  57                        PUSH EDI
004DF3B7  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DF3BD  2B C3                     SUB EAX,EBX
004DF3BF  0F 84 41 02 00 00         JZ 0x004df606
004DF3C5  48                        DEC EAX
004DF3C6  0F 84 32 01 00 00         JZ 0x004df4fe
004DF3CC  48                        DEC EAX
004DF3CD  0F 85 65 02 00 00         JNZ 0x004df638
004DF3D3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004DF3D6  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004DF3D9  50                        PUSH EAX
004DF3DA  51                        PUSH ECX
004DF3DB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF3E1  BF 0F 00 00 00            MOV EDI,0xf
004DF3E6  E8 AD 38 F2 FF            CALL 0x00402c98
004DF3EB  85 C0                     TEST EAX,EAX
004DF3ED  75 05                     JNZ 0x004df3f4
004DF3EF  BF 3C 00 00 00            MOV EDI,0x3c
LAB_004df3f4:
004DF3F4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DF3F9  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004DF3FF  03 D7                     ADD EDX,EDI
004DF401  39 90 E4 00 00 00         CMP dword ptr [EAX + 0xe4],EDX
004DF407  72 77                     JC 0x004df480
004DF409  8B 96 D8 04 00 00         MOV EDX,dword ptr [ESI + 0x4d8]
004DF40F  83 C2 64                  ADD EDX,0x64
004DF412  8B C2                     MOV EAX,EDX
004DF414  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004DF41A  3D 10 27 00 00            CMP EAX,0x2710
004DF41F  7C 4D                     JL 0x004df46e
004DF421  53                        PUSH EBX
004DF422  8B CE                     MOV ECX,ESI
004DF424  C7 86 D8 04 00 00 10 27 00 00  MOV dword ptr [ESI + 0x4d8],0x2710
004DF42E  89 9E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EBX
004DF434  E8 BE 38 F2 FF            CALL 0x00402cf7
004DF439  8B 16                     MOV EDX,dword ptr [ESI]
004DF43B  8B CE                     MOV ECX,ESI
004DF43D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DF440  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF446  50                        PUSH EAX
004DF447  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DF44A  50                        PUSH EAX
004DF44B  E8 BE 3A F2 FF            CALL 0x00402f0e
004DF450  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DF453  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF456  33 D2                     XOR EDX,EDX
004DF458  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DF45E  3B C2                     CMP EAX,EDX
004DF460  75 0C                     JNZ 0x004df46e
004DF462  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF468  50                        PUSH EAX
004DF469  E8 1F 57 F2 FF            CALL 0x00404b8d
LAB_004df46e:
004DF46E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DF474  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DF47A  89 96 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EDX
LAB_004df480:
004DF480  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004DF486  B8 01 00 00 00            MOV EAX,0x1
004DF48B  3B C8                     CMP ECX,EAX
004DF48D  0F 85 A5 01 00 00         JNZ 0x004df638
004DF493  53                        PUSH EBX
004DF494  8B CE                     MOV ECX,ESI
004DF496  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004DF49C  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004DF4A2  E8 50 38 F2 FF            CALL 0x00402cf7
004DF4A7  8B CE                     MOV ECX,ESI
004DF4A9  E8 9C 26 F2 FF            CALL 0x00401b4a
004DF4AE  8B 06                     MOV EAX,dword ptr [ESI]
004DF4B0  68 6B 02 00 00            PUSH 0x26b
004DF4B5  6A 03                     PUSH 0x3
004DF4B7  8B CE                     MOV ECX,ESI
004DF4B9  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004DF4BF  8B 16                     MOV EDX,dword ptr [ESI]
004DF4C1  8B CE                     MOV ECX,ESI
004DF4C3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DF4C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF4CC  50                        PUSH EAX
004DF4CD  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DF4D0  50                        PUSH EAX
004DF4D1  E8 38 3A F2 FF            CALL 0x00402f0e
004DF4D6  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DF4D9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF4DC  33 D2                     XOR EDX,EDX
004DF4DE  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DF4E4  3B C2                     CMP EAX,EDX
004DF4E6  0F 85 4C 01 00 00         JNZ 0x004df638
004DF4EC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF4F2  50                        PUSH EAX
004DF4F3  E8 95 56 F2 FF            CALL 0x00404b8d
004DF4F8  5F                        POP EDI
004DF4F9  5E                        POP ESI
004DF4FA  33 C0                     XOR EAX,EAX
004DF4FC  5B                        POP EBX
004DF4FD  C3                        RET
LAB_004df4fe:
004DF4FE  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
004DF504  BF 02 00 00 00            MOV EDI,0x2
004DF509  3B C3                     CMP EAX,EBX
004DF50B  74 61                     JZ 0x004df56e
004DF50D  39 BE D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EDI
004DF513  74 59                     JZ 0x004df56e
004DF515  39 9E 08 04 00 00         CMP dword ptr [ESI + 0x408],EBX
004DF51B  75 18                     JNZ 0x004df535
004DF51D  8B CE                     MOV ECX,ESI
004DF51F  E8 26 26 F2 FF            CALL 0x00401b4a
004DF524  8B 16                     MOV EDX,dword ptr [ESI]
004DF526  68 6B 02 00 00            PUSH 0x26b
004DF52B  6A 03                     PUSH 0x3
004DF52D  8B CE                     MOV ECX,ESI
004DF52F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004df535:
004DF535  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DF53A  8B 8E DC 04 00 00         MOV ECX,dword ptr [ESI + 0x4dc]
004DF540  83 C1 07                  ADD ECX,0x7
004DF543  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004DF549  3B C1                     CMP EAX,ECX
004DF54B  0F 82 E7 00 00 00         JC 0x004df638
004DF551  8B 96 D8 04 00 00         MOV EDX,dword ptr [ESI + 0x4d8]
004DF557  8B CE                     MOV ECX,ESI
004DF559  83 EA 64                  SUB EDX,0x64
004DF55C  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004DF562  52                        PUSH EDX
004DF563  E8 3E 29 F2 FF            CALL 0x00401ea6
004DF568  5F                        POP EDI
004DF569  5E                        POP ESI
004DF56A  33 C0                     XOR EAX,EAX
004DF56C  5B                        POP EBX
004DF56D  C3                        RET
LAB_004df56e:
004DF56E  6A 0E                     PUSH 0xe
004DF570  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DF576  E8 34 4D F2 FF            CALL 0x004042af
004DF57B  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DF581  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DF587  0F 85 AB 00 00 00         JNZ 0x004df638
004DF58D  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004DF593  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DF599  53                        PUSH EBX
004DF59A  8B CE                     MOV ECX,ESI
004DF59C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004DF5A2  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004DF5A8  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004DF5AE  E8 44 37 F2 FF            CALL 0x00402cf7
004DF5B3  8B 16                     MOV EDX,dword ptr [ESI]
004DF5B5  8B CE                     MOV ECX,ESI
004DF5B7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DF5BA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF5C0  50                        PUSH EAX
004DF5C1  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DF5C4  50                        PUSH EAX
004DF5C5  E8 6F 68 F2 FF            CALL 0x00405e39
004DF5CA  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DF5CD  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF5D0  33 D2                     XOR EDX,EDX
004DF5D2  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DF5D8  3B C2                     CMP EAX,EDX
004DF5DA  75 0C                     JNZ 0x004df5e8
004DF5DC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DF5E2  50                        PUSH EAX
004DF5E3  E8 A5 55 F2 FF            CALL 0x00404b8d
LAB_004df5e8:
004DF5E8  8B CE                     MOV ECX,ESI
004DF5EA  E8 44 64 F2 FF            CALL 0x00405a33
004DF5EF  8B 16                     MOV EDX,dword ptr [ESI]
004DF5F1  68 6C 02 00 00            PUSH 0x26c
004DF5F6  6A 03                     PUSH 0x3
004DF5F8  8B CE                     MOV ECX,ESI
004DF5FA  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004DF600  5F                        POP EDI
004DF601  5E                        POP ESI
004DF602  33 C0                     XOR EAX,EAX
004DF604  5B                        POP EBX
004DF605  C3                        RET
LAB_004df606:
004DF606  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
004DF60C  B8 01 00 00 00            MOV EAX,0x1
004DF611  3B CB                     CMP ECX,EBX
004DF613  75 08                     JNZ 0x004df61d
004DF615  39 86 D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EAX
004DF61B  75 1B                     JNZ 0x004df638
LAB_004df61d:
004DF61D  53                        PUSH EBX
004DF61E  8B CE                     MOV ECX,ESI
004DF620  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004DF626  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004DF62C  E8 C6 36 F2 FF            CALL 0x00402cf7
004DF631  8B CE                     MOV ECX,ESI
004DF633  E8 12 25 F2 FF            CALL 0x00401b4a
LAB_004df638:
004DF638  5F                        POP EDI
004DF639  5E                        POP ESI
004DF63A  33 C0                     XOR EAX,EAX
004DF63C  5B                        POP EBX
004DF63D  C3                        RET
