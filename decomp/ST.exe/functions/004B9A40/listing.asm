FUN_004b9a40:
004B9A40  56                        PUSH ESI
004B9A41  8B F1                     MOV ESI,ECX
004B9A43  E8 04 AC F4 FF            CALL 0x0040464c
004B9A48  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B9A4E  B9 02 00 00 00            MOV ECX,0x2
004B9A53  83 F8 4D                  CMP EAX,0x4d
004B9A56  75 08                     JNZ 0x004b9a60
004B9A58  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004B9A5E  75 31                     JNZ 0x004b9a91
LAB_004b9a60:
004B9A60  83 F8 4C                  CMP EAX,0x4c
004B9A63  75 08                     JNZ 0x004b9a6d
004B9A65  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004B9A6B  75 24                     JNZ 0x004b9a91
LAB_004b9a6d:
004B9A6D  83 F8 43                  CMP EAX,0x43
004B9A70  75 08                     JNZ 0x004b9a7a
004B9A72  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004B9A78  75 17                     JNZ 0x004b9a91
LAB_004b9a7a:
004B9A7A  8B 06                     MOV EAX,dword ptr [ESI]
004B9A7C  8B CE                     MOV ECX,ESI
004B9A7E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B9A81  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004B9A84  50                        PUSH EAX
004B9A85  51                        PUSH ECX
004B9A86  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B9A8C  E8 7D 94 F4 FF            CALL 0x00402f0e
LAB_004b9a91:
004B9A91  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B9A97  83 F8 34                  CMP EAX,0x34
004B9A9A  0F 84 AE 00 00 00         JZ 0x004b9b4e
004B9AA0  83 F8 5B                  CMP EAX,0x5b
004B9AA3  0F 84 A5 00 00 00         JZ 0x004b9b4e
004B9AA9  83 F8 48                  CMP EAX,0x48
004B9AAC  75 0B                     JNZ 0x004b9ab9
004B9AAE  8B CE                     MOV ECX,ESI
004B9AB0  E8 5D B3 F4 FF            CALL 0x00404e12
004B9AB5  33 C0                     XOR EAX,EAX
004B9AB7  5E                        POP ESI
004B9AB8  C3                        RET
LAB_004b9ab9:
004B9AB9  83 F8 64                  CMP EAX,0x64
004B9ABC  75 0B                     JNZ 0x004b9ac9
004B9ABE  8B CE                     MOV ECX,ESI
004B9AC0  E8 1D 98 F4 FF            CALL 0x004032e2
004B9AC5  33 C0                     XOR EAX,EAX
004B9AC7  5E                        POP ESI
004B9AC8  C3                        RET
LAB_004b9ac9:
004B9AC9  83 F8 62                  CMP EAX,0x62
004B9ACC  75 0B                     JNZ 0x004b9ad9
004B9ACE  8B CE                     MOV ECX,ESI
004B9AD0  E8 33 9F F4 FF            CALL 0x00403a08
004B9AD5  33 C0                     XOR EAX,EAX
004B9AD7  5E                        POP ESI
004B9AD8  C3                        RET
LAB_004b9ad9:
004B9AD9  83 F8 6E                  CMP EAX,0x6e
004B9ADC  75 0B                     JNZ 0x004b9ae9
004B9ADE  8B CE                     MOV ECX,ESI
004B9AE0  E8 80 A1 F4 FF            CALL 0x00403c65
004B9AE5  33 C0                     XOR EAX,EAX
004B9AE7  5E                        POP ESI
004B9AE8  C3                        RET
LAB_004b9ae9:
004B9AE9  83 F8 4D                  CMP EAX,0x4d
004B9AEC  75 0B                     JNZ 0x004b9af9
004B9AEE  8B CE                     MOV ECX,ESI
004B9AF0  E8 6A 9D F4 FF            CALL 0x0040385f
004B9AF5  33 C0                     XOR EAX,EAX
004B9AF7  5E                        POP ESI
004B9AF8  C3                        RET
LAB_004b9af9:
004B9AF9  83 F8 43                  CMP EAX,0x43
004B9AFC  75 0B                     JNZ 0x004b9b09
004B9AFE  8B CE                     MOV ECX,ESI
004B9B00  E8 0C C3 F4 FF            CALL 0x00405e11
004B9B05  33 C0                     XOR EAX,EAX
004B9B07  5E                        POP ESI
004B9B08  C3                        RET
LAB_004b9b09:
004B9B09  83 F8 73                  CMP EAX,0x73
004B9B0C  75 0B                     JNZ 0x004b9b19
004B9B0E  8B CE                     MOV ECX,ESI
004B9B10  E8 7C C0 F4 FF            CALL 0x00405b91
004B9B15  33 C0                     XOR EAX,EAX
004B9B17  5E                        POP ESI
004B9B18  C3                        RET
LAB_004b9b19:
004B9B19  83 F8 3A                  CMP EAX,0x3a
004B9B1C  75 0B                     JNZ 0x004b9b29
004B9B1E  8B CE                     MOV ECX,ESI
004B9B20  E8 D2 8C F4 FF            CALL 0x004027f7
004B9B25  33 C0                     XOR EAX,EAX
004B9B27  5E                        POP ESI
004B9B28  C3                        RET
LAB_004b9b29:
004B9B29  83 F8 65                  CMP EAX,0x65
004B9B2C  75 0B                     JNZ 0x004b9b39
004B9B2E  8B CE                     MOV ECX,ESI
004B9B30  E8 8D 8A F4 FF            CALL 0x004025c2
004B9B35  33 C0                     XOR EAX,EAX
004B9B37  5E                        POP ESI
004B9B38  C3                        RET
LAB_004b9b39:
004B9B39  83 F8 3B                  CMP EAX,0x3b
004B9B3C  74 05                     JZ 0x004b9b43
004B9B3E  83 F8 60                  CMP EAX,0x60
004B9B41  75 12                     JNZ 0x004b9b55
LAB_004b9b43:
004B9B43  8B CE                     MOV ECX,ESI
004B9B45  E8 D3 AC F4 FF            CALL 0x0040481d
004B9B4A  33 C0                     XOR EAX,EAX
004B9B4C  5E                        POP ESI
004B9B4D  C3                        RET
LAB_004b9b4e:
004B9B4E  8B CE                     MOV ECX,ESI
004B9B50  E8 E5 94 F4 FF            CALL 0x0040303a
LAB_004b9b55:
004B9B55  33 C0                     XOR EAX,EAX
004B9B57  5E                        POP ESI
004B9B58  C3                        RET
