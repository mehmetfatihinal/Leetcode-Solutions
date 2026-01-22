#include <iostream>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }
    
private:
    TreeNode* buildBST(vector<int>& nums, int left, int right) {
        // Base case: geçersiz aralık
        // bu durum vectorun bos oldugu anda gerceklesir
        if (left > right) {
            return nullptr;
        }
        
        // Ortadaki elemanı bul
        // mid indeksi en buyuk ve en kucuk indekslerin birbirinden cikarilip ikiye bolunmesiyle bulunur
        int mid = left + (right - left) / 2;
        
        // Yeni düğüm oluştur
        // mid indeks degerini alip node olusturuyoruz 
        TreeNode* root = new TreeNode(nums[mid]);
        
        // Sol ve sağ alt ağaçları recursive oluştur
        // burada yeni gelecek olan dugumlerin yerlerini bulabilmemiz icin olusturulmus bir recursive
        root->left = buildBST(nums, left, mid - 1);
        root->right = buildBST(nums, mid + 1, right);
        
        return root;
    }
};