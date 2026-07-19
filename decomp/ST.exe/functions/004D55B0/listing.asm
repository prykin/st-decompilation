TLOEmbryoTy::GetMessage:
004D55B0  55                        PUSH EBP
004D55B1  8B EC                     MOV EBP,ESP
004D55B3  81 EC BC 01 00 00         SUB ESP,0x1bc
004D55B9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004D55BE  53                        PUSH EBX
004D55BF  56                        PUSH ESI
004D55C0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004D55C3  33 DB                     XOR EBX,EBX
004D55C5  57                        PUSH EDI
004D55C6  8D 55 98                  LEA EDX,[EBP + -0x68]
004D55C9  8D 4D 94                  LEA ECX,[EBP + -0x6c]
004D55CC  53                        PUSH EBX
004D55CD  52                        PUSH EDX
004D55CE  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
004D55D1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D55D7  E8 14 82 25 00            CALL 0x0072d7f0
004D55DC  8B F0                     MOV ESI,EAX
004D55DE  83 C4 08                  ADD ESP,0x8
004D55E1  3B F3                     CMP ESI,EBX
004D55E3  0F 85 61 0A 00 00         JNZ 0x004d604a
004D55E9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004D55EC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004D55EF  57                        PUSH EDI
004D55F0  8B CE                     MOV ECX,ESI
004D55F2  E8 10 F9 F2 FF            CALL 0x00404f07
004D55F7  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004D55FA  3D 0F 01 00 00            CMP EAX,0x10f
004D55FF  0F 87 88 04 00 00         JA 0x004d5a8d
004D5605  0F 84 67 04 00 00         JZ 0x004d5a72
004D560B  BB 03 00 00 00            MOV EBX,0x3
004D5610  3B C3                     CMP EAX,EBX
004D5612  77 65                     JA 0x004d5679
004D5614  74 48                     JZ 0x004d565e
004D5616  83 E8 00                  SUB EAX,0x0
004D5619  74 28                     JZ 0x004d5643
004D561B  83 E8 02                  SUB EAX,0x2
004D561E  0F 85 12 0A 00 00         JNZ 0x004d6036
004D5624  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
004D5627  8B CE                     MOV ECX,ESI
004D5629  50                        PUSH EAX
004D562A  E8 AA 08 F3 FF            CALL 0x00405ed9
004D562F  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5632  33 C0                     XOR EAX,EAX
004D5634  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D563A  5F                        POP EDI
004D563B  5E                        POP ESI
004D563C  5B                        POP EBX
004D563D  8B E5                     MOV ESP,EBP
004D563F  5D                        POP EBP
004D5640  C2 04 00                  RET 0x4
LAB_004d5643:
004D5643  8B CE                     MOV ECX,ESI
004D5645  E8 A2 D2 F2 FF            CALL 0x004028ec
004D564A  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D564D  33 C0                     XOR EAX,EAX
004D564F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5655  5F                        POP EDI
004D5656  5E                        POP ESI
004D5657  5B                        POP EBX
004D5658  8B E5                     MOV ESP,EBP
004D565A  5D                        POP EBP
004D565B  C2 04 00                  RET 0x4
LAB_004d565e:
004D565E  8B CE                     MOV ECX,ESI
004D5660  E8 21 F7 F2 FF            CALL 0x00404d86
004D5665  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5668  33 C0                     XOR EAX,EAX
004D566A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5670  5F                        POP EDI
004D5671  5E                        POP ESI
004D5672  5B                        POP EBX
004D5673  8B E5                     MOV ESP,EBP
004D5675  5D                        POP EBP
004D5676  C2 04 00                  RET 0x4
LAB_004d5679:
004D5679  3D 08 01 00 00            CMP EAX,0x108
004D567E  0F 85 B2 09 00 00         JNZ 0x004d6036
004D5684  33 FF                     XOR EDI,EDI
004D5686  33 DB                     XOR EBX,EBX
LAB_004d5688:
004D5688  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004D568E  8B 54 19 1C               MOV EDX,dword ptr [ECX + EBX*0x1 + 0x1c]
004D5692  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
004D5695  89 94 BD 88 FE FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffe88],EDX
004D569C  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
004D569F  89 8C BD 10 FF FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xffffff10],ECX
004D56A6  8B 08                     MOV ECX,dword ptr [EAX]
004D56A8  85 C9                     TEST ECX,ECX
004D56AA  74 33                     JZ 0x004d56df
004D56AC  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D56B2  57                        PUSH EDI
004D56B3  E8 F7 EB F2 FF            CALL 0x004042af
004D56B8  57                        PUSH EDI
004D56B9  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D56BF  89 84 BD CC FE FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffecc],EAX
004D56C6  E8 E4 EB F2 FF            CALL 0x004042af
004D56CB  50                        PUSH EAX
004D56CC  57                        PUSH EDI
004D56CD  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D56D3  E8 51 03 F3 FF            CALL 0x00405a29
004D56D8  89 84 BD 44 FE FF FF      MOV dword ptr [EBP + EDI*0x4 + 0xfffffe44],EAX
LAB_004d56df:
004D56DF  83 C3 24                  ADD EBX,0x24
004D56E2  47                        INC EDI
004D56E3  81 FB 64 02 00 00         CMP EBX,0x264
004D56E9  7C 9D                     JL 0x004d5688
004D56EB  8B 86 EC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ec]
004D56F1  85 C0                     TEST EAX,EAX
004D56F3  75 47                     JNZ 0x004d573c
004D56F5  6A 01                     PUSH 0x1
004D56F7  8B CE                     MOV ECX,ESI
004D56F9  E8 63 E9 F2 FF            CALL 0x00404061
004D56FE  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D5704  8A 8E F0 02 00 00         MOV CL,byte ptr [ESI + 0x2f0]
004D570A  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D5710  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D5716  50                        PUSH EAX
004D5717  51                        PUSH ECX
004D5718  8B CF                     MOV ECX,EDI
004D571A  E8 21 FB F2 FF            CALL 0x00405240
004D571F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D5725  8A 8E F0 02 00 00         MOV CL,byte ptr [ESI + 0x2f0]
004D572B  FE C9                     DEC CL
004D572D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D5733  50                        PUSH EAX
004D5734  51                        PUSH ECX
004D5735  8B CF                     MOV ECX,EDI
004D5737  E8 04 FB F2 FF            CALL 0x00405240
LAB_004d573c:
004D573C  8B 86 DC 02 00 00         MOV EAX,dword ptr [ESI + 0x2dc]
004D5742  85 C0                     TEST EAX,EAX
004D5744  0F 85 03 01 00 00         JNZ 0x004d584d
004D574A  8B 8E F1 01 00 00         MOV ECX,dword ptr [ESI + 0x1f1]
004D5750  F6 C5 40                  TEST CH,0x40
004D5753  0F 84 EC 00 00 00         JZ 0x004d5845
004D5759  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004D575F  E8 B8 00 F3 FF            CALL 0x0040581c
004D5764  25 01 00 00 80            AND EAX,0x80000001
004D5769  79 05                     JNS 0x004d5770
004D576B  48                        DEC EAX
004D576C  83 C8 FE                  OR EAX,0xfffffffe
004D576F  40                        INC EAX
LAB_004d5770:
004D5770  8B 96 6C 03 00 00         MOV EDX,dword ptr [ESI + 0x36c]
004D5776  50                        PUSH EAX
004D5777  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
004D577D  8B 04 95 E8 F3 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7bf3e8]
004D5784  50                        PUSH EAX
004D5785  68 08 C9 7A 00            PUSH 0x7ac908
004D578A  51                        PUSH ECX
004D578B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004D5791  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D5796  83 C4 10                  ADD ESP,0x10
004D5799  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
004D579F  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D57A5  6A 1D                     PUSH 0x1d
004D57A7  52                        PUSH EDX
004D57A8  50                        PUSH EAX
004D57A9  6A 0E                     PUSH 0xe
004D57AB  8B CF                     MOV ECX,EDI
004D57AD  E8 D1 E9 F2 FF            CALL 0x00404183
004D57B2  85 C0                     TEST EAX,EAX
004D57B4  74 17                     JZ 0x004d57cd
004D57B6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D57BC  68 3A 04 00 00            PUSH 0x43a
004D57C1  68 BC F4 7B 00            PUSH 0x7bf4bc
004D57C6  51                        PUSH ECX
004D57C7  50                        PUSH EAX
004D57C8  E8 73 06 1D 00            CALL 0x006a5e40
LAB_004d57cd:
004D57CD  8B 96 68 03 00 00         MOV EDX,dword ptr [ESI + 0x368]
004D57D3  6A 00                     PUSH 0x0
004D57D5  8B CF                     MOV ECX,EDI
004D57D7  8B 04 95 4C 10 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x79104c]
004D57DE  50                        PUSH EAX
004D57DF  50                        PUSH EAX
004D57E0  6A 0E                     PUSH 0xe
004D57E2  E8 D3 C6 F2 FF            CALL 0x00401eba
004D57E7  8B 86 68 03 00 00         MOV EAX,dword ptr [ESI + 0x368]
004D57ED  8B 0C 85 4C 10 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x79104c]
004D57F4  51                        PUSH ECX
004D57F5  6A 0E                     PUSH 0xe
004D57F7  8B CF                     MOV ECX,EDI
004D57F9  E8 66 B8 F2 FF            CALL 0x00401064
004D57FE  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D5804  8B CF                     MOV ECX,EDI
004D5806  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D580C  50                        PUSH EAX
004D580D  6A 0E                     PUSH 0xe
004D580F  E8 2C FA F2 FF            CALL 0x00405240
004D5814  8B 8E 6C 03 00 00         MOV ECX,dword ptr [ESI + 0x36c]
004D581A  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D581F  6A 1D                     PUSH 0x1d
004D5821  8B 14 8D B4 B1 7B 00      MOV EDX,dword ptr [ECX*0x4 + 0x7bb1b4]
004D5828  8B CF                     MOV ECX,EDI
004D582A  52                        PUSH EDX
004D582B  50                        PUSH EAX
004D582C  6A 10                     PUSH 0x10
004D582E  E8 50 E9 F2 FF            CALL 0x00404183
004D5833  85 C0                     TEST EAX,EAX
004D5835  0F 84 5C 01 00 00         JZ 0x004d5997
004D583B  68 41 04 00 00            PUSH 0x441
004D5840  E9 40 01 00 00            JMP 0x004d5985
LAB_004d5845:
004D5845  85 C0                     TEST EAX,EAX
004D5847  0F 84 9A 01 00 00         JZ 0x004d59e7
LAB_004d584d:
004D584D  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004D5853  E8 C4 FF F2 FF            CALL 0x0040581c
004D5858  8B 8E 68 03 00 00         MOV ECX,dword ptr [ESI + 0x368]
004D585E  8B 96 6C 03 00 00         MOV EDX,dword ptr [ESI + 0x36c]
004D5864  6A 00                     PUSH 0x0
004D5866  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D586C  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004D586F  03 CA                     ADD ECX,EDX
004D5871  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
004D5874  A1 70 51 7B 00            MOV EAX,[0x007b5170]
004D5879  8B CF                     MOV ECX,EDI
004D587B  8B 1C D0                  MOV EBX,dword ptr [EAX + EDX*0x8]
004D587E  53                        PUSH EBX
004D587F  53                        PUSH EBX
004D5880  6A 0E                     PUSH 0xe
004D5882  E8 33 C6 F2 FF            CALL 0x00401eba
004D5887  53                        PUSH EBX
004D5888  6A 0E                     PUSH 0xe
004D588A  8B CF                     MOV ECX,EDI
004D588C  E8 D3 B7 F2 FF            CALL 0x00401064
004D5891  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D5897  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D589D  8B CF                     MOV ECX,EDI
004D589F  52                        PUSH EDX
004D58A0  6A 0E                     PUSH 0xe
004D58A2  E8 99 F9 F2 FF            CALL 0x00405240
004D58A7  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004D58AD  8B 88 D4 01 00 00         MOV ECX,dword ptr [EAX + 0x1d4]
004D58B3  39 19                     CMP dword ptr [ECX],EBX
004D58B5  7D 02                     JGE 0x004d58b9
004D58B7  33 DB                     XOR EBX,EBX
LAB_004d58b9:
004D58B9  6A 00                     PUSH 0x0
004D58BB  53                        PUSH EBX
004D58BC  53                        PUSH EBX
004D58BD  6A 0D                     PUSH 0xd
004D58BF  8B CF                     MOV ECX,EDI
004D58C1  E8 F4 C5 F2 FF            CALL 0x00401eba
004D58C6  53                        PUSH EBX
004D58C7  6A 0D                     PUSH 0xd
004D58C9  8B CF                     MOV ECX,EDI
004D58CB  E8 94 B7 F2 FF            CALL 0x00401064
004D58D0  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D58D6  8B CF                     MOV ECX,EDI
004D58D8  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D58DE  50                        PUSH EAX
004D58DF  6A 0D                     PUSH 0xd
004D58E1  E8 5A F9 F2 FF            CALL 0x00405240
004D58E6  8B 86 68 03 00 00         MOV EAX,dword ptr [ESI + 0x368]
004D58EC  8B 8E 6C 03 00 00         MOV ECX,dword ptr [ESI + 0x36c]
004D58F2  8B 15 98 B1 7B 00         MOV EDX,dword ptr [0x007bb198]
004D58F8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D58FB  03 C1                     ADD EAX,ECX
004D58FD  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004D5900  8B 44 8A 08               MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
004D5904  85 C0                     TEST EAX,EAX
004D5906  74 54                     JZ 0x004d595c
004D5908  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004D590E  E8 09 FF F2 FF            CALL 0x0040581c
004D5913  8B 8E 68 03 00 00         MOV ECX,dword ptr [ESI + 0x368]
004D5919  8B 96 6C 03 00 00         MOV EDX,dword ptr [ESI + 0x36c]
004D591F  6A 00                     PUSH 0x0
004D5921  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004D5924  03 CA                     ADD ECX,EDX
004D5926  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
004D5929  A1 10 83 7B 00            MOV EAX,[0x007b8310]
004D592E  8B CF                     MOV ECX,EDI
004D5930  8B 1C D0                  MOV EBX,dword ptr [EAX + EDX*0x8]
004D5933  53                        PUSH EBX
004D5934  53                        PUSH EBX
004D5935  6A 0C                     PUSH 0xc
004D5937  E8 7E C5 F2 FF            CALL 0x00401eba
004D593C  53                        PUSH EBX
004D593D  6A 0C                     PUSH 0xc
004D593F  8B CF                     MOV ECX,EDI
004D5941  E8 1E B7 F2 FF            CALL 0x00401064
004D5946  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D594C  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D5952  8B CF                     MOV ECX,EDI
004D5954  52                        PUSH EDX
004D5955  6A 0C                     PUSH 0xc
004D5957  E8 E4 F8 F2 FF            CALL 0x00405240
LAB_004d595c:
004D595C  8B 86 6C 03 00 00         MOV EAX,dword ptr [ESI + 0x36c]
004D5962  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D5968  6A 1D                     PUSH 0x1d
004D596A  8B 0C 85 B4 B1 7B 00      MOV ECX,dword ptr [EAX*0x4 + 0x7bb1b4]
004D5971  51                        PUSH ECX
004D5972  52                        PUSH EDX
004D5973  6A 10                     PUSH 0x10
004D5975  8B CF                     MOV ECX,EDI
004D5977  E8 07 E8 F2 FF            CALL 0x00404183
004D597C  85 C0                     TEST EAX,EAX
004D597E  74 17                     JZ 0x004d5997
004D5980  68 59 04 00 00            PUSH 0x459
LAB_004d5985:
004D5985  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D598B  68 BC F4 7B 00            PUSH 0x7bf4bc
004D5990  51                        PUSH ECX
004D5991  50                        PUSH EAX
004D5992  E8 A9 04 1D 00            CALL 0x006a5e40
LAB_004d5997:
004D5997  8B 96 68 03 00 00         MOV EDX,dword ptr [ESI + 0x368]
004D599D  6A 00                     PUSH 0x0
004D599F  8B CF                     MOV ECX,EDI
004D59A1  8B 04 95 4C 10 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x79104c]
004D59A8  50                        PUSH EAX
004D59A9  50                        PUSH EAX
004D59AA  6A 10                     PUSH 0x10
004D59AC  E8 09 C5 F2 FF            CALL 0x00401eba
004D59B1  8B 86 68 03 00 00         MOV EAX,dword ptr [ESI + 0x368]
004D59B7  8B 0C 85 4C 10 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x79104c]
004D59BE  51                        PUSH ECX
004D59BF  6A 10                     PUSH 0x10
004D59C1  8B CF                     MOV ECX,EDI
004D59C3  E8 9C B6 F2 FF            CALL 0x00401064
004D59C8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D59CE  8B CF                     MOV ECX,EDI
004D59D0  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D59D6  50                        PUSH EAX
004D59D7  6A 10                     PUSH 0x10
004D59D9  E8 62 F8 F2 FF            CALL 0x00405240
004D59DE  6A 10                     PUSH 0x10
004D59E0  8B CF                     MOV ECX,EDI
004D59E2  E8 16 E1 F2 FF            CALL 0x00403afd
LAB_004d59e7:
004D59E7  33 FF                     XOR EDI,EDI
004D59E9  33 DB                     XOR EBX,EBX
LAB_004d59eb:
004D59EB  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004D59F1  8B 94 BD 88 FE FF FF      MOV EDX,dword ptr [EBP + EDI*0x4 + 0xfffffe88]
004D59F8  89 54 0B 1C               MOV dword ptr [EBX + ECX*0x1 + 0x1c],EDX
004D59FC  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004D5A02  8B 8C BD 10 FF FF FF      MOV ECX,dword ptr [EBP + EDI*0x4 + 0xffffff10]
004D5A09  89 4C 03 20               MOV dword ptr [EBX + EAX*0x1 + 0x20],ECX
004D5A0D  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004D5A13  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
004D5A16  8B 14 13                  MOV EDX,dword ptr [EBX + EDX*0x1]
004D5A19  85 D2                     TEST EDX,EDX
004D5A1B  74 35                     JZ 0x004d5a52
004D5A1D  8B 84 BD CC FE FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffffecc]
004D5A24  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004D5A27  C1 E0 02                  SHL EAX,0x2
004D5A2A  8B 54 10 31               MOV EDX,dword ptr [EAX + EDX*0x1 + 0x31]
004D5A2E  89 14 01                  MOV dword ptr [ECX + EAX*0x1],EDX
004D5A31  8B 84 BD 44 FE FF FF      MOV EAX,dword ptr [EBP + EDI*0x4 + 0xfffffe44]
004D5A38  50                        PUSH EAX
004D5A39  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D5A3F  57                        PUSH EDI
004D5A40  E8 6A E8 F2 FF            CALL 0x004042af
004D5A45  50                        PUSH EAX
004D5A46  57                        PUSH EDI
004D5A47  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D5A4D  E8 EF F6 F2 FF            CALL 0x00405141
LAB_004d5a52:
004D5A52  83 C3 24                  ADD EBX,0x24
004D5A55  47                        INC EDI
004D5A56  81 FB 64 02 00 00         CMP EBX,0x264
004D5A5C  7C 8D                     JL 0x004d59eb
004D5A5E  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5A61  33 C0                     XOR EAX,EAX
004D5A63  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5A69  5F                        POP EDI
004D5A6A  5E                        POP ESI
004D5A6B  5B                        POP EBX
004D5A6C  8B E5                     MOV ESP,EBP
004D5A6E  5D                        POP EBP
004D5A6F  C2 04 00                  RET 0x4
LAB_004d5a72:
004D5A72  8B CE                     MOV ECX,ESI
004D5A74  E8 B1 DB F2 FF            CALL 0x0040362a
004D5A79  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5A7C  33 C0                     XOR EAX,EAX
004D5A7E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5A84  5F                        POP EDI
004D5A85  5E                        POP ESI
004D5A86  5B                        POP EBX
004D5A87  8B E5                     MOV ESP,EBP
004D5A89  5D                        POP EBP
004D5A8A  C2 04 00                  RET 0x4
LAB_004d5a8d:
004D5A8D  3D 28 01 00 00            CMP EAX,0x128
004D5A92  0F 87 2F 03 00 00         JA 0x004d5dc7
004D5A98  0F 84 BB 02 00 00         JZ 0x004d5d59
004D5A9E  2D 10 01 00 00            SUB EAX,0x110
004D5AA3  74 5A                     JZ 0x004d5aff
004D5AA5  83 E8 12                  SUB EAX,0x12
004D5AA8  0F 85 88 05 00 00         JNZ 0x004d6036
004D5AAE  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
004D5AB1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D5AB4  8B 0F                     MOV ECX,dword ptr [EDI]
004D5AB6  3B C8                     CMP ECX,EAX
004D5AB8  0F 85 78 05 00 00         JNZ 0x004d6036
004D5ABE  C7 86 38 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x338],0x1
004D5AC8  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
004D5ACB  89 96 3C 03 00 00         MOV dword ptr [ESI + 0x33c],EDX
004D5AD1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D5AD6  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D5ADC  33 C0                     XOR EAX,EAX
004D5ADE  89 8E 40 03 00 00         MOV dword ptr [ESI + 0x340],ECX
004D5AE4  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
004D5AE7  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5AEA  89 96 44 03 00 00         MOV dword ptr [ESI + 0x344],EDX
004D5AF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5AF6  5F                        POP EDI
004D5AF7  5E                        POP ESI
004D5AF8  5B                        POP EBX
004D5AF9  8B E5                     MOV ESP,EBP
004D5AFB  5D                        POP EBP
004D5AFC  C2 04 00                  RET 0x4
LAB_004d5aff:
004D5AFF  83 BE EC 02 00 00 03      CMP dword ptr [ESI + 0x2ec],0x3
004D5B06  0F 84 2A 05 00 00         JZ 0x004d6036
004D5B0C  39 9E DC 02 00 00         CMP dword ptr [ESI + 0x2dc],EBX
004D5B12  0F 85 1E 05 00 00         JNZ 0x004d6036
004D5B18  8B 8E 68 03 00 00         MOV ECX,dword ptr [ESI + 0x368]
004D5B1E  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
004D5B21  8B BE 6C 03 00 00         MOV EDI,dword ptr [ESI + 0x36c]
004D5B27  8B 96 A8 02 00 00         MOV EDX,dword ptr [ESI + 0x2a8]
004D5B2D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004D5B30  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D5B33  03 CF                     ADD ECX,EDI
004D5B35  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D5B3A  C1 E1 02                  SHL ECX,0x2
004D5B3D  8B 99 7C 41 7E 00         MOV EBX,dword ptr [ECX + 0x7e417c]
004D5B43  0F AF D3                  IMUL EDX,EBX
004D5B46  F7 EA                     IMUL EDX
004D5B48  C1 FA 05                  SAR EDX,0x5
004D5B4B  8B C2                     MOV EAX,EDX
004D5B4D  C1 E8 1F                  SHR EAX,0x1f
004D5B50  03 D0                     ADD EDX,EAX
004D5B52  8B FA                     MOV EDI,EDX
004D5B54  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D5B57  8B 02                     MOV EAX,dword ptr [EDX]
004D5B59  8B 96 38 03 00 00         MOV EDX,dword ptr [ESI + 0x338]
004D5B5F  85 D2                     TEST EDX,EDX
004D5B61  74 1C                     JZ 0x004d5b7f
004D5B63  8B 96 3C 03 00 00         MOV EDX,dword ptr [ESI + 0x33c]
004D5B69  0F AF D0                  IMUL EDX,EAX
004D5B6C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D5B71  F7 EA                     IMUL EDX
004D5B73  C1 FA 05                  SAR EDX,0x5
004D5B76  8B C2                     MOV EAX,EDX
004D5B78  C1 E8 1F                  SHR EAX,0x1f
004D5B7B  03 D0                     ADD EDX,EAX
004D5B7D  8B C2                     MOV EAX,EDX
LAB_004d5b7f:
004D5B7F  2B F8                     SUB EDI,EAX
004D5B81  85 FF                     TEST EDI,EDI
004D5B83  0F 8F 9E 00 00 00         JG 0x004d5c27
004D5B89  8B 86 A0 02 00 00         MOV EAX,dword ptr [ESI + 0x2a0]
004D5B8F  85 C0                     TEST EAX,EAX
004D5B91  75 7B                     JNZ 0x004d5c0e
004D5B93  8B 8E 5C 03 00 00         MOV ECX,dword ptr [ESI + 0x35c]
004D5B99  6A 0E                     PUSH 0xe
004D5B9B  E8 C4 E6 F2 FF            CALL 0x00404264
004D5BA0  8B 8E 5C 03 00 00         MOV ECX,dword ptr [ESI + 0x35c]
004D5BA6  E8 64 E1 F2 FF            CALL 0x00403d0f
004D5BAB  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
004D5BAE  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D5BB4  83 F8 01                  CMP EAX,0x1
004D5BB7  6A 1D                     PUSH 0x1d
004D5BB9  75 0E                     JNZ 0x004d5bc9
004D5BBB  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004D5BC1  68 4C F5 7B 00            PUSH 0x7bf54c
004D5BC6  51                        PUSH ECX
004D5BC7  EB 0C                     JMP 0x004d5bd5
LAB_004d5bc9:
004D5BC9  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004D5BCF  68 40 F5 7B 00            PUSH 0x7bf540
004D5BD4  52                        PUSH EDX
LAB_004d5bd5:
004D5BD5  6A 06                     PUSH 0x6
004D5BD7  8B CF                     MOV ECX,EDI
004D5BD9  E8 A5 E5 F2 FF            CALL 0x00404183
004D5BDE  85 C0                     TEST EAX,EAX
004D5BE0  74 0E                     JZ 0x004d5bf0
004D5BE2  B8 FF FF 00 00            MOV EAX,0xffff
004D5BE7  5F                        POP EDI
004D5BE8  5E                        POP ESI
004D5BE9  5B                        POP EBX
004D5BEA  8B E5                     MOV ESP,EBP
004D5BEC  5D                        POP EBP
004D5BED  C2 04 00                  RET 0x4
LAB_004d5bf0:
004D5BF0  6A 06                     PUSH 0x6
004D5BF2  8B CF                     MOV ECX,EDI
004D5BF4  E8 DB C6 F2 FF            CALL 0x004022d4
004D5BF9  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D5BFE  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D5C04  51                        PUSH ECX
004D5C05  6A 06                     PUSH 0x6
004D5C07  8B CF                     MOV ECX,EDI
004D5C09  E8 32 F6 F2 FF            CALL 0x00405240
LAB_004d5c0e:
004D5C0E  C7 86 A8 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2a8],0x0
004D5C18  C7 86 A0 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2a0],0x1
004D5C22  E9 01 01 00 00            JMP 0x004d5d28
LAB_004d5c27:
004D5C27  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
004D5C2A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D5C2D  C1 E0 02                  SHL EAX,0x2
004D5C30  99                        CDQ
004D5C31  F7 FB                     IDIV EBX
004D5C33  89 86 A8 02 00 00         MOV dword ptr [ESI + 0x2a8],EAX
004D5C39  0F AF 81 AC 45 85 00      IMUL EAX,dword ptr [ECX + 0x8545ac]
004D5C40  8B D0                     MOV EDX,EAX
004D5C42  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D5C47  F7 EA                     IMUL EDX
004D5C49  C1 FA 05                  SAR EDX,0x5
004D5C4C  8B C2                     MOV EAX,EDX
004D5C4E  C1 E8 1F                  SHR EAX,0x1f
004D5C51  03 D0                     ADD EDX,EAX
004D5C53  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D5C58  89 96 CC 02 00 00         MOV dword ptr [ESI + 0x2cc],EDX
004D5C5E  8B 91 50 1C 7E 00         MOV EDX,dword ptr [ECX + 0x7e1c50]
004D5C64  0F AF 96 A8 02 00 00      IMUL EDX,dword ptr [ESI + 0x2a8]
004D5C6B  F7 EA                     IMUL EDX
004D5C6D  C1 FA 05                  SAR EDX,0x5
004D5C70  8B C2                     MOV EAX,EDX
004D5C72  C1 E8 1F                  SHR EAX,0x1f
004D5C75  03 D0                     ADD EDX,EAX
004D5C77  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D5C7C  89 96 D0 02 00 00         MOV dword ptr [ESI + 0x2d0],EDX
004D5C82  8B 91 FC 24 7E 00         MOV EDX,dword ptr [ECX + 0x7e24fc]
004D5C88  0F AF 96 A8 02 00 00      IMUL EDX,dword ptr [ESI + 0x2a8]
004D5C8F  F7 EA                     IMUL EDX
004D5C91  C1 FA 05                  SAR EDX,0x5
004D5C94  8B C2                     MOV EAX,EDX
004D5C96  8B BE D0 02 00 00         MOV EDI,dword ptr [ESI + 0x2d0]
004D5C9C  C1 E8 1F                  SHR EAX,0x1f
004D5C9F  03 D0                     ADD EDX,EAX
004D5CA1  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D5CA6  89 96 D4 02 00 00         MOV dword ptr [ESI + 0x2d4],EDX
004D5CAC  8B 91 60 31 7E 00         MOV EDX,dword ptr [ECX + 0x7e3160]
004D5CB2  0F AF 96 A8 02 00 00      IMUL EDX,dword ptr [ESI + 0x2a8]
004D5CB9  F7 EA                     IMUL EDX
004D5CBB  C1 FA 05                  SAR EDX,0x5
004D5CBE  8B C2                     MOV EAX,EDX
004D5CC0  C1 E8 1F                  SHR EAX,0x1f
004D5CC3  03 D0                     ADD EDX,EAX
004D5CC5  8B DA                     MOV EBX,EDX
004D5CC7  8B 96 CC 02 00 00         MOV EDX,dword ptr [ESI + 0x2cc]
004D5CCD  89 9E D8 02 00 00         MOV dword ptr [ESI + 0x2d8],EBX
004D5CD3  8B 81 AC 45 85 00         MOV EAX,dword ptr [ECX + 0x8545ac]
004D5CD9  2B C2                     SUB EAX,EDX
004D5CDB  8B 91 50 1C 7E 00         MOV EDX,dword ptr [ECX + 0x7e1c50]
004D5CE1  2B D7                     SUB EDX,EDI
004D5CE3  8B B9 FC 24 7E 00         MOV EDI,dword ptr [ECX + 0x7e24fc]
004D5CE9  8B 89 60 31 7E 00         MOV ECX,dword ptr [ECX + 0x7e3160]
004D5CEF  2B BE D4 02 00 00         SUB EDI,dword ptr [ESI + 0x2d4]
004D5CF5  2B CB                     SUB ECX,EBX
004D5CF7  85 C0                     TEST EAX,EAX
004D5CF9  7D 02                     JGE 0x004d5cfd
004D5CFB  33 C0                     XOR EAX,EAX
LAB_004d5cfd:
004D5CFD  85 D2                     TEST EDX,EDX
004D5CFF  7D 02                     JGE 0x004d5d03
004D5D01  33 D2                     XOR EDX,EDX
LAB_004d5d03:
004D5D03  85 FF                     TEST EDI,EDI
004D5D05  7D 02                     JGE 0x004d5d09
004D5D07  33 FF                     XOR EDI,EDI
LAB_004d5d09:
004D5D09  85 C9                     TEST ECX,ECX
004D5D0B  7D 02                     JGE 0x004d5d0f
004D5D0D  33 C9                     XOR ECX,ECX
LAB_004d5d0f:
004D5D0F  51                        PUSH ECX
004D5D10  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004D5D13  57                        PUSH EDI
004D5D14  52                        PUSH EDX
004D5D15  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004D5D18  50                        PUSH EAX
004D5D19  51                        PUSH ECX
004D5D1A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D5D20  6A 00                     PUSH 0x0
004D5D22  52                        PUSH EDX
004D5D23  E8 53 EC F2 FF            CALL 0x0040497b
LAB_004d5d28:
004D5D28  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D5D2D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D5D30  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D5D36  89 8E 48 03 00 00         MOV dword ptr [ESI + 0x348],ECX
004D5D3C  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004D5D3F  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5D42  89 86 4C 03 00 00         MOV dword ptr [ESI + 0x34c],EAX
004D5D48  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5D4E  33 C0                     XOR EAX,EAX
004D5D50  5F                        POP EDI
004D5D51  5E                        POP ESI
004D5D52  5B                        POP EBX
004D5D53  8B E5                     MOV ESP,EBP
004D5D55  5D                        POP EBP
004D5D56  C2 04 00                  RET 0x4
LAB_004d5d59:
004D5D59  8B 86 A0 02 00 00         MOV EAX,dword ptr [ESI + 0x2a0]
004D5D5F  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
004D5D62  3B C3                     CMP EAX,EBX
004D5D64  0F 85 CC 02 00 00         JNZ 0x004d6036
004D5D6A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004D5D6D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004D5D70  C7 86 A0 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2a0],0x1
004D5D7A  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004D5D7D  8D 4D D8                  LEA ECX,[EBP + -0x28]
004D5D80  51                        PUSH ECX
004D5D81  8B CE                     MOV ECX,ESI
004D5D83  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004D5D86  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004D5D89  C7 45 E8 0A 00 00 00      MOV dword ptr [EBP + -0x18],0xa
004D5D90  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004D5D93  E8 08 03 21 00            CALL 0x006e60a0
004D5D98  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D5D9E  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D5DA4  89 86 48 03 00 00         MOV dword ptr [ESI + 0x348],EAX
004D5DAA  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004D5DAD  89 8E 4C 03 00 00         MOV dword ptr [ESI + 0x34c],ECX
004D5DB3  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5DB6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5DBC  33 C0                     XOR EAX,EAX
004D5DBE  5F                        POP EDI
004D5DBF  5E                        POP ESI
004D5DC0  5B                        POP EBX
004D5DC1  8B E5                     MOV ESP,EBP
004D5DC3  5D                        POP EBP
004D5DC4  C2 04 00                  RET 0x4
LAB_004d5dc7:
004D5DC7  3D 01 44 00 00            CMP EAX,0x4401
004D5DCC  0F 85 64 02 00 00         JNZ 0x004d6036
004D5DD2  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
004D5DD5  8A 47 0E                  MOV AL,byte ptr [EDI + 0xe]
004D5DD8  3C 09                     CMP AL,0x9
004D5DDA  0F 84 8C 00 00 00         JZ 0x004d5e6c
004D5DE0  3C 17                     CMP AL,0x17
004D5DE2  0F 85 4E 02 00 00         JNZ 0x004d6036
004D5DE8  8B 86 A4 02 00 00         MOV EAX,dword ptr [ESI + 0x2a4]
004D5DEE  8B 7F 17                  MOV EDI,dword ptr [EDI + 0x17]
004D5DF1  3B C3                     CMP EAX,EBX
004D5DF3  75 54                     JNZ 0x004d5e49
004D5DF5  80 3F 1B                  CMP byte ptr [EDI],0x1b
004D5DF8  75 47                     JNZ 0x004d5e41
004D5DFA  83 BE EC 02 00 00 02      CMP dword ptr [ESI + 0x2ec],0x2
004D5E01  75 16                     JNZ 0x004d5e19
004D5E03  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
004D5E09  3B C3                     CMP EAX,EBX
004D5E0B  7E 0C                     JLE 0x004d5e19
004D5E0D  83 F8 64                  CMP EAX,0x64
004D5E10  7F 07                     JG 0x004d5e19
004D5E12  B8 01 00 00 00            MOV EAX,0x1
004D5E17  EB 02                     JMP 0x004d5e1b
LAB_004d5e19:
004D5E19  33 C0                     XOR EAX,EAX
LAB_004d5e1b:
004D5E1B  3B C3                     CMP EAX,EBX
004D5E1D  0F 84 13 02 00 00         JZ 0x004d6036
004D5E23  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5E26  C7 86 A4 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2a4],0x1
004D5E30  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5E36  33 C0                     XOR EAX,EAX
004D5E38  5F                        POP EDI
004D5E39  5E                        POP ESI
004D5E3A  5B                        POP EBX
004D5E3B  8B E5                     MOV ESP,EBP
004D5E3D  5D                        POP EBP
004D5E3E  C2 04 00                  RET 0x4
LAB_004d5e41:
004D5E41  3B C3                     CMP EAX,EBX
004D5E43  0F 84 ED 01 00 00         JZ 0x004d6036
LAB_004d5e49:
004D5E49  80 3F 1C                  CMP byte ptr [EDI],0x1c
004D5E4C  0F 85 E4 01 00 00         JNZ 0x004d6036
004D5E52  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D5E55  89 9E A4 02 00 00         MOV dword ptr [ESI + 0x2a4],EBX
004D5E5B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D5E61  33 C0                     XOR EAX,EAX
004D5E63  5F                        POP EDI
004D5E64  5E                        POP ESI
004D5E65  5B                        POP EBX
004D5E66  8B E5                     MOV ESP,EBP
004D5E68  5D                        POP EBP
004D5E69  C2 04 00                  RET 0x4
LAB_004d5e6c:
004D5E6C  83 BE EC 02 00 00 02      CMP dword ptr [ESI + 0x2ec],0x2
004D5E73  75 16                     JNZ 0x004d5e8b
004D5E75  8B 86 A8 02 00 00         MOV EAX,dword ptr [ESI + 0x2a8]
004D5E7B  3B C3                     CMP EAX,EBX
004D5E7D  7E 0C                     JLE 0x004d5e8b
004D5E7F  83 F8 64                  CMP EAX,0x64
004D5E82  7F 07                     JG 0x004d5e8b
004D5E84  B8 01 00 00 00            MOV EAX,0x1
004D5E89  EB 02                     JMP 0x004d5e8d
LAB_004d5e8b:
004D5E8B  33 C0                     XOR EAX,EAX
LAB_004d5e8d:
004D5E8D  3B C3                     CMP EAX,EBX
004D5E8F  0F 84 A1 01 00 00         JZ 0x004d6036
004D5E95  8B 86 70 03 00 00         MOV EAX,dword ptr [ESI + 0x370]
004D5E9B  BB 03 00 00 00            MOV EBX,0x3
004D5EA0  85 C0                     TEST EAX,EAX
004D5EA2  89 9E EC 02 00 00         MOV dword ptr [ESI + 0x2ec],EBX
004D5EA8  C7 86 E8 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2e8],0x1
004D5EB2  75 10                     JNZ 0x004d5ec4
004D5EB4  8B 16                     MOV EDX,dword ptr [ESI]
004D5EB6  68 61 03 00 00            PUSH 0x361
004D5EBB  53                        PUSH EBX
004D5EBC  8B CE                     MOV ECX,ESI
004D5EBE  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004d5ec4:
004D5EC4  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
004D5ECA  83 F8 6C                  CMP EAX,0x6c
004D5ECD  75 0C                     JNZ 0x004d5edb
004D5ECF  39 9E 51 02 00 00         CMP dword ptr [ESI + 0x251],EBX
004D5ED5  0F 84 2A 01 00 00         JZ 0x004d6005
LAB_004d5edb:
004D5EDB  83 F8 54                  CMP EAX,0x54
004D5EDE  7C 09                     JL 0x004d5ee9
004D5EE0  83 F8 5A                  CMP EAX,0x5a
004D5EE3  0F 8E 1C 01 00 00         JLE 0x004d6005
LAB_004d5ee9:
004D5EE9  8A 86 F0 02 00 00         MOV AL,byte ptr [ESI + 0x2f0]
004D5EEF  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D5EF5  50                        PUSH EAX
004D5EF6  8B CF                     MOV ECX,EDI
004D5EF8  E8 D8 B8 F2 FF            CALL 0x004017d5
004D5EFD  8B 8E 41 02 00 00         MOV ECX,dword ptr [ESI + 0x241]
004D5F03  8B 96 EC 02 00 00         MOV EDX,dword ptr [ESI + 0x2ec]
004D5F09  6A 00                     PUSH 0x0
004D5F0B  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004D5F0E  8B 8E 64 03 00 00         MOV ECX,dword ptr [ESI + 0x364]
004D5F14  8B 54 C1 04               MOV EDX,dword ptr [ECX + EAX*0x8 + 0x4]
004D5F18  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
004D5F1B  8A 8E F0 02 00 00         MOV CL,byte ptr [ESI + 0x2f0]
004D5F21  52                        PUSH EDX
004D5F22  8B 00                     MOV EAX,dword ptr [EAX]
004D5F24  50                        PUSH EAX
004D5F25  51                        PUSH ECX
004D5F26  8B CF                     MOV ECX,EDI
004D5F28  E8 8D BF F2 FF            CALL 0x00401eba
004D5F2D  8B 96 41 02 00 00         MOV EDX,dword ptr [ESI + 0x241]
004D5F33  8B 86 EC 02 00 00         MOV EAX,dword ptr [ESI + 0x2ec]
004D5F39  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
004D5F3C  8B 96 64 03 00 00         MOV EDX,dword ptr [ESI + 0x364]
004D5F42  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004D5F45  8A 8E F0 02 00 00         MOV CL,byte ptr [ESI + 0x2f0]
004D5F4B  50                        PUSH EAX
004D5F4C  51                        PUSH ECX
004D5F4D  8B CF                     MOV ECX,EDI
004D5F4F  E8 10 B1 F2 FF            CALL 0x00401064
004D5F54  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D5F5A  8A 8E F0 02 00 00         MOV CL,byte ptr [ESI + 0x2f0]
004D5F60  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D5F66  50                        PUSH EAX
004D5F67  51                        PUSH ECX
004D5F68  8B CF                     MOV ECX,EDI
004D5F6A  E8 D1 F2 F2 FF            CALL 0x00405240
004D5F6F  8B 86 70 03 00 00         MOV EAX,dword ptr [ESI + 0x370]
004D5F75  85 C0                     TEST EAX,EAX
004D5F77  0F 84 92 00 00 00         JZ 0x004d600f
004D5F7D  8A 96 F0 02 00 00         MOV DL,byte ptr [ESI + 0x2f0]
004D5F83  8B CF                     MOV ECX,EDI
004D5F85  FE CA                     DEC DL
004D5F87  52                        PUSH EDX
004D5F88  E8 48 B8 F2 FF            CALL 0x004017d5
004D5F8D  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
004D5F93  8B 8E EC 02 00 00         MOV ECX,dword ptr [ESI + 0x2ec]
004D5F99  6A 00                     PUSH 0x0
004D5F9B  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
004D5F9E  8B 86 64 03 00 00         MOV EAX,dword ptr [ESI + 0x364]
004D5FA4  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004D5FA8  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
004D5FAB  51                        PUSH ECX
004D5FAC  8B CF                     MOV ECX,EDI
004D5FAE  8B 10                     MOV EDX,dword ptr [EAX]
004D5FB0  8A 86 F0 02 00 00         MOV AL,byte ptr [ESI + 0x2f0]
004D5FB6  FE C8                     DEC AL
004D5FB8  52                        PUSH EDX
004D5FB9  50                        PUSH EAX
004D5FBA  E8 FB BE F2 FF            CALL 0x00401eba
004D5FBF  8B 8E 41 02 00 00         MOV ECX,dword ptr [ESI + 0x241]
004D5FC5  8B 96 EC 02 00 00         MOV EDX,dword ptr [ESI + 0x2ec]
004D5FCB  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004D5FCE  8B 8E 64 03 00 00         MOV ECX,dword ptr [ESI + 0x364]
004D5FD4  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
004D5FD7  8A 86 F0 02 00 00         MOV AL,byte ptr [ESI + 0x2f0]
004D5FDD  FE C8                     DEC AL
004D5FDF  52                        PUSH EDX
004D5FE0  50                        PUSH EAX
004D5FE1  8B CF                     MOV ECX,EDI
004D5FE3  E8 7C B0 F2 FF            CALL 0x00401064
004D5FE8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D5FEE  8A 86 F0 02 00 00         MOV AL,byte ptr [ESI + 0x2f0]
004D5FF4  FE C8                     DEC AL
004D5FF6  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D5FFC  8B CF                     MOV ECX,EDI
004D5FFE  52                        PUSH EDX
004D5FFF  50                        PUSH EAX
004D6000  E8 3B F2 F2 FF            CALL 0x00405240
LAB_004d6005:
004D6005  8B 86 70 03 00 00         MOV EAX,dword ptr [ESI + 0x370]
004D600B  85 C0                     TEST EAX,EAX
004D600D  75 27                     JNZ 0x004d6036
LAB_004d600f:
004D600F  8D BE 50 03 00 00         LEA EDI,[ESI + 0x350]
004D6015  81 C6 08 03 00 00         ADD ESI,0x308
LAB_004d601b:
004D601B  83 3E 00                  CMP dword ptr [ESI],0x0
004D601E  74 0D                     JZ 0x004d602d
004D6020  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
004D6026  8B 0F                     MOV ECX,dword ptr [EDI]
004D6028  E8 E2 DC F2 FF            CALL 0x00403d0f
LAB_004d602d:
004D602D  83 C7 04                  ADD EDI,0x4
004D6030  83 C6 10                  ADD ESI,0x10
004D6033  4B                        DEC EBX
004D6034  75 E5                     JNZ 0x004d601b
LAB_004d6036:
004D6036  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004D6039  33 C0                     XOR EAX,EAX
004D603B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D6041  5F                        POP EDI
004D6042  5E                        POP ESI
004D6043  5B                        POP EBX
004D6044  8B E5                     MOV ESP,EBP
004D6046  5D                        POP EBP
004D6047  C2 04 00                  RET 0x4
LAB_004d604a:
004D604A  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
004D604D  68 1C F5 7B 00            PUSH 0x7bf51c
004D6052  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D6057  56                        PUSH ESI
004D6058  53                        PUSH EBX
004D6059  68 E5 04 00 00            PUSH 0x4e5
004D605E  68 BC F4 7B 00            PUSH 0x7bf4bc
004D6063  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D6069  E8 62 74 1D 00            CALL 0x006ad4d0
004D606E  83 C4 18                  ADD ESP,0x18
004D6071  85 C0                     TEST EAX,EAX
004D6073  74 01                     JZ 0x004d6076
004D6075  CC                        INT3
LAB_004d6076:
004D6076  68 E6 04 00 00            PUSH 0x4e6
004D607B  68 BC F4 7B 00            PUSH 0x7bf4bc
004D6080  53                        PUSH EBX
004D6081  56                        PUSH ESI
004D6082  E8 B9 FD 1C 00            CALL 0x006a5e40
004D6087  8B C6                     MOV EAX,ESI
004D6089  5F                        POP EDI
004D608A  5E                        POP ESI
004D608B  5B                        POP EBX
004D608C  8B E5                     MOV ESP,EBP
004D608E  5D                        POP EBP
004D608F  C2 04 00                  RET 0x4
