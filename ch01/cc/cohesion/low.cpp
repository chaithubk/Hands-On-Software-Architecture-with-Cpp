class CachingProcessor {
 public:
  Result process(WorkItem work);
  Results processBatch(WorkBatch batch);
  void addListener(const Listener &listener);
  void removeListener(const Listener &listener);

 private:
  void addToCache(const WorkItem &work, const Result &result);
  void findInCache(const WorkItem &work);
  void limitCacheSize(std::size_t size);
  void notifyListeners(const Result &result);
  // ...
};
